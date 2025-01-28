#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<int> v(10);


    // the compiler determines the type of b and e;
    // b denotes the first element and e denotes one past the last element in v
    auto b = v.begin(), e = v.end();

    return 0;
}

/*
 * In c++, not all the containers have subscripting.
 * Therefore, using iterator is a more general way to
 * access elements in containers.
 */