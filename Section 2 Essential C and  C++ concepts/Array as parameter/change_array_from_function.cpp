//change elements  in an array from a function
#include<iostream>
using namespace std;
void fun(int B[], int y)
{
    B[2] = 23;
}

int main()
{

    int A[5] = {2,3,4,5,5};
    fun(A,5);
    //print array
    for(int i = 0; i<5; i++)
    {
        cout<<A[i]<<" ";
    }
}