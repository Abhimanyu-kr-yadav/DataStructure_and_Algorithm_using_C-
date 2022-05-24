//Pass By Value
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(&x,&y);
    printf("x and y are : %d %d",x, y);


    return 0;

}
