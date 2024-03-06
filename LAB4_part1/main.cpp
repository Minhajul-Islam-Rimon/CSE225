#include <iostream>
#include "unsortedtype.cpp"
//#include "studentInfo.h"
using namespace std;

int main()
{
    //Create a list of integers
    UnsortedType <int> ut;
    //Insert four items
    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);
    //Print the list
    int input;
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }
    //Print the length of the list
    cout<<endl<<"Length of the list is = "<<ut.LengthIs()<<endl;
    //Insert one item
    ut.InsertItem(1);
    //Print the list
    ut.ResetList();
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }

    //Retrieve 4 and print whether found or not
    int a = 4;
    bool found;
    ut.RetrieveItem(a,found);
    if(found ){
        cout<<endl<<"Item "<<a<<" is found";
    }
    else{
        cout<<endl<<"Item is not found";
    }
    //Retrieve 5 and print whether found or not
    a = 5;
    //bool found;
    ut.RetrieveItem(a,found);
    if(found ){
        cout<<endl<<"Item "<<a<<" is found";
    }
    else{
        cout<<endl<<"Item is not found";
    }
    //Retrieve 9 and print whether found or not
    a = 9;
    //bool found;
    ut.RetrieveItem(a,found);
    if(found ){
        cout<<endl<<"Item "<<a<<" is found";
    }
    else{
        cout<<endl<<"Item is not found";
    }
    //Retrieve 10 and print whether found or not
    a = 10;
    // bool found;
    ut.RetrieveItem(a,found);
    if(found ){
        cout<<endl<<"Item "<<a<<" is found";
    }
    else{
        cout<<endl<<"Item is not found";
    }
    //Print if the list is full or not
    if(ut.IsFull()){
        cout<<endl<<"List is full";
    }
    else
    {
        cout<<endl<<"List is not full";
    }
    //Delete 5
    ut.DeleteItem(5);
    ut.ResetList();
    cout<<endl;
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }

    //Print if the list is full or not
    if(ut.IsFull()){
        cout<<endl<<"List is full";
    }
    else
    {
        cout<<endl<<"List is not full";
    }
    //Delete 1
    ut.DeleteItem(1);
    //Print the list
    ut.ResetList();
    cout<<endl;
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }
    //Delete 6
    ut.DeleteItem(6);
    //Print the list
    ut.ResetList();
    cout<<endl;
    for(int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }
    cout<<endl;
    
}
