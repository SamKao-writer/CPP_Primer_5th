#include <iostream>

int main()
{
    int i = 1024, i2 = 2048;  // i and i2 are both ints
    int &r = i, r2 = i2;      // r is a reference bound to i; r2 is an int
    int i3 = 1024, &ri = i3;  // i3 is an int; ri is a reference bound to i3
    int &r3 = i3, &r4 = i2;   // both r3 and r4 are references

    return 0;
}