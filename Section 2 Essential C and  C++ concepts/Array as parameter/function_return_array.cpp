//Function will return an array

#include<iostream>
using namespace std;

int * fun(int n)
{
    int *b;
    b = (int *)malloc(n * sizeof(int));
    cout<<"b : "<<b<<endl;
    return b;
}
int main()
{
    int *a;
    a = fun(5);
    cout<<a<<endl;

    return 0;
}