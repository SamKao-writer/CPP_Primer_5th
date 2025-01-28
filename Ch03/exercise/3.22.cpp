#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<string> text;
    string line;
    while (getline(cin, line)) {
        text.push_back(line);
    }

    for (auto it = text.begin(); it != text.end(); ++it) {
        for (auto itc = it->begin(); itc != it->end(); ++itc) {
            if (!isspace(*itc))
                *itc = toupper(*itc);
        }
    }

    for (auto it = text.cbegin(); it != text.cend(); ++it)
        cout << *it << endl;

    return 0;
}