#include <iostream>

int main()
{
    const int i = 1024;
    // int &r = i;      // error: can't discard qualifiers
    const int &r = i;  // ok: both reference and underlying object are const
    // r = 42;             // error: r is a reference to const
    return 0;
}