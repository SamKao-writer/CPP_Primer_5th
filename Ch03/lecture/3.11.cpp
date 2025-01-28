#include <iostream>
using namespace ::std;

int main()
{
    string s("Hello, world!!!");
    for (auto &c : s) {
        c = toupper(c);
    }

    cout << s << endl;

    return 0;
}