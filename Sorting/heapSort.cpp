#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                parent = index;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftNode = 2 * i;
            int rightNode = 2 * i + 1;
            if (leftNode < size && arr[i] < arr[leftNode])
            {
                swap(arr[i], arr[leftNode]);
                i = leftNode;
            }
            else if (rightNode < size && arr[i] < arr[rightNode])
            {
                swap(arr[i], arr[rightNode]);
                i = rightNode;
            }
            else
            {
                return;
            }
        }
    }

    void heapify(int arr[], int size, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= size && arr[largest] < arr[left])
            largest = left;
        if (right <= size && arr[largest] < arr[right])
            largest = right;
        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, size, i);
        }
    }

    void heapSort(int arr[], int size)
    {
        while (size > 1)
        {
            // step1
            swap(arr[size], arr[1]);
            size--;

            // step2
            heapify(arr, size, 1);
        }
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};

    for (int i = 5 / 2; i > 0; i--)
    {
        h.heapify(arr, 5, i);
    }

    cout << "Print elements : " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }

    h.heapSort(arr, 5);

    cout << endl
         << "Print sorted heap : " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }

    // max heap
    cout << endl
         << "priority_queue" << endl;
    priority_queue<int> p;

    p.push(2);
    p.push(3);
    p.push(5);
    p.push(4);

    cout << "Largest element : " << p.top() << endl;
    p.pop();
    cout << "Largest element : " << p.top() << endl;

    cout << "Size of max heap : " << p.size() << endl;

    if (p.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    // min_heap

    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(2);
    minheap.push(3);
    minheap.push(5);
    minheap.push(4);

    cout << "Smallest element : " << minheap.top() << endl;
    minheap.pop();
    cout << "Smallest element : " << minheap.top() << endl;

    cout << "Size of max heap : " << minheap.size() << endl;

    if (minheap.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
