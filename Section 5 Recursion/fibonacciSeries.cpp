#include <iostream>
using namespace std;
// using iterator
int fib(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int rFib(int n)
{
    if (n <= 1)
        return n;
    return rFib(n - 2) + rFib(n - 1);
}

int main()
{
    printf("%d \n", rFib(5));
    return 0;
}