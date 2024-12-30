#include <iostream>

int main()
{
    const int v2 = 0;
    int v1 = v2;  // ok; copy value does not care top-level const qualification

    int *p1 = &v1, &r1 = v1;

    const int *p2 = &v2, *const p3 = &v1, &r2 = v2;

    return 0;
}