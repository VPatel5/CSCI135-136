/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: 

This program 
*/

#include <iostream>
using namespace std;

int main() {
    int lower, upper;
    cout << "Please enter the lower integer: " << endl;
    cin >> lower;
    cout << "Please enter the upper integer: " << endl;
    cin >> upper;
    for(int i = lower; i < upper; i++) {
        cout << i << " ";
    }
    return 0;
}
