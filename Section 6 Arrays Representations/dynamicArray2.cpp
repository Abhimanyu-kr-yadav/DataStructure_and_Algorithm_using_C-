#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;

    p = (int *)malloc(5 * sizeof(int));
    p[0] = 11;
    p[1] = 2323;
    p[2] = 982;
    p[3] = 2343;
    p[4] = 3223;

    // print static array
    for (int i = 0; i < 5; i++)
        cout << A[i] << " ";

    // print dynamic array
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << p[i] << " ";

    return 0;
}