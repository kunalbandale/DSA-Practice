#include<bits/stdc++.h>
 using namespace std;

 int main() {
    int dayNumber;
    cin >> dayNumber;

    switch(dayNumber) {
        case 1:
            cout << "Mon" << endl;
            break;
        case 2:
            cout << "Tue" << endl;
            break;
        case 3:
            cout << "Wed" << endl;
            break;
        case 4:
            cout << "Thu" << endl;
            break;
        case 5: 
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Sat" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid Day Number";
    }
    return 0;
 }
