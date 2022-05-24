#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
} r2, r3, r4;
int main()
{
    struct Rectangle r1 = {10, 2};
    printf("%lu", sizeof(r1));
    r1.length = 99;
    r1.breadth = 44;

    printf("length : %d breadth : %d", r1.length, r1.breadth);

    return 0;
}