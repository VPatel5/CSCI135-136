/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: calc.cpp

This program 
*/

#include <iostream>
using namespace std;

//100 + 50 - 25 + 0 + 123 - 1
// = 247
//200 - 50 - 10 + 69 - 1 = 208


int main() {
    int x;
    int total = 0;
    char sign = '+';
    while(cin >> x) {
        if (sign == '-') {
            total -= x;
        }
        if (sign == '+') {
            total += x;
        }
        cin >> sign;
    }

    cout << total << endl;
    return 0;
}
