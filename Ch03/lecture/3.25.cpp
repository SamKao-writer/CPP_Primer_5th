#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<int> v(10, 42);
    auto it = v.begin();
    v.push_back(43);

    cout << *it << endl;  // this will not be 42
    return 0;
}

/*
 * Just like range for (e.g. for (auto c: v)),
 * when we want to modify the size of a container,
 * then don't use range for and iterator since it the memory address
 * of container may changed.
 */