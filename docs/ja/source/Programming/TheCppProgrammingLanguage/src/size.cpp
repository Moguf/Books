#include <iostream>

int main()
{
    bool b = true;
    char c;
    int i;
    double d;
    
    std::cout << sizeof(b) << std::endl;
    std::cout << sizeof(c) << std::endl;
    std::cout << sizeof(i) << std::endl;
    std::cout << sizeof(d) << std::endl;
    std::cout << b + false << std::endl;
    std::cout << b * false << std::endl;        
}
