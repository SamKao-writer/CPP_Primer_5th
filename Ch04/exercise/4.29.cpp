#include <iostream>

int main()
{
    double x[10];
    double *p = x;
    std::cout << sizeof(x) / sizeof(*x) << std::endl;  // 10
    std::cout << sizeof(p) / sizeof(*p)
              << std::endl;  // the size of a pointer / the size of an int

    return 0;
}