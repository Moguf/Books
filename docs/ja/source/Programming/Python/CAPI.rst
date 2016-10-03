C/C++ API
---------

Python2でのCAPIとは異なるため、もう一度勉強しなおさなければならない。主にPython2とPython3の違いに注目しながらまとめていく。日本語のドキュメントがあるので、それを参考にする。


* インクルードファイル

.. code-block:: C

   #include "Python.h"

.. note::
   　Python.hを最初にインクルードしなければならない。   
  
* オブジェクト、

API関数はPyObject*型を一つ以上の引数と戻り地を持つ。PyObject型はstaticとして宣言することはできない。

* 参照カウント法

参照カウントとはオブジェクトが参照されている場所の数を示している。もちろん０であれば、参照されていないので、オブジェクトは開放される。

.. code-block:: C

   PyObject *item;

   Py_INCREF(item); // increments
   Py_DECREF(item); // decremants
   Py_XDECREF(item); // NULL参照すると、Py_DECREFはクラッシュする。 
   

以下は、PyObjectを作るときに便利な関数であるPy_BuildValueの紹介。
.. code-block:: C
                
   // List and tuple
   PyObject *tuple, *list;

   tuple = Py_BuildValue("(iis)", 1, 2, "three");
   list = Py_BuildValue("[iis]", 1, 2, "three");

PythonのAPIは参照の所有権を返す関数とそうでない関数があるため、注意して使う必要がある。もし、参照に関する操作を怠れば、必要なときに値を参照できなくなるし、必要ないのにメモリ上に居座ってしまうことが発生する。   

   
  
* 例外

Pythonでは例外処理を明示的に書かなくても、例外が伝搬するので最終的にはインタプリタが報告してくれる。Cプログラマはそんなことはなく、エラーチェックを常に明示的に行わなければならない。Cでは、ある関数がエラーを起こすとすべての参照を放棄してエラー値を返す。そのためPyErr_Occurred()で明示的にエラーを返さなければならない。

:完全な例外情報: 例外の型、例外の値、トレースバックを含む情報。

* Pythonの埋め込み                 

Pythonはインタプリタを使っているので、その初期化と終了処理を行わなければならない。

.. code-block:: C

   Py_Initialize();  //初期化
   PySys_SetArgvEx(argc, argv, updatepath); //スクリプトの引数獲得。
   
   Py_Finalize();  //Pythonが確保したメモリを開放する。

* デバッグ版ビルド

Py_DEBUGマクロを有効にしてコンパイルするとデバッグビルドすることができる。

* ABI(Application Binary Interface)

現在のAPIはバイナリレベルの互換性まで適用されない。


