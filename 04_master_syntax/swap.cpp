#include<bits/stdc++.h>
using namespace  std;

void swap(int a, int b) {
    cout << "Before Swapping:" << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping " << a << "  " << b << endl;
}

int main() {
  swap(10,5);
    return 0;
}