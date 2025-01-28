#include <iostream>
using namespace ::std;

int main()
{
    unsigned cnt = 42;           // not a constant expression
    constexpr unsigned sz = 42;  // constant expression

    int arr[10];    // array of ten ints
    int *parr[sz];  // array of 42 pointers to int

    string bad[cnt];             // In the old standard, this is not correct/

    return 0;
}