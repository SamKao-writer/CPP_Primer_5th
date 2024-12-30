#include <iostream>

int main()
{
    const int i = 42;
    auto j = i;                  // j is int;
    const auto &k = i;           // k is reference to const int
    auto *p = &i;                // p is pointer to const int
    const auto j2 = i, &k2 = i;  // j2 is const int; k2 is refernce to const int

    return 0;
}