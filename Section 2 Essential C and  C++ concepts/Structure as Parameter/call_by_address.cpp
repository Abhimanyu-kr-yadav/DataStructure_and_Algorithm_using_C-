//call by address

#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void area(struct Rectangle *r1)
{
    r1->length = 99;
    r1->breadth = 100;
}

int main()
{
    struct Rectangle r = {3,9};
    area(&r);

    cout<<"length : "<<r.length<<endl;
    cout<<"breadht : "<<r.breadth<<endl;

}