第ー章　解答
==============

.. contents:: 目次
   :depth: 2

1.1(基本)
--------

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
   
1.2(基本)
--------
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


1.3(標準)
---------

3個の色分けされた箱r(赤)、b(青)、g(緑)を考える 箱rには3個のりんご、4個のオレンジ、3個のライムが入っており、箱bには1個のりんご、1個のオレンジ、0個のライムが入っており、箱gには3個のりんご、3個のオレンジ、4個のライムが入つている箱を :math:`P(r)=0.2` 、 :math:`P(b)=0.2` 、 :math:`P(g)=0.6` という確率でランダムに選び、果物を箱から1個取り出す (箱の中のものは等確率で選ばれるとする)とき、りんごを選び出す確率を求めよ.また、選んだ果物がオレンジであったとき、それが緑の箱から取り出されたものである確率はいくらか?

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

   P(G|o) = \frac{ P(o|G) P(G) }{ P(o) } = \frac{\frac{3}{10}\frac{3}{5}}{\frac{18}{50}} = \frac{9}{18} = \frac{1}{2}


1.4(標準)
----------

連続変数 :math:`x` 上で定義された確率密度 :math:`p_x(x)` を考える。 :math:`x=g(y)` により非線形変換を施すと密度は以下の変換を受ける。

.. math::
   :nowrap:
      
   \begin{eqnarray}
   p_y(y) &=& p_x(x)\left|\frac{dx}{dy}\right| \nonumber \\
   &=& p_x(g(y))|g'(y)| 
   \end{eqnarray}


上記を微分して, :math:`y` に関する密度を最大にする位置 :math:`\hat{y}` と :math:`x` に関する密度を最大にする位置 :math:`\hat{x}` とが,ヤコビ因子の影響によリー般には単純な :math:`\hat{x} = g(\hat{y})` という関係にないことを示せ これは確率密度の最大値が,(通常の関数と異なり)変数の選択に依存することを示している。線形変換の場合には最大値の位置が変数自身と同じ変換を受けることを確かめよ。

Answer
^^^^^^^

この問題のポイントは変数変換が非線形であるかどうかである。まずは問題文の言う通りに、 :math:`(1)` を微分すると

.. math::
   :nowrap:

   \setcounter{equation}{1}            
   \begin{eqnarray}
   \frac{dp_y(y)}{dy} &=& \frac{d}{dy}p_x(g(y)) | g'(y)| \nonumber \\
   &=& g'(y)\frac{dp_x(g(y))}{dg(y)}+p_x(y)|g''(y)|
   \end{eqnarray}   
   
このとき、題意より

.. math::
   
   \frac{dp_y(y)}{dy}|_{\hat{y}} = 0

であるから、 :math:`(2)` は

.. math::
   :nowrap:
      
   \setcounter{equation}{2}                  
   \begin{eqnarray}
   g'(\hat{y})\frac{dp_x(g(y))}{dg(y)}|_{\hat{y}}+p_x(\hat{y})|g''(\hat{y})| &=& 0 
   \end{eqnarray}

ここで、 :math:`\hat{x} = g(\hat{y})` と仮定すると :math:`(3)` は

.. math::
   :nowrap:
      
   \setcounter{equation}{3}                  
   \begin{eqnarray}
   g'(\hat{y})\frac{dp_x(x)}{dx}|_{\hat{x}}+p_x(\hat{y})|g''(\hat{y})| &=& 0 
   \end{eqnarray}


しかし、

.. math:: \frac{dp_x(x)}{dx}|_{\hat{x}} = 0

であるから、 :math:`(4)` は

.. math::

   p_x(\hat{y})|g''(\hat{y})| = 0

ここで、 :math:`g(y)` が非線形変換であるから、 :math:`g''(y) \neq 0` よって

.. math::
   
   p_x(\hat{y}) = 0

が常に成り立たなければならない。これは :math:`p_x(x)` が確率密度であることに反する。よって

.. math::

   \hat{x} \neq g(\hat{y}).


:math:`x=g(y)` が線形変換である場合、

.. math::

   x = g(y) = ay + b

としても題意に反しない。これを :math:`(1)` に代入すると

.. math::

   p_y(y) = a p_x(ay+b)

となり、 :math:`y = \hat{y}` のとき、最大値の位置が変数と同じ変換を受けていることが確認できた。




1.5(基本)
---------

.. math::
   {\rm var}[f] = {\bf E} [ (f(x) - {\bf E}[f(x)])^2 ]

であるとき、以下で表せることを確かめよ.

.. math::
   {\rm var}[f] = {\bf E} [ (f(x)^2 ] - {\bf E}[f(x)]^2 


Answer
^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*}
   {\rm var}[f] &=& {\bf E} [ (f(x) - {\bf E}[f(x)])^2 ] \\
   &=& {\bf E} [(f(x)^2 - 2f(x){\bf E}[f(x)] + {\bf E}[f(x)]^2] \\
   &=& {\bf E} [(f(x)^2] - 2{\bf E}[f(x)]{\bf E}[f(x)] + {\bf E}[f(x)]^2 \\
   &=& {\bf E} [(f(x)^2] -  {\bf E}[f(x)]^2      
   \end{eqnarray*}



1.6(基本)
---------

2つの変数 x,y が独立なら,それらの共分散は0になることを示せ.

Answer
^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*} 
   cov(x,y) &=& {\bf E}_{x,y}[(x-{\bf E}[x])(y-{\bf E}[y])]  \\
   &=& {\bf E}_{x,y}[xy-x{\bf E}[y]-y{\bf E}[x]+{\bf E}[x]{\bf E}[y]] \\
   &=& {\bf E}_{x,y}[xy]-{\bf E}_{x,y}[x]{\bf E}[y]-{\bf E}_{x,y}[y]{\bf E}[x]+{\bf E}[x]{\bf E}[y] \\
   &=& {\bf E}_x[x]{\bf E}_y[y]-{\bf E}_x[x]{\bf E}[y]-{\bf E}_y[y]{\bf E}[x]+{\bf E}[x]{\bf E}[y] = 0
   \end{eqnarray*}   


1.7(標準)
----------

ガウス分布の規格化されていることを確かめよ。

Answer
^^^^^^

この問題は、ガウス積分と名前がついているほど非常に有名な問題です。広義積分の例題として学ぶことが多いのではないでしょうか。物理系の人ならば統計力学で復習するはず。

私のために、広義積分の復習も載せておきます。

| :math:`{\bf R}` の半開区間 :math:`{\it I} = [a,b)(b=+\infty\ ok)` で定義された実数値函数 :math:`f` が次の `1),2)` をみたすものとする。
| 1) 任意の :math:`u\in{\it I}` に対し、有界閉区間 :math:`[a,u]` で :math:`f` は有界で可積分である。
| 2) :math:`\displaystyle \lim_{u\to b - 0}\int_a^b f(x)dx = J\in{\bf R}` が存在する。
| このとき、 :math:`f` は :math:`{\it I} = [a,b)` で **広義可積分** であるという。また :math:`J` を :math:`I` における :math:`f` の( **広義** ) **積分** という。

問題通りに進めると、

.. math::

   I = \int_{\infty}^{+\infty} exp\left( -\frac{1}{2\sigma^2}x^2 \right) dx

その2乗を考えると

.. math::

   I^2 = \int_{\infty}^{+\infty} \int_{\infty}^{+\infty}  exp\left( -\frac{1}{2\sigma^2}x^2 -\frac{1}{2\sigma^2}y^2 \right) dxdy

ここで直交座標系 :math:`(x,y)` から極座標 :math:`(r,\theta)` に変換する :math:`(x=rcos\theta, y=rsin\theta)` 。ヤコビアンは

.. math::
   :nowrap:
      
   \begin{eqnarray*}
   \left|\frac{\partial(x,y)}{\partial(r,\theta)}\right| &=&
   \left|
      \begin{array}{cc}
      \frac{dx}{dr} & \frac{dx}{d\theta}  \\
      \frac{dy}{dr} & \frac{dy}{d\theta}
      \end{array}
   \right| \\
   &=&    \left|
      \begin{array}{cc}
      rcos\theta & -sin\theta  \\
      rsin\theta & cos\theta
      \end{array}
   \right| \\
   &=& r(cos^2\theta+sin^2\theta) = r
   \end{eqnarray*}   

積分範囲は 

.. math::

   (-\infty < x < \infty, -\infty < y < \infty) \\
   \to (0 < r < \infty, 0 < \theta < 2\pi)

よって、 :math:`I^2` は

.. math::
   :nowrap:

   \begin{eqnarray*}
   I^2 &=& \int_{0}^{\infty} \int_{0}^{2\pi}  exp\left( -\frac{1}{2\sigma^2}r^2 \right) rdrd\theta \\
   &=& 2\pi \int_{0}^{\infty} r exp\left( -\frac{1}{2\sigma^2}r^2 \right) dr \\
   &=& -2\sigma^2\pi \int_{0}^{\infty} \left\{ exp\left( -\frac{1}{2\sigma^2}r^2 \right) \right\} ' dr \\
   &=& 2\sigma^2\pi
   \end{eqnarray*}

よって、 :math:`I=\sqrt{2\sigma^2\pi}` となり、同時に正規分布は規格化されていることが示された。

1.8
----

.. math::

   {\sl N}(x|\mu,\sigma^2) = \frac{1}{(2\pi\sigma^2)^{1/2}}exp\left\{ -\frac{1}{2\sigma^2}(x-\mu)^2\right\}

が

.. math::

   {\bf E}[x] = \int^{\infty}_{-\infty} N(x|\mu,\sigma^2) x dx = \mu

を満たすことを示せ。

次に、規格化条件の式を :math:`\sigma^2` に関して微分して

.. math::

   {\bf E}[x^2] = \int^{\infty}_{-\infty} N(x|\mu,\sigma^2) x^2 dx = \mu^2 + \sigma^2

最後に、以下が成り立つことを示せ。

.. math::

   var[x] = {\bf E} [x^2]-{\bf E} [x]^2 = \sigma^2


Answer
^^^^^^


1.9
----
Answer
^^^^^^

1.10
----

:math:`x,z` が統計的に独立であるとすると、以下が成り立つことを示せ。

.. math::
   :nowrap:

   \begin{eqnarray}
   {\bf E}[x+z] = {\bf E}[x] + {\bf E}[z] \\
   var[x+z] = var[x] + var[z]
   \end{eqnarray}

Answer
^^^^^^
まずは、(1)から示す。確率分布が離散分布でも連続分布でも同様に示すことが出来るので、ここでは連続分布で証明する。

.. math::
   :nowrap:

   \begin{eqnarray*}
   {\bf E}[x+z] &=& \int^{\infty}_{-\infty} \int^{\infty}_{-\infty} p(x, z)(x+z) dxdz \\
   &=& \int^{\infty}_{-\infty} \int^{\infty}_{-\infty} p(x)p(z)(x+z) dxdz \\
   &=& \int^{\infty}_{-\infty} p(x)xdx + \int^{\infty}_{-\infty} p(z)z dz \\
   &=& {\bf E}[x] + {\bf E}[z]
   \end{eqnarray*}   

次に、(2)は上記の結果を使って

.. math::
   :nowrap:

   \begin{eqnarray*}
   var[x+z] &=& {\bf E}[(x+z)^2] + {\bf E}[x+z]^2  \\
   &=& {\bf E}[x^2 + 2xz + z^2] + ({\bf E}[x] + {\bf E}[z])^2 \\
   &=& {\bf E}[x^2] + {\bf E}[2xz] + {\bf E}[z^2] - ( {\bf E}[x]^2 + 2{\bf E}[x]{\bf E}[z] + {\bf E}[z]^2) \\
   &=& {\bf E}[x^2] + 2{\bf E}[x]{\bf E}[z] + {\bf E}[z^2] - ( {\bf E}[x]^2 + 2{\bf E}[x]{\bf E}[z] + {\bf E}[z]^2) \\
   &=& {\bf E}[x^2] -{\bf E}[x]^2 + {\bf E}[z^2] - {\bf E}[z]^2 \\
   &=& var[x] + var[z]
   \end{eqnarray*}
   
   

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
