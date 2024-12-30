#include <iostream>

int main()
{
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;  // x has type const int
    decltype(cj) y = x;  // y has type const int& and is bound to x
    // decltype(cj) z;      // error: z is a reference but not initialized

    // decltype of an expression can be a reference type
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b;   // ok: addition yields an int; b is an int
    decltype(*p) c = i;  // c is int& and must be initialized

    // decltype of a parenthesized variable is always a reference
    decltype((i)) d = i;  // d is int&
    decltype(i) e;        // e is int

    return 0;
}

/*
 * It is confused what actually decltype returns:
 * 1. If expression is just a variable, return its type
 * 2. If expression is not only a variable, return the type of expression
 * 3. If expression is a function, return its return type
 * 4. If expression is dereferencing a pointer, return reference type
 * 5. If expression is variable with paretheses, it is a reference type.
 */