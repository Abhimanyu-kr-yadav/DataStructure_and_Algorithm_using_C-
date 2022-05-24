//printing array using for each loop in function
#include<iostream>
using namespace std;

void fun(int A[])
{
    for(int i = 0; i<5; i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int A[] = {1,2,3,4,5};

    fun(A);
    cout<<endl;
    for(int x : A)
    {
        cout<<x<<" ";
    }

    return 0 ;
}