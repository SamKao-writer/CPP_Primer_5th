#include <iostream>

constexpr int *np = nullptr;  // np is a const pointer to int
int j = 0;
constexpr int i = 42;  // type of i is a const int

int main()
{
    // i and j must be defined outside any function
    constexpr const int *p = &i;  // p is a constant pointer to the const int i
    constexpr int *p1 = &j;       // p1 is a constant pointer to the int j

    return 0;
}