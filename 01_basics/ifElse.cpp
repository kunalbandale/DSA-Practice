#include<bits/stdc++.h>
 using namespace  std;

 int main() {
    // write a program that takes an input of age
    // and prints if you are adult or not
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "You are an Adult";
    } else {
        cout << "Not an Adult";
    }
    return 0;
 }