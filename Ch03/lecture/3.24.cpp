#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<string> text;
    string tmp;
    while (cin >> tmp)
        text.push_back(tmp);

    for (auto it = text.begin(); it != text.end(); ++it) {
        for (auto c = it->begin(); c != it->end(); ++c) {
            *c = toupper(*c);
        }
    }

    for (auto item : text)
        cout << item << endl;

    return 0;
}

/*
 * If elements in container is also a container,
 * then we can use different iterator to traverse constainers.
 * But there is one thing to be careful, we need to dereference the iterator
 * of outer container to get the iterator of inner container.
 *
 * Use (*it).begin()  or it->begin()
 */