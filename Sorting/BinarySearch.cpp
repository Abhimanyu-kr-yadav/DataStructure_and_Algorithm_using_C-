#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid - 1;
        }
        else
        {
            end = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {1, 2, 3, 4, 8, 56};
    int odd[5] = {8, 9, 23, 3423, 43434};
    cout << BinarySearch(even, 6, 56) << endl;

    return 0;
}