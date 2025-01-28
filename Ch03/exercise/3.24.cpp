#include <iostream>
#include <vector>
using namespace ::std;

void sum_adjacent(vector<int> &v)
{
    for (auto it = v.cbegin(); it != v.cend() - 1; ++it)
        cout << (*it) + (*(it + 1)) << endl;
    cout << endl;
}

void sum_symmetric(vector<int> &v)
{
    auto mid = v.cbegin() + (v.cend() - v.cbegin()) / 2;
    // auto it = v.begin();
    // auto j = v.cend() - 1 - it;
    for (auto it = v.cbegin(); it != mid + 1; ++it) {
        auto j = v.cend() - 1 - (it - v.begin());
        cout << *it + *j << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int tmp;
    while (cin >> tmp)
        v.push_back(tmp);

    // sum_adjacent(v);
    sum_symmetric(v);
    return 0;
}

/*
 * It is useful to traverse the container by iterator,
 * but when we want to access the elements not by order,
 * using iterator arithmetic has some trick,
 *
 * If we add or subtract a iterator by a constant, the constant will
 * be converted into std::ptrdiff_t type, in GCC implementation, it is
 * long int type. And if we subtract iterator by another iterator, it will get
 * std::ptrdiff_t which is no longer a iterator type.
 *
 * Therefore, when we use auto type specifier to get type of j like line 16,
 * it will get a std::ptrdiff_t, and when we dereference it, it will be an
 * error.
 */