/*Modify the header file and the source files of Lab Manual 02 (Classes & Objects) so that it works for two dimensional array where all the
rows are the same size. The user will specify the number of rows and columns as well as the content of the array,
which you will take as input from user in the main function*/

#include"dynArr.cpp"
#include <iostream>

using namespace std;

int main()
{
    int numRows,numCols;

    cout<<"Enter the number of rows: ";
    cin>>numRows;

    cout<<"Enter the number of cols: ";
    cin>>numCols;

    dynArr arr(numRows,numCols);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            int value;
            cin >> value;
            arr.setValue(i, j, value);
        }
    }

    //array print
    cout << "Array elements:" << endl;
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < numCols; ++j)
        {
            cout << arr.getValue(i, j) << " ";
        }
            cout <<endl;
    }
    return 0;
}

