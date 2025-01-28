#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<string> res;
    string tmp;
    while (cin >> tmp) {
        for (auto &c : tmp)
            c = toupper(c);
        res.push_back(tmp);
    }

    for (decltype(res.size()) i = 0; i < res.size(); ++i) {
        if (i % 8 == 0)
            cout << endl;
        cout << res[i] << " ";
    }

    cout << endl;
    return 0;
}