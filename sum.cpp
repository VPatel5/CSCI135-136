//
/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: sum.cpp

This program 
*/

#include <iostream>
using namespace std;

int main() {
    int number, total;
    total = 0;
    while(cin >> number) { // While the reading operation is a success
        total += number;
    }

    cout << total << endl;
    return 0;
}
