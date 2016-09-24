Effective JavaScript: 68 Specific Ways to Harness the Power of JavaScript
=========================================================================

1. Javascriptのバージョンを把握せよ
--------------------------------------------------------

JavaScriptにも様々なバージョンがあるが、1999の３番目のバージョンであるECMAScriptが一番広く使われている。その後の2009年のバージョンであるES5もあるが、ES5ではさらなる機能の追加などがある。この本では、特にES5の機能について言及する。下記のように、constはバージョンによって振る舞いが異なるので注意が必要となる。


.. code-block:: js
                
   const PI = 3.14159:
   PI = "modified!";
   PI; // "modified" in ECMAScript


以下のステートメントを挿入することでコードの厳密な評価をしてくれる。"use strict"が有効になるのはファイルの先頭か関数の先頭に限る。

.. code-block:: js

   function f(x){
       "use strict";
        var arguments = [];
       // ...
   }

無名関数に入れることでさらに、安全に運用できる。

.. code-block:: js

   (function() { 
         "use strict";
         function f() { // ...
         }
         // ...
   })();

2. JavaScriptの浮動小数点を理解せよ。
------------------------------------
