#include<iostream>
using namespace std;

void checkNumber(int n){
    int flag = 0;
    if (n == 0 || n == 1){
        flag = 1;
        cout<<"0 number is neighter prime nor compositehow to   "
    }
        

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    cout<<"numebr is prime";
  else
    cout<<"number is composite";
}

int main(){



    return 0;l
}