第ー章　解答
==============

.. contents:: 目次
   :depth: 2

1.1
---

.. math::


   y(x, w) = \sum^{M}_{j=0} w_j x^j ,\hspace{5pt}
   E({\bf w}) = \frac{1}{2} \sum^{N}_{n=1} \{y(x_n, {\bf w}) - t_n\}^2

であるとき、   

.. math::

   \sum^{M}_{j=0}A_{ij}w_j = T_i

を示せ。ただし、

.. math::

   A_{ij} = \sum^{N}_{n=1} (x_n)^{i+j}, \hspace{5pt}
   T_{i} =  \sum^{N}_{n=1} (x_n)^{i} t_n

とする。

Answer   
^^^^^^^

誤差関数を最小にするために :math:`w_i` で微分すると、誤差が最小となる時、以下が成り立つので、

.. math::

   \frac{dE({\bf w})}{d w_i} = 0

となる。上記の左辺を書き直すと

.. math::
   :nowrap:
      
   \begin{eqnarray*}
   \frac{dE({\bf w})}{d w_i} &=&
   \sum^{N}_{n=1} \frac{dy}{dw_i} (y(x_n, w_j)-t_n) \\
   &=& \sum^{N}_{n=1} x^i_n \{ \sum_{j=0}^{M} w_j x_n^j - t_n) \}   \\
   &=& \sum_{j=0}^{M}\sum^{N}_{n=1} w_j x_n^{i+j} - \sum^{N}_{n=1} x^i_n t_n \\
   &=& \sum_{j=0}^{M} w_j A_{ij} -  T_i = 0
   \end{eqnarray*}

よって、題意は成り立つ。   
   
1.2
---
過学習を防ぐため正則化項を加えた二乗和誤差関数(1.4)を考える。この誤差関数を1.1と同様の方法で表現せよ。

.. math::

   \tilde{E}({\bf w}) = \frac{1}{2} \sum^{N}_{n=1} \{ y(x_n,{\bf w}) - t_n\}^2 + \frac{\lambda}{2} \|{\bf w} \|^2

Answer
^^^^^^^^

1.1と同様に、誤差関数を最小にするために :math:`w_i` で微分すると、誤差が最小となる時、以下が成り立つので、

.. math::

   \frac{d\tilde{E}({\bf w})}{d w_i} = 0

となる。上記の左辺を書き直すと

.. math::
   :nowrap:

   \begin{eqnarray}
   \frac{d \tilde{E}({\bf w})}{d w_i} &=& \sum^{N}_{n=1} \frac{d y(x_n,{\bf w})}{d w_i} (y(x_n, {\bf w}) -t_n) + \lambda w_i 
   \end{eqnarray}   

関数 :math:`y` に関する情報がないと、これ以上簡単にすることができない。よって、関数  :math:`y` が線形モデルであると仮定する。（問いに `線形方程式系を書き下せ` とあるので、線形モデルを仮定しても良いと思う。`線形方程式の必要条件が線形モデルであるかどうかは証明していない。`）

関数 :math:`y` が **線形モデル** であると仮定すると、関数 :math:`y` は以下のように書くことが出来る。

.. math::

   y(x_n, {\bf w}) = \sum_{i=0}^{M} w_i f_i(x_n)

関数 :math:`f_i(x_n)` は任意の関数であるとしてよいと思う。( :math:`f_0(x) = 1` で :math:`x_n` で値を持つくらいはマトモであって欲しい。）すると(1)は以下のように書き直すことが出来る。

.. math::
   :nowrap:

   \setcounter{equation}{1}      
   \begin{eqnarray} 
   \frac{d \tilde{E}({\bf w})}{d w_i} &=&
   \sum^{N}_{n=1} \frac{d y(x_n,{\bf w})}{d w_i} (y(x_n, {\bf w}) -t_n) + \lambda w_i \\
   &=& \sum^{N}_{n=1} f_i(x_n) \{ \sum^{M}_{j=0}f_j(x_n)w_j -t_n \} + \lambda w_i \\
   &=& \sum^{N}_{n=1} \sum^{M}_{j=0} f_i(x_n) f_j(x_n)w_j - \sum^{N}_{n=1} f_i(x_n) t_n + \lambda w_i       
   \end{eqnarray}   
   
ここで、

.. math::

   A_{ij} = \sum^{N}_{n=1} f_i(x_n)f_j(x_n), \hspace{5pt}
   T_{i} =  \sum^{N}_{n=1} f_i(x_n)^{x_n} t_n + \lambda w_i

とし、(4)に代入すると、
   
.. math::
   :nowrap:

   \begin{eqnarray*}
   \frac{d \tilde{E}({\bf w})}{d w_i} &=& \sum_{j=0}^{M} w_j A_{ij} -  T_i = 0
   \end{eqnarray*}   

となる。


1.3
---

3個の色分けされた箱r(赤)、b(青)、g(緑)を考える 箱rには3個のりんご、4個のオレンジ、3個のライムが入っており、箱bには1個のりんご、1個のオレンジ、0個のライムが入っており、箱gには3個のりんご、3個のオレンジ、4個のライムが入つている箱をP(r)=0.2、P(b)=0.2、P(g)=0.6という確率でランダムに選び、果物を箱から1個取り出す (箱の中のものは等確率で選ばれるとする)とき、りんごを選び出す確率を求めよ.また、選んだ果物がオレンジであったとき、それが緑の箱から取り出されたものである確率はいくらか?

Answer
^^^^^^

本文中に赤と青の例が記載されているので、わからない場合は本文を参照すればいい。ここでは、確率の基本法則を用いればよい。

.. math::
   :nowrap:

   \begin{eqnarray*}
   p(X) &=& \sum_Y p(X,Y)\hspace{15pt} (sum\ rule) \\
   p(X,Y) &=& p(Y|X)p(X)\hspace{15pt} (product\ rule)
   \end{eqnarray*}

ここからは、箱は大文字で表記し、りんご(r)、オレンジ(o)、ライム(r)とする。

果物を箱から1個取り出すとき、りんごを選び出す確率は以下になる

.. math::
   :nowrap:

   \begin{eqnarray*}
   P(a) &=& \sum^{R,B,G}_{box} p(a,box) = \sum^{R,B,G}_{box} p(a|box)p(box) \\
   &=& p(a|R)p(R) + p(a|B)p(B) + p(a|G)p(G) \\
   &=& \frac{3}{10}\frac{1}{5} + \frac{1}{2}\frac{1}{5} + \frac{3}{10}\frac{3}{5} = \frac{17}{50}
   \end{eqnarray*}

選んだ果物がオレンジであったとき、それが緑の箱であるときの確率は

.. math::

   P(G|o) = \frac{ P(o|G) P(G) }{ P(o) } = \frac{\frac{3}{10}\frac{1}{5}}{\frac{18}{50}} = \frac{3}{18} = \frac{1}{6}


1.4
---

連続変数x上で定義された確率密度 :math:`p_x(x)` を考える。 :math:`x=g(y)` により非線形変換を施すと密度は以下の変換を受ける。

.. math::
   :nowrap:
      
   \begin{eqnarray*}
   p_y(y) &=& p_x(x)\left|\frac{dx}{dy}\right| \\
   &=& p_x(g(y))|g'(y)|
   \end{eqnarray*}


s(1.27)を 微分して,ν に関する密度を最大にする位置クと′′に関する密度を最大にする位置分とが,ヤ コビ因子の影響 によリー般には単純な分=θ(の という関係にないことを示せ これは確率密度の最 大値が,(通常の関数と異なり)変数の選択に依存することを示している 線形変換 の場合には最大値の位置が変数自身と同じ変換を受けることを確かめよ

Answer
^^^^^^^


1.5
----

.. math::
   {\rm var}[f] = {\bf E} [ (f(x) - {\bf E}[f(x)])^2 ]

であるとき、以下で表せることを確かめよ.

.. math::
   {\rm var}[f] = {\bf E} [ (f(x)^2 ] - {\bf E}[f(x)]^2 


Answer
^^^^^^

1.6
----

2つの変数 x,y が独立なら,それらの共分散は0になることを示せ.

Answer
^^^^^^

1.7
----
Answer
^^^^^^

1.8
----
Answer
^^^^^^

1.9
----
Answer
^^^^^^

1.10
----
Answer
^^^^^^

1.11
----
Answer
^^^^^^

1.12
----
Answer
^^^^^^

1.13
----
Answer
^^^^^^

1.14
----
Answer
^^^^^^

1.15
----
Answer
^^^^^^

1.16
----
Answer
^^^^^^

1.17
----
Answer
^^^^^^

1.18
----
Answer
^^^^^^

1.19
----
Answer
^^^^^^

1.20
----
Answer
^^^^^^

1.21
----
Answer
^^^^^^

1.22
----
Answer
^^^^^^

1.23
----
Answer
^^^^^^

1.24
----
Answer
^^^^^^

1.25
----
Answer
^^^^^^

1.26
----
Answer
^^^^^^

1.27
----
Answer
^^^^^^

1.28
----
Answer
^^^^^^

1.29
----
Answer
^^^^^^

1.30
----
Answer
^^^^^^

1.31
----
Answer
^^^^^^

1.32
----
Answer
^^^^^^

1.33
----
Answer
^^^^^^

1.34
----
Answer
^^^^^^

1.35
----
Answer
^^^^^^

1.36
----
Answer
^^^^^^

1.37
----
Answer
^^^^^^

1.38
----
Answer
^^^^^^

1.39
----
Answer
^^^^^^

1.40
----
Answer
^^^^^^

1.41
----
Answer
^^^^^^
