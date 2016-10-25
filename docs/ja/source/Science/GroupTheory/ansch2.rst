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
   (12)   & (12) & 2     & (123)& (23) & (123) & (132) \\ \hline
   (13)   & (13) & (132) & e    & (23) & (123) & (132) \\ \hline
   (23)   & (23) & (123) & (13) & e    & (123) & (132) \\ \hline
   (123)  & (123)& (23)  & (13) & (23) & e     & (132) \\ \hline
   (132)  & (132)& (13)  & (13) & (23) & (123) & e     \\ \hline                                        
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
   (1)
   \end{eqnarray*}


2.3.1
------------
:math:`G` を群、 :math:`H\subset G` を空でない部分集合とするとき、 :math:`H` が部分群であるための
必要十分条件は、任意の :math:`x,y\in H` に対して :math:`x^{-1}y\in H` であることを証明せよ。

Answer
^^^^^^^^

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

とし、 :math:`J_n` は :math:`2n\times 2n` 行列である。 :math:`Sp(2n)=\{g\in G| \ ^tgJ_ng=J_n\}` とし、 :math:`Sp(2n)` をシンプレティック群という。
   
n次正則行列 :math:`GL_n({\mathbb R})` とすると、 :math:`Sp(2n) \subset GL_{2n}({\mathbb R})` が部分群であることを証明せよ。

Answer
^^^^^^^^

2.3.3
------------
:math:`G=GL_n({\mathbb C}),\hspace{5pt}U(n)=\{g\in G| \ ^t\bar{g}g=I_n\}` とする。このとき、 :math:`U(n)` をユニタリ群という。 :math:`\bar{g}` は :math:`g` のすべての成分の複素共役をとった行列である。 :math:`U(n)\subset GL_n({\mathbb C})` が部分群であることを証明せよ。

Answer
^^^^^^^^

2.3.4
------------
:math:`G=GL_n({\mathbb R})` 、BをGの元で下三角行列であるもの全体の集合とする。

(1) BはGの部分群であることを証明せよ。
(2) Bは可換群か？

Answer
^^^^^^^^

2.3.5
------------
Answer
^^^^^^^^

2.3.6
------------
Answer
^^^^^^^^

2.4.1
------------
Answer
^^^^^^^^

2.4.2
------------
Answer
^^^^^^^^

2.4.3
------------
Answer
^^^^^^^^

2.4.4
------------
Answer
^^^^^^^^

2.4.5
------------
Answer
^^^^^^^^

2.4.6
------------
Answer
^^^^^^^^

2.5.1
------------
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
