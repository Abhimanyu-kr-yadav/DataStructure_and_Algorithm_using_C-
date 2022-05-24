//structure passed as a reference 
#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void area(struct Rectangle &r1)
{
    r1.length++;
    cout<<"r1.length : "<<r1.length<<endl;
   
}

int main()
{   
    struct Rectangle r = {3,9};
    area(r);
    cout<<"r.length : "<<r.length<<endl;


    return 0;
}