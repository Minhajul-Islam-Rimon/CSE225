//here we try to delete a item that was not in the list


#include <iostream>
#include "UnsortedType.cpp"
#include"UnsortedType.h"

using namespace std;

int main()
{
UnsortedType<int>intList;

intList.InsertItem(10);
intList.InsertItem(20);
intList.InsertItem(25);
intList.InsertItem(22);
intList.InsertItem(1);
 
 int notInsertedItem= 9;
 cout << "Trying to delete item " <<notInsertedItem<< " from the list." << endl;
 intList.DeleteItem(notInsertedItem);

    return 0;

}
