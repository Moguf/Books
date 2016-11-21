#include <iostream>
#include <Vector>

int main()
{
    auto b[] = {1, 2};
    auto d[2] {2.3, 3.0};
    std::vector<auto> a {1, 2};
    std::cout << sizeof(a) << std::endl;
    std::cout << a.size() << std::endl;    
    std::cout << sizeof(b) << std::endl;
}
