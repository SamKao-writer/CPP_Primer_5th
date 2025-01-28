#include <iostream>
using namespace ::std;

int main()
{
    string tmp, result;
    cin >> tmp;
    for (auto &c : tmp) {
        if (!ispunct(c))
            result += c;
    }
    cout << result << endl;
    return 0;
}