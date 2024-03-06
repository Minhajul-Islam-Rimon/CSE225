#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;

int main()
{
    //Create a list of integers
    SortedType<int> obj;

    //Print length of the list
    cout << obj.LengthIs() << endl;

    //Insert five items
    obj.InsertItem(5);
    obj.InsertItem(7);
    obj.InsertItem(4);
    obj.InsertItem(2);
    obj.InsertItem(1);

    //Print the list
    int temp;

    for(int i = 0; i < obj.LengthIs(); i++)
    {
        obj.GetNextItem(temp);
        cout << temp<<" ";
    }
    cout << endl;
    obj.ResetList();

    //Retrieve 6 and print whether found
    bool found;

    temp = 6;
    obj.RetrieveItem(temp, found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //Retrieve 5 and print whether found

    temp = 5;
    obj.RetrieveItem(temp, found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //Print if the list is full or not

    if(obj.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    //Delete 1
    obj.DeleteItem(1);

    // Print the list
    for(int i = 0; i < obj.LengthIs(); i++)
    {
        obj.GetNextItem(temp);
        cout << temp<<" ";
    }
    cout << endl;

    obj.ResetList();

    //Print if the list is full or not

    if(obj.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;



    cout << endl << endl;

    //timeStamp

    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    SortedType<timeStamp> obj2;

    obj2.InsertItem(t1);
    obj2.InsertItem(t2);
    obj2.InsertItem(t3);
    obj2.InsertItem(t4);
    obj2.InsertItem(t5);

    obj2.DeleteItem(t4);

    timeStamp t6(0,0,0);

    for(int i = 0; i < obj2.LengthIs(); i++)
    {
        obj2.GetNextItem(t6);
        t6.print();
    }
    cout << endl;

    obj2.ResetList();
    return 0;
}
