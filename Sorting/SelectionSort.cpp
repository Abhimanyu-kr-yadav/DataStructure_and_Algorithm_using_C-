#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[6] = {9, 4, 3, 4, 98, 99};
    SelectionSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}