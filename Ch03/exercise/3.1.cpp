#include <iostream>
using namespace ::std;

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void ex1_9()
{
    int i = 50, count = 0;
    while (i <= 100) {
        count += i;
        ++i;
    }

    cout << count << endl;
}

void ex1_10()
{
    int i = 10;
    while (i >= 0) {
        cout << i << endl;
        --i;
    }
}

void ex1_11()
{
    int v1, v2;
    cin >> v1 >> v2;
    if (v1 > v2)
        swap(&v1, &v2);
    while (v1 <= v2) {
        cout << v1 << endl;
        ++v1;
    }
}

int main()
{
    // ex1_9();
    // ex1_10();
    ex1_11();
    return 0;
}