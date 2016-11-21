#include <iostream>

constexpr double two(double d)
{
    return d;
}

int main()
{
    const double d = 2.0;
    const double max1 = 3 * two(d);
    std::cout << max1 << std::endl;

}
