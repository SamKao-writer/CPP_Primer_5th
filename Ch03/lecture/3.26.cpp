#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<int> v(10);
    auto mid = v.begin() + v.size() / 2;
    cout << (mid - v.begin()) << endl;

    auto it = v.begin();
    cout << (it < mid) << endl;
    return 0;
}