/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: calc2.cpp

This program 
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    int total = 0;
    char sign = '+';
    while(cin >> x) {
        if (sign == '-') {
            total -= x;
        }
        else if (sign == '+') {
            total += x;
        }
        cin >> sign;
        if(sign == ';') {
            if(total != 0) {
                cout << total << endl;
            }
            total = 0;
            sign = '+';
        }
    }

    //cout << total << endl;

    return 0;
}
