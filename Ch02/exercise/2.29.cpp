#include <iostream>

int main()
{
    int i = 0;
    const int ic = 1;
    i = ic;

    int *p1;
    const int *const p3 = &ic;
    // p1 = p3;           // error: invalid conversion from const int* to int*
    // p1 = &ic;          // error: invalid conversion from const int* to int*
    // p3 = &ic;          // error: p3 is a const pointer
    int *const p2 = p1;

    // ic = *p3;          // error: ic is a const object
    return 0;
}