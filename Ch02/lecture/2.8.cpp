#include <iostream>

int main()
{
    double dval;
    double *pd = &dval;  // ok: initializer is the address of a double
    double *pd2 = pd;    // ok: initializer is a pointer to double
    int *pi = pd;        // error: types of pi and pd differ
    pi = &dval;  // error: assigning the address of a double to a pointer to int

    return 0;
}