#include <iostream>

int main()
{
    const double pi = 3.14;  // pi is const; its value cannot be changed
    // double *ptr = &pi;      // error: ptr is a plain pointer
    const double *cptr = &pi;  // ok: cptr may point to a double that is const
    // *cptr = 42;                // error: cannot assign to *cptr

    double dval = 3.14;  // dval is a double; its value can be changed
    cptr = &dval;

    std::cout << *cptr << std::endl;
    return 0;
}