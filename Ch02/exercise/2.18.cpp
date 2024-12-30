#include <iostream>

int main()
{
    int i1 = 0, i2 = 10;
    int *p1 = &i1;

    *p1 = 100;
    std::cout << i1 << std::endl;
    p1 = &i2;
    std::cout << *p1 << std::endl;

    return 0;
}