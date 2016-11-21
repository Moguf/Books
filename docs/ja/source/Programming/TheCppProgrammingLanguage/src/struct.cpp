#include <iostream>

struct Vector{
    int sz;
    double *elem;
};


int main()
{
    Vector v;
    v.elem = new double[10];
    v.sz = 10;
    
    for(auto i = 0; i<v.sz; ++i)
        v.elem[i] = i;
    for(auto i = 0; i<v.sz; ++i)
        std::cout << v.elem[i] << '\n';
        
}
