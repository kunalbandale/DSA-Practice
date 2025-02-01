#include<bits/stdc++.h>
using namespace  std;

int main() {
  int even_sum = 0;
  int odd_sum = 0;
  int arr[8] = {1,2,3,4,5,6,7,8};

  for(int i = 0 ; i<8;i++) {
    if (arr[i]%2==0) {
       even_sum = even_sum + arr[i];
    } else {
       odd_sum = odd_sum + arr[i];
    }
  }
  cout << "Even Sum: " << even_sum << endl;
    cout << "Odd Sum: " << odd_sum << endl;

    return 0;
}