#include<bits/stdc++.h>
using namespace  std;

int main() {
  int a = 10, b = 5;
  cout << "Before swap : " << a << " " << b << endl;

  a = a + b;
  b = a - b;
  a = a - b;

  cout << "After swap : " << a << " " << b << endl;
    return 0;
}