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

:math:`g^{-1}\in GL(n)` であるから

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

\(1\)の解答。

:math:`A,C\in B` とする。 A,Cのij成分を :math:`a_{ij},c_{ij}` とすると、A,Cが下三角行列であることから、 :math:`a_{ij}=0,c_{ij}=0\hspace{10pt}(i<j)` となる。

ここで :math:`AC\in B` を証明するために、ACのij成分を考えると :math:`\{AB\}_{ij} = \sum^{n}_{k=1}a_{ik}c_{kj}` となる。この行列の(i<j)の成分について考えると、

1. :math:`k\le i<j` のとき,  :math:`c_{kj} = 0` とる。

2. :math:`i < k \le j` のとき,  :math:`a_{ik} =0` となる。

3. :math:`i<j<k` のとき,  :math:`a_{ik} =0` となる。

以上より、 :math:`\{AB\}_{ij} = 0(i<j)` となり、ABは下三角行列であり, :math:`AC\in B` となる。
   
また、単位行列は :math:`I_n\in B` となり、Bは単位元をもつ。

最後に、 :math:`AA^{-1}=I_n` を考えると :math:`a'_{ij} = A^{-1}_{ij}` とする。 :math:`AA^{-1} = \sum^{n}_{k=1}a_{ik}a'_{kj}` のようにij成分を定義する。i<jを考えると


2. :math:`i < k \le j` のとき,  :math:`a_{ik} =0` となる。

3. :math:`i<j<k` のとき,  :math:`a_{ik} =0` となる。

最後に、

1. :math:`k\le i<j` のとき,  :math:`a'_{kj} \neq 0` とすると

:math:`I_n` が下三角行列であることに反する。よって、 :math:`a'_{kj} = 0` となる。よって :math:`A^{-1}` も下三角行列をとなる。

以上より、 :math:`B\in GL_n({\mathbb R})` となり、部分群となる。
   

\(2\)の解答。


2.3.5
------------
:math:`{\mathbb R}^{\times} = {\mathbb R}\setminus \{0\}` を乗法により群とみなす。このとき、正の実数の集合 :math:`{\mathbb R}_>` は :math:`{\mathbb R}^{\times}` の部分群であることを証明せよ。

      
Answer
^^^^^^^^

:math:`a,b\in {\mathbb R}_{>}` とすると、 :math:`ab\in {\mathbb R}_{>}` となる。 :math:`1\in {\mathbb R}_{>}` であり :math:`ab=1` となるようなbを考えると、 :math:`b=1/a \in {\mathbb R}_{>}` となる。以上より、 :math:`{\mathbb R}_{>}` が :math:`{\mathbb R}\setminus\{0\}` の部分群であることが証明された。
      
2.3.6
------------
:math:`{\mathbb R}` を加法により群とみなす。このとき、正の実数の集合 :math:`{\mathbb R}_>` は :math:`{\mathbb R}` の部分群でないことを証明せよ。

Answer
^^^^^^^^
:math:`{\mathbb R}` の加法により定義された群の単位元は0となる。 :math:`a \in {\mathbb R}_>` を考えると、その逆元は :math:`-a \notin {\mathbb R}_>` となり、 :math:`{\mathbb R}_>` は :math:`R` の部分群でないことが証明された。


2.3.7
------------
:math:`{\mathbb C}^{\times}` を通常の乗法により群とみなす。このとき、正の整数nを固定し、 :math:`H=\{z\in{\mathbb C}^{\times}|z^n=1\}`  集合とおく。 :math:`H` が :math:`{\mathbb C}^{\times}` の位数nの巡回部分群であることを証明せよ。
   
Answer
^^^^^^^^

:math:`w\in H` を考えると、 :math:`w^2` は :math:`(w^2)^n = (w^n)^2 = (1)^2 =1` となり、 :math:`w^2 \in H` となる。 :math:`w^n` も同様の議論により、 :math:`w^n \in H` となる。 ここで :math:`w^{n+1} = w^nw = w` となることと上の議論より、 Hは生成元wで生成される位数nの :math:`{\mathbb C}` の巡回部分群となる。


2.3.8
------------
1. :math:`{\mathfrak S}_3` が巡回群ではないことを証明せよ。
2. :math:`{\mathbb Q}` が加法に関して巡回群ではないことを証明せよ。
3. :math:`{\mathbb R}` が加法に関して巡回群ではないことを証明せよ。
4. :math:`{\mathbb Q}^{\times}` が乗法に関して巡回群ではないことを証明せよ。
5. :math:`{\mathbb Z}\times{\mathbb Z}` が加法に関して巡回群ではないことを証明せよ。
   
Answer
^^^^^^^^

\(1\)
:math:`(13),(123) \in {\mathfrak S}_3` を考える。 :math:`(13)^n = (123)` となるnは存在しないため、 :math:`{\mathfrak S}_3` は巡回群ではない。

\(2\)
:math:`2,3 \in {\mathbb Q}` を考える。  :math:`2n = 3` と自然数nが存在しないため、 :math:`{\mathbb Q}` は加法に関して巡回群ではない。

\(3\)
\(2\)と同様の議論。

\(4\)
:math:`2,3 \in {\mathbb Q}^{\times}` を考える。  :math:`2^n = 3` となる 自然数nが存在しないため、 :math:`{\mathbb Q}^{\times}` は乗法に関して巡回群ではない。

\(5\)      
:math:`(1,1),(1,2) \in {\mathbb Z}\times{\mathbb Z}` を考えると :math:`(1,1)n = (1,2)` となる自然数nが存在しないため、:math:`{\mathbb Z}\times{\mathbb Z}` が加法に関して巡回群ではない.
      

      


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

\(1\) GCD(36,-48) = 12, LCM(36,-48) = 144,

\(2\) :math:`35=24+11,24=2\cdot 11+2,11=5\cdot 2 +1` となるため、互いに疎である。


2.4.2
------------

1. 395と265の最大公約数dをユークリッドの互除法を使って求めよ。

2. :math:`395x+265y=d` となる整数x,yの組を一つみつけよ。



Answer
^^^^^^^^

\(1\) :math:`395=265+130,\hspace{10pt}265=2\cdot 130+5,\hspace{10pt}130=5\cdot 26` よって, :math:`GCD(395,265)=5`

\(2\) :math:`5 = 265 - 2\cdot 130 = 265 - 2\cdot (395-265) = 3\cdot 265 - 2\cdot 395` よって :math:`(x,y)=(-2,3)`



2.4.3
------------

1. :math:`{\mathbb Z}/7{\mathbb Z}` において、 :math:`\bar{2},\cdot\cdot\cdot\bar{6}` の乗法に関する逆元を求めよ。
   
2. :math:`{\mathbb Z}/284{\mathbb Z}` において、 :math:`\bar{3}` の乗法に関する逆元を求めよ。

Answer
^^^^^^^^

\(1\) :math:`\bar{2}\cdot\bar{4}=\bar{1}\hspace{10pt}\bar{3}\cdot\bar{5}=\bar{1}\hspace{10pt}\bar{6}\cdot\bar{6}=\bar{1}`

\(2\) :math:`284=3\cdot 94 +2,\hspace{10pt} 3=2+1` なので、 :math:`1=3-2=3-(284-3\cdot 94)=284-3\cdot 95` よって :math:`\bar{95}\cdot\bar{3} = 1` となる。

2.4.4
------------

pが素数で :math:`n>0` が整数なら、 :math:`|({\mathbb Z}/p^n {\mathbb Z})^{\times}| = (p-1)p^{n-1}` であることを証明せよ。

Answer
^^^^^^^^



2.4.5
------------

Gを群、 :math:`x\in G` を位数60の元とするとき、 :math:`x^{35}` の位数を求めよ。

Answer
^^^^^^^^

:math:`LCM(60,35)=420` となり :math:`35\times 12` であるから、答えは12となる。

2.4.6
------------

Gを群、 :math:`x\in G` を位数 :math:`d<\infty` の元とする。 nを位数とするとき、 :math:`x^n` の位数を求めよ。

Answer
^^^^^^^^

`誤答`

位数をmとすると、題意より、

.. math::
   
   nm=bl

となるmと素なlが存在する。よって位数は :math:`m=bl/n` が整数となるときの最小数である。

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
 
\(1\) :math:`\bar{1},\bar{2},\bar{3},\bar{4}` 

\(2\) :math:`\bar{1},\bar{2},\bar{3},\bar{4},\bar{5},\bar{6}` 

\(3\) :math:`\bar{1},\bar{3},\bar{5},\bar{7}` 

\(4\) :math:`\bar{1},\bar{2},\bar{4},\bar{5},\bar{7},\bar{8}` 

\(5\) :math:`\bar{1},\bar{2},\bar{4},\bar{7},\bar{8},\bar{11},\bar{13},\bar{14}` 


2.4.8
------------
群Gのすべての元gが :math:`g^2=1` となるなら、Gは可換群であることを証明せよ。

Answer
^^^^^^^^

gの逆元を考えると :math:`g^{-1}g=1=gg \Leftrightarrow g^{-1}=g` となる。

:math:`g,h\in G` とすると :math:`gh=(gh)^{-1}=h^{-1}g^{-1}=hg` となり、Gは可換群である。


2.4.9
------------
:math:`G=GL_2({\mathbb R})` とし、 :math:`g=\left(\begin{array}{rr} 0 & -1 \\ 1 & 0 \end{array}\right), h=\left(\begin{array}{rr} 1 & 1 \\ -1 & 0 \end{array}\right)` とおく。

1. g.h の位数を求めよ。
2. ghを計算し、ghの位数が無限であることを証明せよ。


Answer
^^^^^^^^

\(1\)

:math:`g^2=\left(\begin{array}{rr} -1 & 0 \\ 0 & -1 \end{array}\right)` となることから、 :math:`g^4=I_2` となり、 :math:`|g|=4` となる。

:math:`h^3=\left(\begin{array}{rr} -1 & 0 \\ 0 & -1 \end{array}\right)` となることから、 :math:`h^6=I_2` となり、 :math:`|h|=6` となる。




2.4.10
------------
Gを可換群とする。

1. :math:`a,b\in G` の位数が有限なら、abの位数も有限であることを証明せよ。
2. HをGの有限位数の元全体の集合とするとき、HがGの部分群であることを証明せよ。   


Answer
^^^^^^^^

\(1\) a,bのそれぞれの位数をn,mとすると、 :math:`(ab)^{LCM(n,m)} = a^{LCM(n,m)}b^{LCM(n,m)} = 1` となることから、abの位数も有限である。

\(2\) Hは有限位数の元全体の集合であることから、 :math:`h\in H` とすると :math:`h^n = 1` となる正の整数nが存在する。このときhの逆元は :math:`h^{n-1}` となり、 :math:`h^{n-1}\in H` となる。 :math:`1^1 \in H` より、 :math:`1\in H` となる。最後に、 \(1\)より、 :math:`g,h\in H` のとき、 :math:`gh\in H` となる。以上より、HはGの部分群である。


2.5.1
------------
G,Hをそれぞれ元の個数がm,nの巡回群で、x,yをそれぞれの生成元とする。このとき、次の問いに答えよ。

1. 「 :math:`x^{i_1}=x^{i_2}` であるようなすべての :math:`i_i,i_2\in {\mathbb Z}` に対し、 :math:`y^{i_1}=y^{i_2}` 」という性質が成り立つためにm,nが満たさなければならない必要十分条件を求めよ。

2. \1\. の性質を満たすm,nに対しては、すべての :math:`i\in {\mathbb Z}` に対して、 :math:`\phi(x^i) = y^i` となるような準同型写像 :math:`\phi :G\to H` が存在することを証明せよ。

Answer
^^^^^^^^

題意より :math:`x^{lm+k} = x^k` となる整数l,kが存在する。yについて考えると、 :math:`y^{lm+k} = y^k` を満たすとすると、 lmはnの倍数で割り切れる必要がある。よって :math:`lm=in` となる整数iが存在する。逆は省略。

2.5.2
------------

Gを可換群とする。 :math:`n\in {\mathbb Z}` とするとき、 :math:`g\in G` に対して :math:`g^n` を対応させる写像 :math:`\phi_n` は準同型写像になることを証明せよ。なお、この問題では、 :math:`\phi_n(g)` を定義するときに、gが群Gの元であるということ以外の乗法を使っていないので、写像 :math:`\phi_n` がwell-definedであるかどうかは問題にならない。

Answer
^^^^^^^^

:math:`g,h\in G` とすると、 :math:`\phi_n(gh)=(gh)^n=g^nh^n=\phi_n(g)\phi_n(h)` となり :math:`\phi_n` は準同型となる。


2.5.3
------------
1. :math:`\phi:G\to H` が群の準同型、 :math:`g\in G` が有限位数の元なら、 :math:`\phi(g)` の位数はgの約数であることを証明せよ。

2. \1\.で :math:`\phi` が同型なら、 :math:`\phi(g)` の位数はgの位数と等しいことを証明せよ。


Answer
^^^^^^^^

:math:`g\in G` の位数をnとすると、 :math:`g^n = 1_G` となる。ここでの1はGの単位元とする。 :math:`\phi:G\to H` が群の準同型写像であるから :math:`\phi(g^n)=\phi(g)^n=\phi(1_G) = 1_H` となる。 :math:`\phi(g)^m = 1_H` とすると、n<mとすると :math:`\phi(g^n)=\phi(g)^n = 1_H` に反するので、 :math:`n\leq m` を考える。


2.5.4
------------
:math:`{\mathbb Z}/2{\mathbb Z}\times {\mathbb Z}/2{\mathbb Z}` と :math:`{\mathbb Z}/4{\mathbb Z}` は同型でないことを証明せよ。


Answer
^^^^^^^^

2.5.5
------------
Gを群、 :math:`x,y\in G` とする。 :math:`n\in {\mathbb Z}` なら :math:`(xyx^{-1})^n=xy^nx^{-1}` であることを証明せよ。

Answer
^^^^^^^^

2.5.6
------------

:math:`A=\left(\begin{array}{rr} 1& 1 \\ 1 & 0 \end{array}\right), B=\left(\begin{array}{rr} 1 & 1 \\ 1 & 0 \end{array}\right)\in SL_2({\mathbb R})\subset GL_2({\mathbb R})` とおく。

1. A,Bは :math:`GL_2({\mathbb R})` では共役であることを証明せよ。

2. A,Bは :math:`SL_2({\mathbb R})` では共役でないことを証明せよ。

3. A,Bは :math:`SL_2({\mathbb C})` では共役であることを証明せよ。
      

Answer
^^^^^^^^


2.5.7
------------
Gが次の群であるとき、AutGを群として決定せよ。

1. :math:`{\mathbb Z}/5{\mathbb Z}`
2. :math:`{\mathbb Z}/7{\mathbb Z}`
3. :math:`{\mathbb Z}/8{\mathbb Z}`
4. :math:`{\mathbb Z}/9{\mathbb Z}`
5. :math:`{\mathbb Z}/15{\mathbb Z}`

Answer
^^^^^^^^

2.5.8
------------
Gを群, :math:`a,b\in G` とする

1. abとbaはGで共役であることを証明せよ。

2. abとbaの位数は等しいことを証明せよ。

Answer
^^^^^^^^

2.5.9
------------
:math:`G={\mathfrak S}_3` とおく。 :math:`\phi:G\ni g \mapsto i_g \in AutG` が命題2.5.22で定義された準同型とする。 :math:`\phi` が同型写像であることを証明せよ。

Answer
^^^^^^^^


2.6.1
------------
:math:`R=\{(x,y)|x\in {\mathbb R}\} \cup \{(x,2x)|x\in {\mathbb R} \} \cup \{(2x,x)|x\in {\mathbb R} \}\subset {\mathbb R}\times {\mathbb R}` とすると、Rは :math:`{\mathbb R}` 上の同値関係になるか？

Answer
^^^^^^^^

2.6.2
------------

Gを群とする。 :math:`a,b\in G` が共役であるとき :math:`a\sim b` と定義すると、〜はG上の同値関係であることを証明せよ。

Answer
^^^^^^^^

2.6.3
------------

位数3の群は位数5の群の部分群にはならないことを証明せよ

Answer
^^^^^^^^

2.6.4
------------
Gが群、H,KはGの有限部分群で :math:`|H|,|K|` は互いに素とする。このとき、 :math:`H\cap K=\{1_G\}` であることを証明せよ。

Answer
^^^^^^^^

2.7.1
------------

:math:`G={\mathfrak S}_4,H={\mathfrak S}_3` とし、Hの元を :math:`4\in \{1,2,3,4\}` を不変にするGの元とみなす。この同一視により、HはGの部分群となる。両側剰余項 :math:`H\setminus G/H` の完全代表系を一つ求めよ。

Answer
^^^^^^^^

2.7.2( :math:`GL_n({\mathbb R})` のブリューア分解)
------------------------------------------------------------

:math:`GL_n({\mathbb R})` ,BをGの元で下三角行列であるもの全体よりなる部分群となる。

1. :math:`g=(g_{ij})\in Gl_n({\mathbb R})` とする。 :math:`g_{ij}\neq 0` である最小のiを :math:`i_n` とするとき、 :math:`b_1,b_2\in B` が存在し、 :math:`h=b_1gb_2=(h_{ij})` が :math:`h_{in}=0(i\neq i_n),\hspace{5pt}h_{i_nj}=0(j\neq n)` という条件を満たすことを証明せよ。

2. :math:`g=(g_{ij})\in Gl_n({\mathbb R})` に対し、 :math:`b_1,b_2\in B` が存在し、 :math:`b_1gb_2` が置換行列になることを証明せよ。

3. :math:`\sigma,\tau\in {\mathfrak S}_n` で :math:`P_{\sigma},P_{\tau}` を対応する置換行列とする。 :math:`b_1,b_2\in B` が存在して :math:`b_1P_{\sigma}b_2=P_{\tau}` なら、 :math:`\sigma(n)=\tau(n)` であることを証明せよ。

4. :math:`b_1,b_2\in B` が3.の条件を満たすなら、 :math:`b_1 = (b_{1,ij})` とするとき、 :math:`b_{1,i\sigma(n)}=0(i\neq \sigma(n))` であることを証明せよ。また、 :math:`\nu` を置換

.. math::
   :nowrap:

   \begin{eqnarray*}
      \left(
      \begin{array}{ccccc}
      \sigma(n) & \sigma(n)+1 & \sigma(n)+2 & \cdot\cdot\cdot & n \\
      n & \sigma(n) & \sigma(n)+1 & \cdot\cdot\cdot & n-1
      \end{array}
      \right)
   \end{eqnarray*}

とするとき、 :math:`P_{\nu}b_1P_{\nu}^{-1}\in B` であることを証明せよ。
   
5. :math:`b_1,b_2\in B` が3.の条件を満たすなら、 :math:`\sigma = \tau` であることを証明せよ。

   
Answer
^^^^^^^^

2.8.1
------------

次の群Gの部分群Hが正規部分群であるかどうか判定せよ。

1. :math:`H={\mathfrak S}_3 \subset G = {\mathfrak S}_4.`

2. :math:`H=SO(2)\subset G = GL_2({\mathbb R}).`

3. :math:`H=GL_2({\mathbb R}) \subset G=GL_2({\mathbb C}).`

4. :math:`H=\{1,(12)(34),(13)(24),(14)(23)\}\subset G = {\mathfrak S}_4`

5. Gは :math:`GL_2({\mathbb R})` の元で下三角行列であるもの全体よりなる群、HはGの元で対角成分が等しい元よりなる部分群.



Answer
^^^^^^^^

2.8.2
------------
Hを群Gの指数2の部分群とする。このとき、HはGの正規部分群であることを証明せよ。



Answer
^^^^^^^^

2.8.3
------------
:math:`N_1,N_2` が群Gの正規部分群なら、 :math:`N_1N_2` もGの正規部分群であることを証明せよ。


Answer
^^^^^^^^

2.9.1
------------
次の群を位数が素数べきの巡回群の直積で表せ。

1. :math:`{\mathbb Z}/15{\mathbb Z}`
2. :math:`{\mathbb Z}/28{\mathbb Z}`
3. :math:`{\mathbb Z}/60{\mathbb Z}`
4. :math:`{\mathbb Z}/1400{\mathbb Z}`


Answer
^^^^^^^^

2.9.2
------------

:math:`G_1,G_2` は有限群、 :math:`n_1=|G_1|,\ n_2=|G_2|` は互いに素とする。 :math:`\phi :G_1\times G_2 \to G_1\times G_2` が準同型なら、準同型 :math:`\phi_1: G_1 \to G_2,\ \phi_2:G_2\to G_1` があり、任意の :math:`(g_1,g_2)\in G_1\times G_2` に対して :math:`\phi (g_1,g_2) = \phi_1(g_1)\phi_2(g_2)` であることを証明せよ。

Answer
^^^^^^^^

2.9.3
------------

1. 8で割った余りが5で、15で割った余りが2である整数を一つみつけよ。
2. 35で割った余り4で、24で割った余りが5である整数を一つみつけよ。

Answer
^^^^^^^^

2.9.4
------------

:math:`{\mathfrak S}_3` の部分群をすべて求めよ。そのなかで正規部分群はどれか？


Answer
^^^^^^^^

2.9.5
------------

四元数群の部分群をすべて求めよ。そのなかで正規部分群はどれか？

Answer
^^^^^^^^

2.10.1
------------

:math:`G = {\mathbb C}^{\times}` を通常の乗法による群、 :math:`H_1 = {\mathbb C}^1 := \{z\in {\mathbb C} \mid |z|=1\},\ H_2=\{ x\in {\mathbb R} \mid x> 0 \}` とおく。 :math:`G\setminus H_1,\ G\setminus H_2` を準同型定理を使い記述せよ。

Answer
^^^^^^^^

2.10.2
------------

:math:`{\mathbb R}` を通常の加法による群とする。 :math:`a\neq 0` を任意の実数とするとき、 :math:`{\mathbb R} / {\mathbb Z}` と :math:`{\mathbb R} / a{\mathbb Z}` が同型であることを準同型定理を使い証明せよ。

Answer
^^^^^^^^

2.10.3
------------

:math:`G,H` を演習問題2.8.1(5)で定義したものとする。 :math:`G/H` が :math:`{\mathbb R}^{\times}` と同型であることを準同型定理を使い証明せよ。


Answer
^^^^^^^^

2.10.4
------------
Gを可換群、 :math:`n>0` を整数とする。Gの演算は＋であるとし、 :math:`nG=\{nx\mid x\in G\}` とおく。HがGの指数nの部分群なら、HはnGを含むことを証明せよ。

Answer
^^^^^^^^

2.10.5
------------
:math:`G={\mathbb Z}^2` とする。

1. Gの指数2の部分群の数を求めよ。
2. Gの指数13の部分群の数を求めよ。         

Answer
^^^^^^^^

2.10.6
------------

:math:`G={\mathbb Z}/45{\mathbb Z}\times{\mathbb Z}/24{\mathbb Z}\times{\mathbb Z}/14{\mathbb Z}` の指数2の部分群の数を求めよ。


Answer
^^^^^^^^

2.10.7
------------

1. :math:`{\mathbb Z}/12{\mathbb Z}` の部分群をすべて求めよ。
2. :math:`{\mathbb Z}/18{\mathbb Z}` の部分群をすべて求めよ。   


Answer
^^^^^^^^

2.10.8
------------

Gを位数が6の群とする.

1. Gに位数3の元が存在することを証明せよ。
2. :math:`x\in G` を位数3の元、 :math:`H=\langle x\rangle` とおく。 G/Hを考えることによりGに位数2の元が存在することを証明せよ。
3. Gが可換なら、Gは :math:`{\mathbb Z}/6{\mathbb Z}` に同型であることを証明せよ。
4. Gが可換でないなら、Gには位数2の元がちょうど3個あり、すべての共役であることを証明せよ。
5. 4\. の状況で :math:`x_1,x_2,x_3` を位数2の元とするとき、 :math:`g\in G` に対し :math:`gx_ig^{-1} = x_{\rho (g)(i)}(i=1,2,3)` とおくと、 :math:`\rho (g) \in {\mathfrak S}_3` であり、この :math:`\rho` によりGは :math:`{\mathfrak S}_3` と同型であることを証明せよ。


Answer
^^^^^^^^

