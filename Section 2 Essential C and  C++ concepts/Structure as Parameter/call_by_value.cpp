// structure pass by value

#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int fun(struct Rectangle r1){
    r1.length = 4;
         cout<<"r1.length : "<<r1.length<<endl;
         return r1.length * r1.breadth;
}

int main()
{

    struct Rectangle r = {2,3};
    cout<<fun(r)<<endl;
    cout<<"r.length : "<<r.length<<endl;
    return 0;
}