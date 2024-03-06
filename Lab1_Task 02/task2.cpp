#include <iostream>
using namespace std;

int main()
{
    cout <<"Enter the number of rows and columns respectively : ";
    int row, col;
    cin >> row >> col;

    // Dynamic allocation of 2D character array.
    char** arr = new char*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new char[col];
    }
    // Taking inputs from User
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    cout<<"\n";
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
        cout << "arr["<<i<<"]["<<j<<"] = "<< arr[i][j] << endl;

    // Deallocating the 2D Array
    for (int i = 0; i < row; i++) {
            delete[] arr[i];
    }
    delete[] arr;
    cout << endl<< "The array has been deallocated."<<endl;
}

 