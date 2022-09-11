#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 2;
    p[1] = 33;
    p[2] = 98;
    p[3] = 93;
    p[4] = 53;

    q = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 5; i++)
        q[i] = p[i];
    p = q;
    q = NULL;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p[i]);
    }

    return 0;
}