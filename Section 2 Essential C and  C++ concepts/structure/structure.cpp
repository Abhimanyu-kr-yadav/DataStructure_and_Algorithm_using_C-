#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
}r1,r2,r3,r4;
struct Rectangle r5,r6;
int main()
{
    struct Rectangle r;
    r.length = 23;
    r.breadth = 23;
    cout<<"Area of rectangle is  : "<<r.length * r.breadth<<endl;
    struct Rectangle r7 = {8,8};
    cout<<"Length of r7 : "<<r7.length<<endl;
    cout<<"Breadth of r7 : "<<r7.breadth<<endl; 
} // namespace std;
