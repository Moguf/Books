Introduction
==============

1.1
---

.. math::


   y(x, \omega) = \sum^{M}_{j=0} \omega_j x^j ,\hspace{5pt}
   E({\bf w}) = \frac{1}{2} \sum^{N}_{n=1} \{y(x_n, {\bf w}) - t_n\}^2

であるとき、   

.. math::

   \sum^{M}_{j=0}A_{ij}\omega_j = T_i

を示せ。ただし、

.. math::

   A_{ij} = \sum^{N}_{n=1} (x_n)^{i+j}, \hspace{5pt}
   T_{i} =  \sum^{N}_{n=1} (x_n)^{i} t_n

とする。

Answer   
^^^^^^^

誤差関数を最小にするために :math:`\omega_i` で微分すると、誤差が最小となる時、以下が成り立つので、

.. math::

   \frac{dE({\bf \omega})}{d \omega_i} = 0

となる。上記の左辺を書き直すと

.. math::
   :nowrap:
      
   \begin{eqnarray*}
   \frac{dE({\bf \omega})}{d \omega_i} &=&
   \sum^{N}_{n=1} \frac{dy}{d\omega_i} (y(x_n, \omega_j)-t_n) \\
   &=& \sum^{N}_{n=1} x^i_n \{ \sum_{j=0}^{M} \omega_j x_n^j - t_n) \}   \\
   &=& \sum_{j=0}^{M}\sum^{N}_{n=1} \omega_j x_n^{i+j} - \sum^{N}_{n=1} x^i_n t_n \\
   &=& \sum_{j=0}^{M} \omega_j A_{ij} -  T_i = 0
   \end{eqnarray*}

よって、題意は成り立つ。   
   
1.2
---
過学習を防ぐための誤差関数に正則化項を加える。この誤差関数を1.1と同様の方法で表現せよ。

.. math::

   \tilde{E}({\bf w}) = \frac{1}{2} \sum^{N}_{n=1} \{ y(x_n,{\bf w}) - t_n\}^2 + \frac{\lambda}{2} \|{\bf w} \|^2

Answer
^^^^^^^^
