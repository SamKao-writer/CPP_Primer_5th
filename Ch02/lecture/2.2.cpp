#include <iostream>

int main()
{
    long double ld = 3.1415926536;
    int a{ld}, b = {ld};  // error: narrowing conversion required
    int c(ld), d = ld;    // ok: but value will be truncated
}