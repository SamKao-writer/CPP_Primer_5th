#include <iostream>

int main()
{
    // int i, *const cp;  // i is an uninitilaized int; cp is a const pointer to
    // an object that is type of int (error: uninitilaized)

    // int *p1, *const p2;  // p1 is a pointer object of type int; p2 is a const
    //  pointer to an object that is type of int (error:
    //  uninitilaized)

    // const int ic, &r = ic; // ic is a const int but uninitialized

    // const int *const p3;  // p3 is a const pointer to object that is type of
    // const int but uninitialized

    const int *p;

    return 0;
}