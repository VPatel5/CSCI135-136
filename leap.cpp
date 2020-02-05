/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: leap.cpp

This program determines if it is a
leap year or common year
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if((year % 4) != 0) {
        cout << "Common Year"  << endl;
    } else if((year % 100) != 0) {
        cout << "Leap Year" << endl;
    } else if((year % 400) != 0) {
        cout << "Common Year"  << endl;
    } else {
        cout << "Leap Year"  << endl;
    }
    return 0;
}
