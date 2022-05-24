#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    Rectangle *p;
    p = new Rectangle;

    p->length = 45;
    p->breadth = 99;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}