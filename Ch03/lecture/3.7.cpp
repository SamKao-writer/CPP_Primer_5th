#include <iostream>
using namespace ::std;

int main()
{
    string line;
    while (getline(cin, line)) {
        if (line.size() > 80)
            cout << line << endl;
    }
    return 0;
}