#include <iostream>
#include"unsortedtype.h"
#include"unsortedtype.cpp"

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    int m, n;
    cout << "Enter m: " << endl;
    cin >> m;

    UnsortedType<int> combinedSequence;

    for (int i = 0; i < m; i++) {
        int value;
        cin >> value;
        combinedSequence.InsertItem(value);
    }

    cout << "Enter n: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        combinedSequence.InsertItem(value);
    }

    combinedSequence.ResetList();
    int item;
    for (int i = 0; i < m + n; i++) {
        combinedSequence.GetNextItem(item);
        cout << item << " ";
    }

    return 0;
}