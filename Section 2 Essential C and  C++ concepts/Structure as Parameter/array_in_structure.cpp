//array in a structure can be passed as a value

#include<iostream>
using namespace std;

struct test{
    int A[5];
    int n;
};

void fun(struct test t2)
{
    t2.A[0] = 22;
    t2.A[2] = 93;
}

int main()
{
    struct test t = {{1,2,3,4,65}, 99};
    fun(t);
    cout<<t.A[2];
    return 0;
}