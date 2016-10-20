Introduction
==============

1.1
---

.. math::


   y(x, \omega) = \sum^{M}_{j=0} \omega_j x^j
   
   E({\bf w}) = \frac{1}{2} \sum^{N}_{n=1} \{y(x_n, {\bf w}) - t_n\}^2

であるとき、   

.. math::

   \sum^{M}_{j=0} \{y(x_n, {\bf w}) - t_n\}^2

を示せ。ただし、

.. math::

   A_{ij} = \sum^{N}_{n=1} (x_n)^{i+j}

   T_{i} =  \sum^{N}_{n=1} (x_n)^{i} t_n

とする。

Answer   
^^^^^^^

.. math::

   \frac{dE({\bf omega})} {d \oemga} = \sum^{N}_{n=1} \frac{dy}{d\omega_i} (y(x_n, {\bf \omega})-t_n)


   
= \sum^{N}_{n=1} x^i_n \{ y(x_n, {\bf oemga}) - t_n) \}
= \sum^{N}_{n=1} x^i_n \{ \sum^{M}_{j=0} \omega_jx^j_n - t_n) \}
   
   
