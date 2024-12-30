#include <iostream>

int get_size()
{
    return 1;
}

int main()
{
    const int max_files = 20;         // max_files is a const expression
    const int limit = max_files + 1;  // limit is a const expression
    int staff_size = 27;              // staff_size is not a const expression
    const int sz = get_size();        // sz is not a const expression
    
    return 0;
}