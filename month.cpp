/*
Author: Vraj Patel

Course: CSCI-136

Instructor: Minh H. Nguyen

Assignment: month.cpp

This program
prints the
number of days
using the
month and
year


*/

#include <iostream>

bool isLeapYear(int year);

using namespace std;

int main() {
    int year,month;
    cout << "Enter the year: " << endl;
    cin >> year;
    cout << "Enter the month: " << endl;
    cin >> month;

    if(isLeapYear(year)) {
        if(month == 2) {
            cout << "29 days";
            return 0;
        }
    }
    if(month == 2) {
        cout << "28 days";
        return 0;
    }
    if(month > 7) {
        month = month += 1;
    }
    if(month % 2 == 0) {
        cout << "30 days";
    } else{
        cout << "31 days";
    }
    return 0;
}

bool isLeapYear(int year) {
    if((year % 4) != 0) {
        return false;
    } else if((year % 100) != 0) {
        return true;
    } else if((year % 400) != 0) {
        return false;
    } else {
        return true;
    }
}

