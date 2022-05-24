#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r = {3,3};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *p = &r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;



    return 0;
}