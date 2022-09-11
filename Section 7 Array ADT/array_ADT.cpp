#include <iostream>
using namespace std;

struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    // struct Array arr;
    // int n, i;
    // printf("Enter size of an array : ");
    // scanf("%d", &arr.size);
    // arr.A = (int *)malloc(arr.size * sizeof(int));
    // arr.length = 0;

    // printf("Enter number of numbers : ");
    // scanf("%d", &n);

    // printf("Enter all elements \n");
    // for (i = 0; i < n; i++)
    //     scanf("%d", &arr.A[i]);
    // arr.length = n;
    struct Array arr = {{1, 2, 3, 4, 5}, 5, 20};
    Display(arr);

    return 0;
}