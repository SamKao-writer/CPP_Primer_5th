#include <iostream>

int main()
{
    int val1 = 0, val2 = 1;
    // the type of item is deduced from the the type of the result of adding
    // val1 and val2
    auto item = val1 + val2;  // item initialized to the result of val1 + val2

    auto i = 0, *p = &i;  // ok: i is int and p is pointer to int
    // auto sz = 0, pi = 3.14;  // error: inconsistent types for sz and pi

    return 0;
}

/*
 * Although auto type specifier can deduced the correct type while compiling,
 * but a declaration can involve only a single base type,
 * since the type of sz is int, and type of pi is double,
 * they are not the same base type and cause an error.
 */