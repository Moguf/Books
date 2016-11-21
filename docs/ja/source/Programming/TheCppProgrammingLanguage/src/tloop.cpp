#include <iostream>

bool accept()
{
    std::cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    std::cin >> answer;

    if (answer == 'y') return true;
    return false;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10} ;
    for( auto& x: a){
        std::cout << x << std::endl;
        ++x;
    }
    int b[] = {1,2};
    auto &x =b[0];
    std::cout << x << '\n';
    
    std::cout << x << '\n';
}

