#include <iostream>

int main()
{
    int i = 42;
    int *p;       // p is a pointer to int
    int *&r = p;  // r is a reference to the pointer p
    r = &i;       // r refers to a pointer; assigning &i to r makes p point to i
    *r = 0;  // dereferencing r yields i, the object to which p points; changes
             // i to 0
    std::cout << i << std::endl;

    return 0;
}