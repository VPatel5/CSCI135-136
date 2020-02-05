/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: smaller3.cpp

This program determines the smaller number of the three numbers provided.
*/

#include <iostream>
using namespace std;

int main() {
    int first,second,third;

    int smallerNumber;
    cout << "Enter the first number: " << endl;
    cin >> first;
    cout << "Enter the second number: " << endl;
    cin >> second;
    cout << "Enter the third number: " << endl;
    cin >> third;

    if(first > second) {
        if(second > third) {
            smallerNumber = third;
        } else {
            smallerNumber = second;
        }
    } else {
        if(first > third) {
            smallerNumber = third;
        } else {
            smallerNumber = first;
        }
    }

    cout << "The smaller number of the three is " << smallerNumber << endl;
    return 0;
}
