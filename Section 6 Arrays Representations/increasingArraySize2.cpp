#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    int i;

    p = (int *)malloc(5 * sizeof(int));
    p[0] = 2;
    p[1] = 34;
    p[2] = 233;
    p[3] = 988;
    p[4] = 23234;

    q = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    free(p);
    p = q;
    q = NULL;

    for (int i = 0; i < 5; i++)
        cout
            << p[i]
            << " ";

    return 0;
}