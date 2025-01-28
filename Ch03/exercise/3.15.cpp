#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<string> res;
    string tmp;
    while (cin >> tmp)
        res.push_back(tmp);

    for (auto item : res)
        cout << item << endl;

    return 0;
}