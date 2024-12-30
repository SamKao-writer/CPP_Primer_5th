#include <iostream>

int f()
{
    return 0;
}

int main()
{
    decltype(f()) sum;
    return 0;
}

/*
 * The compiler analyzes the expression to get the type,
 * but not evaluate the expression.
 */