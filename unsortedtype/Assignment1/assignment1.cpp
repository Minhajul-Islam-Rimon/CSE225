#include <iostream>
using namespace std;

class SortedList {
private:
    int* arr;        // Dynamic array to store the sorted list elements
    int size;        // Current number of elements in the list
    int capacity;    // Maximum capacity of the list

public:
    // Constructor to initialize the sorted list with an initial capacity
    SortedList(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        arr = new int[capacity];
    }

    // Destructor to clean up the dynamically allocated memory
    ~SortedList() {
        delete[] arr;
    }

    // Function to insert an item into the sorted list
    void insertItem(int newItem) {
        if (size == capacity) {
            // If the list is full, double the capacity
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }

        int i = size - 1;

        // Find the correct position to insert the new item
        while (i >= 0 && arr[i] > newItem) {
            arr[i + 1] = arr[i];
            i--;
        }

        // Insert the new item at the correct position
        arr[i + 1] = newItem;
        size++;
    }

    // Function to search for an item in the sorted list
    bool searchItem(int target) {
        int left = 0;
        int right = size - 1;

        // Use binary search to find the target item
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                return true; // Item found
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false; // Item not found
    }

    // Function to delete an item from the sorted list
    void deleteItem(int itemToDelete) {
        int index = -1; // Initialize index to -1 (not found)

        // Search for the item to delete
        for (int i = 0; i < size; i++) {
            if (arr[i] == itemToDelete) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            // Shift elements to remove the item from the list
            for (int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        }
    }

    // Function to display the elements in the sorted list
    void displayList() {
        std::cout << "Sorted List: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int size;
    std::cout << "Enter the initial capacity of the list: ";
    std::cin >> size;

    SortedList myList(size);

    int newItem;
    while (true) {
        std::cout << "Enter an item to insert (or -1 to stop): ";
        std::cin >> newItem;
        if (newItem == -1) break;
        myList.insertItem(newItem);
        myList.displayList();
    }

    int target;
    std::cout << "Enter an item to search: ";
    std::cin >> target;
    if (myList.searchItem(target)) {
        std::cout << "Item " << target << " found in the list." << std::endl;
    } else {
        std::cout << "Item " << target << " not found in the list." << std::endl;
    }

    int itemToDelete;
    std::cout << "Enter an item to delete: ";
    std::cin >> itemToDelete;
    myList.deleteItem(itemToDelete);
    myList.displayList();

    return 0;
}
