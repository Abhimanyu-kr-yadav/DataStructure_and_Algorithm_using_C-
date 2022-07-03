#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int n)
{
    if (n == 0)
        return 0;
    else
        return fun(n - 1) + n;
}

int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s = s + i;
    return s;
}
int main()
{
    cout << fun(5) << endl;
    cout << sum(5) << endl;

    return 0;
}