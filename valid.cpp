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
    int x = -1;
    do {
        cout << "Please enter an integer: ";
        cin >> x;
    }
    while(x <= 0 || x >= 100);
    cout << x*x << endl;
    return 0;
}
