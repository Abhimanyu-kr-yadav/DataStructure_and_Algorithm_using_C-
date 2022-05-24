#include<iostream>
using namespace std;
int main()
{   
    int *p;
    p = new int[5];

    p[0] = 33;p[1] = 88; p[2]  = 33; p[3]  = 88; p[4] = 99;
    for(int i = 0; i<5; i++)
        cout<<p[i]<<endl;

    delete[]p;



    return 0;
}