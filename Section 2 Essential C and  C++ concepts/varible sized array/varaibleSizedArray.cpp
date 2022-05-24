#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter a number ";
    cin>>n;
    int A[n] = {2,3,3,3};

    for(int x : A)
        cout<<x<<endl;

    return 0;
}