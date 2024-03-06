#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}

dynArr::~dynArr()
{
    delete [] data;
}

int dynArr::getValue(int index)
{
    return data[index];
}

void dynArr::setValue(int index,int value)
{
    data[index] = value;
}


//task2 implementation:change the size of array


void dynArr::allocate(int additionalSize)
{
     // Create a new dynamic array with a size equal to the current size plus the additional size requested.
    int *temp = new int[size+additionalSize];

    // Copy the elements from the current data array to the new array.
    for(int i=0; i<size; i++)
    {
        temp[i] = data[i];
    }
 // Delete the old data array to prevent memory leaks.

    delete [] data;
    // Update the data pointer to point to the new dynamic array.

    data = temp;

     // Update the size to reflect the new total size of the array.
    size = size+additionalSize;

}

void dynArr::printItem()
{
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
}

 

