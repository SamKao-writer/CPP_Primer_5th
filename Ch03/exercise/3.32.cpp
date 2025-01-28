#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    int arr[10] = {0};
    int cnt = 0;
    for (auto &it : arr)
        it = cnt++;

    int arr2[10];
    for (size_t i = 0; i < 10; ++i)
        arr2[i] = arr[i];

    // for (const auto i : arr2)
    //     cout << i << endl;

    cnt = 0;
    vector<int> v1(10);
    for (auto it = v1.begin(); it != v1.end(); ++it)
        *it = cnt++;

    vector<int> v2 = v1;
    for (auto it : v2)
        cout << it << endl;

    return 0;
}