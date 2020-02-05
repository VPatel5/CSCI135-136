/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: fibonacci.cpp

This program 
*/

#include <iostream>
using namespace std;

int main() {
    int fib[60];
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    cout << fib[0] << endl;
    cout << fib[1] << endl;
    // and all the following ones can be computed iteratively as
    for(int i = 2; i < 60 ; i ++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }


    return 0;
}
