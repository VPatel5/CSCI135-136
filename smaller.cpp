/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: smaller.cpp

This program determines the
smallest number
*/

#include <iostream>
using namespace std;

int main() {
    int first,second;

    cout << "Enter the first number: " << endl;
    cin >> first;
    cout << "Enter the second number: " << endl;
    cin >> second;

    if(first > second) {
        cout << "The smaller number of the two " << second << endl;
    } else {
        cout << "The smaller number of the two is " << first << endl;
    }
    return 0;
}