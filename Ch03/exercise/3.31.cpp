#include <iostream>
using namespace ::std;

int main()
{
    int arr[10] = {0};
    int cnt = 0;
    for (auto &it : arr)
        it = cnt++;

    for (const auto i : arr)
        cout << i << endl;

    return 0;
}