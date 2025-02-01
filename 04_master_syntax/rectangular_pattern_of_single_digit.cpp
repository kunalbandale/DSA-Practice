#include<bits/stdc++.h>
using namespace  std;

int main() {
  int n;
  cout << "Enter a digit to print in rectangle" << endl;
  cin >> n;

  for(int i = 1; i <= 4; i++) {
    for(int j = 1; j <= 4; j++) {
      cout << n;
    }
    cout << endl;
  }
    return 0;
}