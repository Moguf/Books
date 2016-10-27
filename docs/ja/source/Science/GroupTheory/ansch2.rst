第２章　解答
==============

2.1.1
------------

:math:`G = {0,1}` であるとき、 :math:`0\cdot0=0,\ 0\cdot1=1\cdot0=0,\ 1\cdot1=1` で演算を定義すると、Gは群でないことを証明せよ。

Answer
^^^^^^^^

単位元a,bを考える。

.. math::
   
   1 \cdot a = 1  \\
   0 \cdot b = 0

この結果と単位元の唯一性より、 :math:`a=b=1` となる。

0の逆元をcと置くと

.. math::

   0 \cdot c \neq 1

となり、 そんなcが存在しなことになり、0の逆元は存在しない。

よって、 :math:`G` は群ではない。
   


2.1.2
------------

:math:`a,b\in{\mathbb R}` に対し、 :math:`a\circ b =a+b+ab` と演算を定義する。この演算より、 :math:`{\mathbb R}` が群にならないことを証明せよ。

Answer
^^^^^^^^

解き方は1.1.1とほぼ同じである。単位元との演算と逆元との演算から矛盾を見つけ出す。

まずは単位元を決定するために、単位元をeとすると

.. math::
   :nowrap:

   \begin{eqnarray*}
   && a \circ e = a \\
   &\Leftrightarrow& a+e+ae = a \\
   &\Leftrightarrow& e+ae = 0 \\
   &\Leftrightarrow& e(1+a) = 0    
   \end{eqnarray*}   

どんなaに対しても上記の式が成り立つためには、 :math:`e=0` となる。ここでaの逆元をcとすると

.. math::
   :nowrap:

   \begin{eqnarray*}
   && a \circ c = 0 \\
   &\Leftrightarrow& a+c+ac = 0 \\
   &\Leftrightarrow& c(1+a) = -a \\
   &\Leftrightarrow& c = -\frac{a}{1+a}
   \end{eqnarray*}   

ここで :math:`a=-1` とすると、 その逆元dが存在しない、つまり、:math:`d\notin {\mathbb R}` であるから、この演算より、 :math:`{\mathbb R}` は群にならない。

2.1.3
------------

:math:`{\mathfrak S}_3` の乗法表を作れ、表だけでよい。

Answer
^^^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*}
   \begin{tabular}{|r|r|r|r|r|r|r|}
   \hline & e    & (12)  & (13) & (23) & (123) & (132) \\ \hline
   e      & e    & (12)  & (13) & (23) & (123) & (132) \\ \hline
   (12)   & (12) & e     & (123)& (23) & (123) & (132) \\ \hline
   (13)   & (13) & (132) & e    & (23) & (123) & (132) \\ \hline
   (23)   & (23) & (123) & (132) & e    & (123) & (132) \\ \hline
   (123)  & (123)& (23)  & (13) & (23) & e     & (132) \\ \hline
   (132)  & (132)& (23)  & (13) & (23) & (123) & e     \\ \hline                                        
   \end{tabular}
   \end{eqnarray*}



2.1.4
------------
:math:`a,b,c,d \in G` とするとき、 :math:`((ab)c)d=a((bc)d)` であることを証明せよ。

Answer
^^^^^^^^

.. math::
   :nowrap:
      
   \begin{eqnarray*}
   ((ab)c)d &=& (ab)(cd) \\
   &=& a(b(cd))   \\
   &=& a((bc)d)
   \end{eqnarray*}


2.1.5
------------
:math:`a,b,c,d \in G` とするとき、 :math:`bac^{-1}d=abd` であるとき、cを他の元で表せ。


Answer
^^^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*}
   &\Leftrightarrow& bac^{-1}d = abd   \\
   &\Leftrightarrow& bac^{-1} = abdd^{-1}  \\
   &\Leftrightarrow& ac^{-1} = b^{-1}ab  \\
   &\Leftrightarrow& c^{-1} = a^{-1}b^{-1}ab  \\
   &\Leftrightarrow& c = (a^{-1}b^{-1}ab)^{-1}  \\
   &\Leftrightarrow& c = b^{-1}a^{-1}ba
   \end{eqnarray*}


2.1.6
------------

:math:`{\mathfrak S}_4` の元

.. math::
   :nowrap:

   \begin{eqnarray*}
   \sigma_1 = (1432) =
      \left(
      \begin{array}{rrrr}
      1 & 2 & 3 & 4\\
      4 & 1 & 2 & 3\\
      \end{array}
      \right),\hspace{10pt}
   \sigma_2 = (13)(24) =
      \left(
      \begin{array}{rrrr}
      1 & 2 & 3 & 4\\
      3 & 4 & 1 & 2\\
      \end{array}
      \right), \\
   \sigma_3 = (234) =
      \left(
      \begin{array}{rrrr}
      1 & 2 & 3 & 4\\
      1 & 3 & 4 & 2\\
      \end{array}
      \right),\hspace{10pt}
   \sigma_4 = (13) =
      \left(
      \begin{array}{rrrr}
      1 & 2 & 3 & 4\\
      3 & 2 & 1 & 4\\
      \end{array}
      \right)
   \end{eqnarray*}

を考えると以下の元を求めよ。

.. math::
   :nowrap:

   \begin{eqnarray*}
   && (1)\hspace{5pt}\sigma^{-1}_{1}\hspace{15pt}
   (2)\hspace{5pt}\sigma^{-1}_{2}\hspace{15pt}
   (3)\hspace{5pt}\sigma_{1}\sigma_{3}\hspace{15pt}
   (4)\hspace{5pt}\sigma^{-1}_{2}\sigma_{4} \\
   && (5)\hspace{5pt}\sigma_{3}\sigma_{1}\sigma^{-1}_{3}\hspace{15pt}
   (6)\hspace{5pt}\sigma^{-1}_{2}\sigma_{4}\sigma_{2} 
    \end{eqnarray*}   
   

Answer
^^^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*}
   && (1) \hspace{5pt}\sigma_1^{-1}=(1234)=\left(\begin{array}{rrrr}
       1 & 2 & 3 & 4 \\
       2 & 3 & 4 & 1
       \end{array}\right)
       \\
   && (2) \hspace{5pt}\sigma_2^{-1}=(13)(24)=\left(\begin{array}{rrrr}
       1 & 2 & 3 & 4 \\
       3 & 4 & 1 & 2
       \end{array}\right)
       \\
   && (3) \hspace{5pt}\sigma_1\sigma_3=(1432)(234)=(14)(43)(32)(23)(34)
       \\&&\hspace{20pt}=(14)=
       \left(\begin{array}{rrrr}
       1 & 2 & 3 & 4 \\
       4 & 2 & 3 & 1
       \end{array}\right)
       \\
   && (4) \hspace{5pt}\sigma_2^{-1}\sigma_4=(13)(24)(13)=(24)
       \\&&\hspace{20pt}=
       \left(\begin{array}{rrrr}
       1 & 2 & 3 & 4 \\
       1 & 4 & 3 & 2
       \end{array}\right)
       \\
   && (5) \hspace{5pt}\sigma_3\sigma_1\sigma_3^{-1}=(234)(1432)(243)
       \\&&\hspace{20pt}=
       \left(\begin{array}{rrrr}
       1 & 2 & 3 & 4 \\
       2 & 4 & 1 & 3
       \end{array}\right)
       = (1243)
       \\
   && (6) \hspace{5pt}\sigma_2^{-1}\sigma_4\sigma_2=(13)(24)(13)(13)(24)
       \\&&\hspace{20pt}=(13)=
       \left(\begin{array}{rrrr}
       1 & 2 & 3 & 4 \\
       3 & 2 & 1 & 4
       \end{array}\right)
   \end{eqnarray*}


2.2.1
------------
環 :math:`{\mathbb Z}/7{\mathbb Z}` において、次を計算せよ。

.. math::
   :nowrap:
   
   \begin{eqnarray*}
   && (1)\hspace{5pt}\bar{4}+\bar{5}\hspace{15pt}
   (2)\hspace{5pt}\bar{2}-\bar{5}\hspace{15pt}
   (3)\hspace{5pt}\bar{4}\times\bar{5}\hspace{15pt}
   (4)\hspace{5pt}\bar{5}^{3}\hspace{15pt} \\
   && (5)\hspace{5pt}\bar{4}^{32}\hspace{15pt}
   \end{eqnarray*}   

Answer
^^^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*}
   &&(1)\hspace{5pt} \bar{2} \\
   &&(2)\hspace{5pt} \bar{4} \\
   &&(3)\hspace{5pt} \bar{6} \\
   &&(4)\hspace{5pt} \overline{25} \times \bar{5} = \bar{4}\times\bar{5} = \bar{6} \\
   &&(5)\hspace{5pt} \overline{16}^{16} = \bar{2}^{16} = \bar{4}^{8} = \overline{16}^{4} = \bar{2}^{4} = \overline{16} =\bar{2}
   \end{eqnarray*}


2.2.2
------------

環 :math:`{\mathbb Z}/39{\mathbb Z}` において、次を計算せよ。

.. math::
   :nowrap:
   
   \begin{eqnarray*}
   && (1)\hspace{5pt}\overline{34}\times\overline{21}\times\overline{33}\hspace{15pt}
   (2)\hspace{5pt}\overline{25}\times\overline{18}\times\overline{13}\hspace{15pt}   
   (3)\hspace{5pt}\overline{16}^{8}\hspace{15pt}
   (4)\hspace{5pt}\overline{16}^{34}\hspace{15pt}
   \end{eqnarray*}   

Answer
^^^^^^^^

.. math::
   :nowrap:

   \begin{eqnarray*}
   && (1)\hspace{5pt} =\bar{2}\cdot\overline{17}\times\bar{3}\cdot\bar{7}\times\bar{3}\cdot\overline{11} =
      \overline{51}\times\overline{42}\times\overline{11} \\
      &&\hspace{23pt}=\overline{12}\times\bar{3}\times\overline{11} = \overline{132}\times\bar{3} =\overline{15}\times\bar{3}=\bar{6}\\
   && (2)\hspace{5pt} =\overline{25} \times\bar{6}\times\overline{39} = \bar{0} \\
   && (3)\hspace{5pt} = \overline{256}^4=\overline{22}^4 = \overline{44}\cdot\overline{44}\cdot\overline{11}\cdot\overline{11} \\
   &&\hspace{23pt}=\bar{5}\cdot\bar{5}\cdot\overline{11}\cdot\overline{11} = \overline{55}\cdot\overline{55} =\overline{15}\times\bar{3}=\bar{6}\\
   && (4)\hspace{5pt} = \overline{16}^{8\cdot4}\cdot\overline{16}^2 = \bar{6}^4\cdot\overline{22} = \overline{36}\cdot\overline{18}\cdot\overline{44} \\
   &&\hspace{23pt}= \overline{36}\cdot\overline{18}\cdot\bar{5} =\overline{36}\cdot\overline{80} = \overline{36}\cdot\bar{2} = \overline{33}
   \end{eqnarray*}


2.3.1
------------
:math:`G` を群、 :math:`H\subset G` を空でない部分集合とするとき、 :math:`H` が部分群であるための
必要十分条件は、任意の :math:`x,y\in H` に対して :math:`x^{-1}y\in H` であることを証明せよ。

Answer
^^^^^^^^
まずは、部分群の復習。

| `命題2.3.2` 群Gの部分集合HがGの部分群になるための必要十分条件は、次の３つの条件が満たされることである。
| (1) :math:`1_G\in H` .
| (2) :math:`x,y\in H` なら :math:`xy\in H`.
| (3) :math:`x\in H` なら :math:`x^{-1}\in H`.

まずは、

| '':math:`H` が部分群 :math:`\Rightarrow` 任意の :math:`x,y\in H` に対して :math:`x^{-1}y\in H` を証明する。''

:math:`x,y\in H` ならばHが部分群であるから、 :math:`x^{-1},y^{-1}\in H` そして、 :math:`x^{-1}y\in H` となり、上記は証明された。

そして、

| '':math:`H` が部分群 :math:`\Leftarrow` 任意の :math:`x,y\in H` に対して :math:`x^{-1}y\in H` を証明する。''

ここで、 `命題2.3.2` を使う。 :math:`y=x` とすると、 :math:`x^{-1}y\in H \Rightarrow x^{-1}x\in H \Rightarrow e_H\in H`  となる。 :math:`e_H\in G` とすると、 :math:`e_He^{-1}_H = e_He_H =e_G` となることから、 :math:`e_G = e_H` となる。 :math:`e\in H` を証明したので、 :math:`y=e` とすると、 :math:`x^{-1}\in H` となる。 :math:`x=x^{-1}` とすると、 :math:`xy\in H` となる。よって、上記の命題は証明された。

以上より、題意は示された。      
      

2.3.2
------------

.. math::
   :nowrap:

   \begin{eqnarray*}
   J_n =
      \left(
      \begin{array}{rr}
      0 & I_n \\
      -I_n & 0
      \end{array}
      \right)
   \end{eqnarray*}

とし、 :math:`J_n` は :math:`2n\times 2n` 行列である。 :math:`Sp(2n)=\{g\in GL_{2n}({\mathbb R})| \ ^tgJ_ng=J_n\}` とし、 :math:`Sp(2n)` をシンプレティック群という。
   
n次正則行列 :math:`GL_n({\mathbb R})` とすると、 :math:`Sp(2n) \subset GL_{2n}({\mathbb R})` が部分群であることを証明せよ。

Answer
^^^^^^^^

:math:`g,h\in Sp(2n)` とすると

.. math::
   :nowrap:

   \begin{eqnarray*}
   ^t(gh)J_n(gh) &=& ^th^tgJ_ngh = ^thJ_nh = J_n
   \end{eqnarray*}

となり、:math:`g h\in Sp(2n)` となる。

:math:`g^{-1}\in GL_{2n}({\mathbb R})` であるから

.. math::
   :nowrap:

   \begin{eqnarray*}
   && ^t(g^{-1})J_ng^{-1} = A   \\
   && \Leftrightarrow (^tg)^{-1}J_ng^{-1} = A  \\
   && \Leftrightarrow J_n = ^tgAg   
   \end{eqnarray*}

となり、 :math:`A=J_n` であるから、 :math:`g^{-1}\in J_n` となる。

:math:`g^{-1},g \in Sp(2n)` であるから、

.. math::
   :nowrap:

   \begin{eqnarray*}
   && ^t(gg^{-1})J_ngg^{-1} = J_n   \\
   && \Leftrightarrow I_nJ_nI_n = J_n
   \end{eqnarray*}

よって、 :math:`I_n \in Sp(2n)` となる。

以上より、 :math:`Sp(2n) \subset GL_{2n}({\mathbb R})` となり、部分群となる。
   


2.3.3
------------
:math:`G=GL_n({\mathbb C}),\hspace{5pt}U(n)=\{g\in G| \ ^t\bar{g}g=I_n\}` とする。このとき、 :math:`U(n)` をユニタリ群という。 :math:`\bar{g}` は :math:`g` のすべての成分の複素共役をとった行列である。 :math:`U(n)\subset GL_n({\mathbb C})` が部分群であることを証明せよ。

Answer
^^^^^^^^

:math:`g,h\in U(n)` とすると

.. math::
   :nowrap:

   \begin{eqnarray*}
   ^t(\overline{gh})gh = ^t\bar{h} ^t\bar{g}gh = ^t\bar{h}h = I_n
   \end{eqnarray*}

となり、:math:`g,h\in U(n)` となる。

:math:`g^{-1}\in U(n)` であるから

.. math::
   :nowrap:

   \begin{eqnarray*}
   && ^t(\bar{g}^{-1})g^{-1} = A   \\
   && \Leftrightarrow (^t\bar{g})^{-1}\bar{g}^{-1} = A  \\
   && \Leftrightarrow A = ^t\bar{g}\bar{g}
   \end{eqnarray*}

となり、 :math:`A=I_n` であるから、 :math:`g^{-1}\in U(n)` となる。

:math:`g^{-1},g \in U(n)` であるから、

.. math::
   :nowrap:

   \begin{eqnarray*}
   ^t(\overline{gg}^{-1})gg^{-1} = ^t\bar{g}^{-1} {}^t\bar{g}gg^{-1} = I_n
   \end{eqnarray*}

よって、 :math:`I_n \in U(n)` となる。

以上より、 :math:`U(n) \subset GL_{2n}({\mathbb R})` となり、部分群となる。



2.3.4
------------
:math:`G=GL_n({\mathbb R})` 、BをGの元で下三角行列であるもの全体の集合とする。

(1) BはGの部分群であることを証明せよ。
(2) Bは可換群か？

Answer
^^^^^^^^


2.3.5
------------
:math:`{\mathbb R}^{\times} = {\mathbb R}\setminus \{0\}` を乗法により群とみなす。このとき、正の実数の集合 :math:`{\mathbb R}_>` は :math:`{\mathbb R}^{\times}` の部分群であることを証明せよ。

Answer
^^^^^^^^

2.3.6
------------
:math:`{\mathbb R}` を加法により群とみなす。このとき、正の実数の集合 :math:`{\mathbb R}_>` は :math:`R` の部分群であることを証明せよ。

   
Answer
^^^^^^^^

2.3.7
------------
:math:`{\mathbb C}^{\times}` を通常の乗法により群とみなす。このとき、正の整数nを固定し、 :math:`H=\{z\in{\mathbb C}^{\times}|z^n=1\}`  集合 :math:`{\mathbb R}_>` とおく。 :math:`H` が :math:`{\mathbb C}^{\times}` の位数nの巡回部分群であることを証明せよ。
   
Answer
^^^^^^^^

2.3.8
------------
1. :math:`{\mathbb R}` を加法により群とみなす。このとき、正の実数の集合 :math:`{\mathbb R}_>` は :math:`R` の部分群であることを証明せよ。
2. :math:`{\mathbb Q}` が加法に関して巡回群ではないことを証明せよ。
3. :math:`{\mathbb R}` が加法に関して巡回群ではないことを証明せよ。
4. :math:`{\mathbb Q}^{\times}` が乗法に関して巡回群ではないことを証明せよ。
5. :math:`{\mathbb Z}\times{\mathbb Z}` が加法に関して巡回群ではないことを証明せよ。
   
Answer
^^^^^^^^

2.3.9
------------

1. :math:`{\mathfrak S}_n` は :math:`\sigma_1 = (12), \cdot\cdot\cdot ,\sigma_{n-1} = (n-1 n)` によって生成されることを証明せよ。

2. :math:`{\mathfrak S}_n` は :math:`\sigma = (12\cdot\cdot\cdot n)` と  :math:`\tau = (1 2)` によって生成されることを証明せよ。

Answer
^^^^^^^^

2.4.1
------------

1. 36と-48の最大公約数と最小公倍数を求めよ。
   
2. 35と24は互いに素か？

Answer
^^^^^^^^

2.4.2
------------

1. 395と265の最大公約数dをユークリッドの互除法を使って求めよ。
   
2. :math:`395x+265y=d` となる整数x,yの組を一つみつけよ。



Answer
^^^^^^^^

2.4.3
------------

1. :math:`{\mathbb Z}/7{\mathbb Z}` において、 :math:`\bar{2},\cdot\cdot\cdot\bar{6}` の乗法に関する逆元を求めよ。
   
2. :math:`{\mathbb Z}/284{\mathbb Z}` において、 :math:`\bar{3}` の乗法に関する逆元を求めよ。

Answer
^^^^^^^^

2.4.4
------------

pが素数で :math:`n>0` が整数なら、 :math:`|({\mathbb Z})/p^n {\mathbb Z})^{\times}| = (p-1)p^{n-1}` であることを証明せよ。

Answer
^^^^^^^^

2.4.5
------------

Gを群、 :math:`x\in G` を位数60の元とするとき、 :math:`x^{35}` の位数を求めよ。

Answer
^^^^^^^^

2.4.6
------------

Gを群、 :math:`x\in G` を位数 :math:`d<\infty` の元とする。 nを位数とするとき、 :math:`x^n` の位数を求めよ。

Answer
^^^^^^^^

2.4.7
------------

Gが次の群であるとき、Gを生成する元をすべて求めよ。

1. :math:`{\mathbb Z}/5{\mathbb Z}`
2. :math:`{\mathbb Z}/7{\mathbb Z}`
3. :math:`{\mathbb Z}/8{\mathbb Z}`
4. :math:`{\mathbb Z}/9{\mathbb Z}`
5. :math:`{\mathbb Z}/15{\mathbb Z}`

Answer
^^^^^^^^


2.4.8
------------
群Gのすべての元gが :math:`g^2=1` となるなら、Gは可換群であることを証明せよ。


Answer
^^^^^^^^

2.4.9
------------
:math:`G=GL_2({\mathbb R})` とし、 :math:`g=\left(\begin{array}{rr} 0 & -1 \\ 1 & 0 \end{array}\right), h=\left(\begin{array}{rr} 1 & 1 \\ -1 & 0 \end{array}\right)` とおく。

1. g.h の位数を求めよ。
2. ghを計算し、ghの位数が無限であることを証明せよ。


Answer
^^^^^^^^


2.4.10
------------
Gを可換群とする。

1. :math:`a,b\in G` の位数が有限なら、abの位数も有限であることを証明せよ。
2. HをGの有限位数の元全体の集合とするとき、HがGの部分群であることを証明せよ。   


Answer
^^^^^^^^



2.5.1
------------
G,Hをそれぞれ元の個数がm,nの巡回群で、x,yをそれぞれの生成元とする。このとき、次の問いに答えよ。

1. 「 :math:`x^{i_1}=x^{i_2}` であるようなすべての :math:`i_i,i_2\in {\mathbb Z}` に対し、 :math:`y^{i_1}=y^{i_2}` 」という性質が成り立つためにm,nが満たさなければならない必要十分条件を求めよ。

2. \1\. の性質を満たすm,nに対しては、すべての :math:`i\in {\mathbb Z}` に対して、 :math:`\phi(x^i) = y^i` となるような準同型写像 :math:`\phi :G\to H` が存在することを証明せよ。

Answer
^^^^^^^^

2.5.2
------------


Answer
^^^^^^^^

2.5.3
------------
Answer
^^^^^^^^

2.5.4
------------
Answer
^^^^^^^^

2.5.5
------------
Answer
^^^^^^^^

2.5.6
------------
Answer
^^^^^^^^

2.6.1
------------
Answer
^^^^^^^^

2.6.2
------------
Answer
^^^^^^^^

2.6.3
------------
Answer
^^^^^^^^

2.6.4
------------
Answer
^^^^^^^^

2.6.5
------------
Answer
^^^^^^^^

2.6.6
------------
Answer
^^^^^^^^

2.7.1
------------
Answer
^^^^^^^^

2.7.2
------------
Answer
^^^^^^^^

2.7.3
------------
Answer
^^^^^^^^

2.7.4
------------
Answer
^^^^^^^^

2.7.5
------------
Answer
^^^^^^^^

2.7.6
------------
Answer
^^^^^^^^

2.8.1
------------
Answer
^^^^^^^^

2.8.2
------------
Answer
^^^^^^^^

2.8.3
------------
Answer
^^^^^^^^

2.8.4
------------
Answer
^^^^^^^^

2.8.5
------------
Answer
^^^^^^^^

2.8.6
------------
Answer
^^^^^^^^

2.9.1
------------
Answer
^^^^^^^^

2.9.2
------------
Answer
^^^^^^^^

2.9.3
------------
Answer
^^^^^^^^

2.9.4
------------
Answer
^^^^^^^^

2.9.5
------------
Answer
^^^^^^^^

2.9.6
------------
Answer
^^^^^^^^

2.10.1
------------
Answer
^^^^^^^^

2.10.2
------------
Answer
^^^^^^^^

2.10.3
------------
Answer
^^^^^^^^

2.10.4
------------
Answer
^^^^^^^^

2.10.5
------------
Answer
^^^^^^^^

2.10.6
------------
Answer
^^^^^^^^
