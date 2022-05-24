//creating array and initializing from a funciton
#include<iostream>
using namespace std;

int * fun(int size)
{
    int *ptr;
    ptr = new int[size];
    for(int i = 0; i<size; i++)
    {
        ptr[i] = i + 1;
    }
    return ptr;
}
int main()
{
    int *ptr, size;
    size = 5;
    ptr =  fun(size);

    for(int i = 0; i<size; i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}