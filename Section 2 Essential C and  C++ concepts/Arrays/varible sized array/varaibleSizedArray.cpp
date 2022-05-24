#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter a number \n";
    cin>>n;
    int A[n];
    
    for(int x : A)
        cout<<x<<endl;

    return 0;
}