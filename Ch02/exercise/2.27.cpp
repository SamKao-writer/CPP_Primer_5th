#include <iostream>

int main()
{
    // int i = -1, &r = 0;    // cannot bind non-const lvalue reference to an
    // rvalue

    int i2;
    int *const p2 = &i2;

    const int i = -1, &r = 0;

    const int *const p3 = &i2;

    const int *p1 = &i2;

    // const int &const r2;     // error: const qualifier cannot be applied to a
    // reference; reference should be initilaized

    const int i3 = i, &r2 = i;

    return 0;
}