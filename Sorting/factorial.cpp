#include<iostream>
using namespace std;

void factorialOfNumber(int n){
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
}

int main(){



    return 0;
}