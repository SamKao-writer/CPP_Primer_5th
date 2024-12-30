#include <iostream>

int main()
{
    int ival = 42;
    int *p = &ival;  // p holds the ddress of p; p is a pointer to ival
    std::cout << *p << std::endl;

    *p = 0;  // * yields the object; we assign a new value to ival through p
    std::cout << *p << std::endl;
    p = nullptr;
    return 0;
}