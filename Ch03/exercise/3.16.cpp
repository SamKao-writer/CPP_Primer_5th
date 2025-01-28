#include <iostream>
#include <vector>
using namespace ::std;

template <typename T>
void print_vector(vector<T> a)
{
    for (auto it : a)
        cout << it << " ";
    cout << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    print_vector(v5);
    print_vector(v6);
    print_vector(v7);

    return 0;
}