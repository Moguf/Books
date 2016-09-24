Effective Modern C++: 42 Specific Ways to Improve Your Use of C++11 and C++14
====================================================================================

型省略
-----

* テンプレートによるTypeの型省略を理解せよ。(Understand template type deduction)
* Autoによる型宣言の省略を理解せよ。(Understand auto type deduction)
* decltypeの理解せよ。(Understand decltype)
* 型省略の見方を知る。(Know how to view deduced types)

auto
----

* autoより、明示的型宣言を好め。(Prefer auto to explicit type declarations)
* autoが望まない型を省略するとき、型明治宣言初期化を使え。(Use the explicitly typed initializer idiom when auto deduces undesired types)

もだんC＋＋への移行
--------------------

* オブジェクトを作るときに()と{}を区別せよ。(Distinguish between () and {} when creating objects)
* 0やNULLよりnullptrを使え。(Prefer nullptr to 0 and NULL)
* typedef 宣言よりalias宣言を好め。
* スコープなしenumより、スコープ付きenumを好め。
* プライベートで非制限の消去された関数を使うより、消去された関数を好め。
* オーバーライド関数はoverrideとして宣言せよ。
* iteratorよりconst_iteratorを好め。
* 例外を出したくない場合は関数にnoexceptを宣言せよ。
* できる限りいつでもconstexprを使え。
* constのメンバ関数をスレッドセーフにせよ。
* 特別メンバ関数の生成を理解せよ。

Smart Pointers
--------------

* std::unique_ptrを排他的オーナーシップリソース管理のために使え。
* std::shared_ptrをshared-ownershipのリソース管理のために使え。
* std::weak_ptrをstd::shared_ptrのようなポインタのために使え。
* newを直接使うより、std::make_uniqueとstd::make_sharednをnewの使用をせよ。
* Pimpl Idiomを使うとき、埋め込みファイルの中で特別メンバ関数を定義せよ。

Rvalue ReferencesとMove SemanticsとPerfect Forwarding
--------------------------------------------------------

* std::moveやstd::forwardを理解せよ。
* rvalue 参照と普遍参照を区別せよ。
* rvalue参照に対してstd::moveを普遍参照に対してstd::forwardを使え。
* 普遍参照に対してオーバーロードをすることは避けよ。
* 普遍参照に対するオーバーロードの代替物と一緒にそれ自身を家族化せよ。
* 参照の崩壊を理解せよ。
* move作用が存在せず、チープで使えないことを想定せよ。
* perfect forwardingの失敗ケースとともに家族化せよ。


Lambda例外
----------

*
*
*
*

The Concurrency API
----------------------------------------------

*
*
*
*
*
*

Tweaks
------

*
*
