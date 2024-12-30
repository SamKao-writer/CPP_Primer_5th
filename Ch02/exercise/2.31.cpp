#include <iostream>

int main()
{
    const int v2 = 0;
    int v1 = v2;

    int *p1 = &v1, &r1 = v1;

    const int *p2 = &v2, *const p3 = &v1, &r2 = v2;

    r1 = v2;  // ok: copy value doesn't care top-level const
    // p1 = p2;  // error: invalid conversion from const int* to int*
    p2 = p1;  // ok: convert from int* to const int* is valid
    // p1 = p3;  // error: invalid conversion from const int* to int*
    p2 = p3;  // ok: qualification is matched (top-level const in p3 is ignored)
    return 0;
}