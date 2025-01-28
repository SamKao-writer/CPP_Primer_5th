#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<int> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            auto it = scores.begin() + grade / 10;
            (*it)++;
        }
    }

    for (auto &it : scores)
        cout << it << " ";
    cout << endl;

    return 0;
}