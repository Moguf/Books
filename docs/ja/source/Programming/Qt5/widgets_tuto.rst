Widgetsチュートリアル
======================

WidgetsはGUIアプリケーションを構成するための基本ブロックとなる。それぞれのコンポーネントはユーザーインターフェースWindowのどこかに配置されるWidgetsであし、独立したwindowとして描画される。様々なwidgetsの種類は **Qwidget** のサブクラスとして提供されている。

**Qwidget** は抽象クラスではなく、他のwidgetsのコンテナとなり、新しいwidgetsを作るときにも簡単にサブクラス化することができる。 **QWidget** は **QWidget** を含む新しいWindowを作るときによく使われる。


.. contents:: 目次
   :local:
   :depth: 1



0. Main Function
--------------

.. code-block:: cpp

   #include <iostream>
   #include <QtWidgets>

   int main(int argc, char **argv){
       QApplication app(argc, argv);
       // QApplicationはQtにコマンドライン引数を渡すための関数であり、一番最初に実行される。
       // widgetsが作られた後に、QApplication.exec()でQtのメインループが始まる.
       
       return app.exec();
   }

1. Windowを作る。
------------------
リファレンス( window_ )


.. code-block:: cpp

   #include <iostream>
   #include <QtWidgets>

   int main(int argc, char **argv){
       QApplication app(argc, argv);
       QWidget w;
       w.resize(320, 240);
       w.show();
       w.setWindowTitle(
                QApplication::translate("toplevel", "Top-level widgets"));


       return app.exec();
   }

.. _window: http://doc.qt.io/qt-5/qtwidgets-tutorials-widgets-toplevel-example.html   

2. 子Widgetsを作る。
------------------------

.. literalinclude:: src/src/childwidget.cpp
   :language: cpp

3. Layoutsの使い方
------------------------   

一般的に、場所やサイズを明示的に指定するより、子widgetsはlayoutオブジェクトを用いて配置される。ここでは、ラベルとedit窓を並べた例を示す。

.. literalinclude:: src/src/layouts.cpp
   :language: cpp

このlayoutオブジェクトは **addWidget()** 関数で提供される配置とサイズの情報を操作することができる。レイアウト自体は、 **setLayout()** を呼び出すことによって作ることができる。

上記の例では、オブジェクトの所属が明らかではない。親オブジェクトなしで、widgetsやlaytouを作成したので、ラベルを含むウィンドウとedit窓を含むウィンドウの二つができると思ってしまうかもしれない。しかし、レイアウトにラベルとエディットの操作を伝え、windowにlayoutをセットすると、二つのWidgetsとレイアウト自体はウィンドウの子となるために再親化(reparented:親なし->親がwindow)される。

4. ネスト化されたLayouts
------------------------

3.のようにwidgetsに他のwidgetsを埋め込むことができる。そして、layoutsはwidgetsをグループ化するために異なるレベルを提供している。ここでは、先の例に加え、さらにクエリーの結果を示す表を付け加える。

上記の例を実行するために、二つのLayoutを作る。queryLytは **QHBoxLayout** であり、これは **QLabel** と **QLineEdit** を並んで配置する。mainLytは **QVBoxLayout** であり、queryLytと **QTableView** を垂直に配置する。

.. literalinclude:: src/src/nestedlayouts.cpp
   :language: cpp

注意する点は、mainLytの **addLayout()** 関数であり、この関数はresultViewの上にqueryLytを配置している。

ここの例では、QTableViewによってmodelデータが示されていないが、下のコードを実行することで完璧な例を実行することができる。

**QHBoxLayout** や **QVBoxLayout** と同様に、より複雑なインターフェースを実行すために、Qtは **QGridLayout** や **QFormLayout** クラスの提供もしている。

.. literalinclude:: src/src/nestedlayouts2.cpp
   :language: cpp


