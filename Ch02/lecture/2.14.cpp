#include <iostream>

int main()
{
    int i = 42;
    const int &r1 = i;       // we can bind a const int& to a plain int object
    const int &r2 = 42;      // ok: r2 is a reference to literal
    const int &r3 = r1 * 2;  // ok: r3 is a reference to constant
    // int &r4 = r1 * 2;        // error: r4 is a plain, non const reference

    double dval = 3.14;
    const int &ri = dval;

    // line 11 and line 12 are just like:
    // const int &tmp = dval;
    // const int &ri = tmp;

    std::cout << ri << std::endl;
    return 0;
}