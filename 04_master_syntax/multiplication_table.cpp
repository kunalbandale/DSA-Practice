#include<bits/stdc++.h>
using namespace  std;

int main() {
  int number;
  cout<<"Enter a Number to get your multiplication table:";
  cin>>number;

  for(int i = 1;i<=10;i++) {
    cout << number << "*" << i << "=" << number*i << endl;
  }
    return 0;
}