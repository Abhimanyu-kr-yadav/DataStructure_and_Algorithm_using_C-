#include <iostream>
#include <stdio.h>
using namespace std;

void toh(int n, int a, int b, int c)
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        printf("(%d,%d) ", a, c);
        toh(n - 1, b, a, c);
    }
}

int main()
{
    toh(5, 1, 2, 3);

    return 0;
}