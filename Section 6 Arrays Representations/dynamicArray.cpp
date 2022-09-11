#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int n)
{
    printf("Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertArray(int *arr, int n)
{
    printf("Insert elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void reverseArray(int *arr, int start, int end)
{
    printf("Array is reversed : ");
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    printf("Size of array : ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));

    insertArray(p, n);

    printf("\n");

    printArray(p, n);
    printf("\n");

    reverseArray(p, 0, n - 1);
    printf("\n");
    printArray(p, n);

    return 0;
}