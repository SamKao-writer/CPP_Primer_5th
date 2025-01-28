#include <iostream>
#include <vector>
using namespace ::std;

void result1(vector<int> &v)
{
    for (decltype(v.size()) i = 0; i < v.size() - 1; ++i) {
        cout << v[i] + v[i + 1] << endl;
    }
}

void result2(vector<int> &v)
{
    for (decltype(v.size()) i = 0; i < v.size(); ++i) {
        auto j = v.size() - 1 - i;
        cout << v[i] + v[j] << endl;
    }
}

int main()
{
    vector<int> v;
    int tmp;
    while (cin >> tmp) {
        v.push_back(tmp);
    }

    // result1(v);
    result2(v);
    return 0;
}