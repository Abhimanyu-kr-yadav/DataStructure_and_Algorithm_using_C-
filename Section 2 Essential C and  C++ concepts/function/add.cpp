#include<iostream>
#include<stdlib.h>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x = 44, y = 88;
    int z = add(x,y);
    printf("Sum of x and y is : %d", z);
    return 0;
}