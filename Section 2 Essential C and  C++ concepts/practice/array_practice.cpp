#include<iostream>
using namespace std;
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter elements in array : "<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<"Enter "<<i+1<<"element : ";
        cin>>a[i];
    }

    //print all elements of array
    cout<<endl<<"Print all elements of array : "<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
}