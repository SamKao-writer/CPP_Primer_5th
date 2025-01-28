#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<int> v;
    for (int i = 1; i < 10; ++i)
        v.push_back(i);

    for (auto it = v.begin(); it != v.end(); ++it)
        *it *= 2;

    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << endl;

    return 0;
}