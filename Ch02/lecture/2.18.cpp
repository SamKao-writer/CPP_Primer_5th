#include <iostream>

int main()
{
    int i = 0;
    int *const p1 = &i;   // we can't change the value of p1; const is top-level
    const int ci = 42;    // we can't change ci; const is top-level
    const int *p2 = &ci;  // we can change p2; const is low-level
    const int *const p3 = p2;  // right-most const is top-level
    const int &r = ci;         // const in reference types is always low-level

    i = ci;   // ok; copying value does not care top-level const
    p2 = p3;  // ok: copying value does not care top-level const

    // int *p = p3;    // error: p3 has low-level const but p doesn't
    p2 = p3;  // ok: p2 has the same low-level const qualification as p3
    p2 = &i;  // ok: we can convert int* to const int*
    // int &r = ci;  // error: can't bind an ordinary int& to a const int object
    const int &r2 = i;  // ok: can bind const int& to plain int object

    return 0;
}