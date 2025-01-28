#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2 = ia;
    // ia2 = 42;         // error: ia2 is a pointer

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *e = &arr[10];  // pointer just past the last element in arr. It is OK.

    for (int *b = arr; b != e; ++b)
        cout << *b << endl;
    return 0;
}