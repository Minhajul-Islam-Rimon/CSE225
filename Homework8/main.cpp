#include <iostream>

#include "quetype.h"
#include "quetype.cpp"
using namespace std;
int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. " << endl;
        return 1;
    }

    QueType<string> binaryQueue;
    binaryQueue.Enqueue("1"); // Enqueue  binary number "1"

    for (int i = 0; i < n; i++) {
        string current;
        binaryQueue.Dequeue(current);
        cout << current << endl;

        binaryQueue.Enqueue(current + "0"); //  "0"  enqueue
        binaryQueue.Enqueue(current + "1"); //  "1"  enqueue
    }

    return 0;
}
