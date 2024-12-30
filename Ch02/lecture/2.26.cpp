#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;  // a is an int (r is an alias for i, which type is int)

    const int ci = i, &cr = ci;
    auto b = ci;   // b is an int (top-level const is dropped)
    auto c = cr;   // c is an int (ci's const is top-level)
    auto d = &i;   // d is an int* (& of an int object is int*)
    auto e = &ci;  // e is const int* (& of a const object is low-level const)

    const auto f = ci;  // deduced type of ci is int; f has type const int

    auto &g = ci;  // g is a const int& that is bound to ci
    // auto &h = 42;  // error: we can't bind a plain reference to a literal
    const auto &j = 42;      // ok: we can bind a const reference to a literal
    auto k = ci, &l = i;     // k is an int; l is an int&
    auto &m = ci, *p = &ci;  // m is a const int&; p is a pointer to const int
    // auto &n = i, *p2 = &ci;  // n is an int&; p2 is a pointer to const int
    //                          // (error: base type is not consistent)

    return 0;
}

/*
 * The type of auto specifier is not always the same as initializer's type.
 * First, if the initializer's type is a reference, then compiler deduced
 * the type from the object it is bound.
 * Second, if type of initializer contains const modifier, then the top-level
 * const would be dropped, but low-level const woulb be kept.
 *
 * If we want to keep the top-level const, we must say explicitly.
 */