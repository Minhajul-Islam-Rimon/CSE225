#include "Hanoi.cpp"
#include <iostream>

using namespace std;

int main() {
    int numDisks = 5;
    // constructor  called  as argument
    TowerOfHanoi hanoiTower(numDisks);
    
    cout << "Tower of Hanoi solution for " << numDisks << " disks:" << endl;
    hanoiTower.solve();
    return 0;
}
