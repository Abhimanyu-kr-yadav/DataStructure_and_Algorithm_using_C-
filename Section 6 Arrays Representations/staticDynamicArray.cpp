#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p;
    p = (int *)malloc(5 * sizeof(int));

    p[0] = 3;
    p[1] = 33;
    p[2] = 222;
    p[3] = 8888;
    p[4] = 88888;
    p[5] = 333333;

    for (int i = 0; i < 6; i++)
    {
        cout << p[i] << " ";
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}