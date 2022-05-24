#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p;
    p = &x;

    cout<<x<<endl;
    printf("using pointer %d \n",*p);
    printf("%d %d",p, &x);

    return 0;
}