#include "Hanoi.h"
#include <iostream>

using namespace std;

// Constructor implementation
TowerOfHanoi::TowerOfHanoi(int numDisks) {
    this->numDisks = numDisks;
}

void TowerOfHanoi::moveDisk(int numDisks, char src, char aux, char dest) {
    // Base case
    if (numDisks == 1) {
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }

    // Move  top n-1 disks from src to aux
    moveDisk(numDisks - 1, src, dest, aux);
    
    // Move  nth disk from src  to dest
    cout << "Move disk " << numDisks << " from " << src << " to " << dest << endl;
    
    // Move n-1 disks from aux to dest 
    moveDisk(numDisks - 1, aux, src, dest);
}

void TowerOfHanoi::solve() {
    moveDisk(numDisks, 'A', 'B', 'C');// Call the recursive function
}
