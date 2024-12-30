#include <iostream>

int main()
{
    extern int i;  // declares but does not defin i
    int j;         // declares and defines j

    extern double pi = 3.1416;  // definition
    return 0;
}