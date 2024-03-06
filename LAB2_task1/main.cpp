#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main() {
    // Task 1: Creating objects of dynArr class
    dynArr obj1; // Object with no constructor argument
    dynArr obj2(5); // Object with constructor argument 5

    // Task 1.1: Taking five input values from the user for obj2
    cout << "Enter five values for the second object:" << endl;
    for (int i = 0; i < 5; ++i) {
        int value;
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        obj2.setValue(i, value); // Store input values in the array inside obj2
    }

    // Task 1.2: Printing values stored in obj2
    cout << "Values stored in the second object:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Value " << i + 1 << ": " << obj2.getValue(i) << endl;
    }

    // Note: You cannot assign anything to obj1 as its array size is 0.

    return 0;
}
