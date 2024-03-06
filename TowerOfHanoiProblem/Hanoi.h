#ifndef TOWER_OF_HANOI_H_INCLUDED
#define TOWER_OF_HANOI_H_INCLUDED

class TowerOfHanoi {
public:
                // Constructor to initialize the number of disks
    TowerOfHanoi(int numDisks);
            // Function to start solving
    void solve();
private:
// Recursive function
    void moveDisk(int numDisks, char src, char aux, char dest);
    int numDisks;
};

#endif // TOWER_OF_HANOI_H_INCLUDED
