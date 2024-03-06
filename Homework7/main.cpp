#include <iostream>
#include "timeStamp.h"

int main() {
    const int maxSize = 5; // Define the maximum size of the array
    timeStamp timeList[maxSize];
    int currentSize = 0;

    // Insert 5 time values in the format ssmmhh
    timeList[currentSize++] = timeStamp(23, 34, 15);
    timeList[currentSize++] = timeStamp(2, 13, 13);
    timeList[currentSize++] = timeStamp(12, 45, 43);
    timeList[currentSize++] = timeStamp(17, 36, 25);
    timeList[currentSize++] = timeStamp(20, 2, 52);

    // Delete the timestamp 17 36 25
    for (int i = 0; i < currentSize; ++i) {
        if (timeList[i] == timeStamp(25, 36, 17)) {
            for (int j = i; j < currentSize - 1; ++j) {
                timeList[j] = timeList[j + 1];
            }
            --currentSize;
            std::cout << "Item is found and deleted." << std::endl;
            break;
        }
    }

    // Print the list
    for (int i = 0; i < currentSize; ++i) {
        timeList[i].printTime();
    }

    return 0;
}