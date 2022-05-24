#include<iostream>
using namespace std;
int main()
{
    int a = 19;
    int &r = a;
    a = 34;
    r = 23;
    int b = 25;
    r = b;

    cout<<a<<endl;
    cout<<r<<endl;
    cout<<&a<<endl;
    cout<<&r<<endl;

    return 0;
}