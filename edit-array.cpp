/*
Author: Vraj Patel
Course: CSCI-136
Instructor: Minh H. Nguyen
Assignment: edit-array.cpp

1
2
3


*/

#include <iostream>

using namespace std;

int main() {
    int i,v;
    int counter = 0;
    int myData[10];
    /*
     * Set all values in array to 1
     */
    for(int i = 0; i < 10; i++) {
        myData[i] = 1;
    }

    do {
        /*
         * Print Array
         */
        for (int i = 0; i < 10; i++) {
            cout << myData[i] << " ";
        }
        cout << endl;
        /*
        * Get User Input and Update Array
        */
        cin >> i >> v;
        if (i >= 0 && i < 10) {
            myData[i] = v;
        }
    }
    while(i >= 0 && i < 10);

    return 0;
}

