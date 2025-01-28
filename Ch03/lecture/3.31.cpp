#include <iostream>
using namespace ::std;

int main()
{
    int *ptrs[10];  // ptr is an array of ten pointers to int
    // int &refs[10];  // error: no arrays of references

    int arr[10];
    int(*Parray)[10] = &arr;  // Parray is a pointer to an array of ten ints

    int (&arrRef)[10] = arr;  // arrRef is a reference to an array of ten ints

    return 0;
}