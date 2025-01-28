#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();   // it1 has type vector<int>::iterator
    auto it2 = cv.begin();  // it2 has type vector<int>::const_iterator

    auto it3 = v.cbegin();  // it3 has type vector<int>::const_iterator

    return 0;
}

/*
 * Use auto type specifier can only get iterator
 * when container is a non-const, but considering compiler
 * optimization, if we don't write to container, just use
 * cbegin and cend to get const_iterator.
 */