//
/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: E2.10

This program calculates things
*/

#include <iostream>
using namespace std;

int main() {
    float gallons,fuelEfficiency,pricePerGallon,costPer100,distance;
    cout << "How many gallons of gas are in the tank? " << endl;
    cin >> gallons >> fuelEfficiency >> pricePerGallon;
    cout << "What is the fuel efficiency in miles per gallon? " << endl;
    cin >> fuelEfficiency;
    cout << "What is the price per gallons" << endl;
    cin >> pricePerGallon;

    costPer100 = pricePerGallon * (100 / fuelEfficiency);
    distance =  gallons * fuelEfficiency;

    cout << costPer100 << endl;
    cout << distance << endl;

    return 0;
}
