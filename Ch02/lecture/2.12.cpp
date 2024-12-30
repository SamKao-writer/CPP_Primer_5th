#include <iostream>

int get_size()
{
    return 1;
}

int main()
{
    const int bufSize = 1024;
    const int i = get_size();
    const int j = 42;
    const int k;             // error: uninitilaized const
    return 0;
}