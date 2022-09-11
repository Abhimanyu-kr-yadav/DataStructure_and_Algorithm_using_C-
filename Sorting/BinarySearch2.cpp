#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

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
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[6] = {2, 9, 4, 5, 98, 3};
    int index = BinarySearch(arr, 6, 9);
    cout << "9 is at index : " << index << endl;

    return 0;
}