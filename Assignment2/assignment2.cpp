#include<iostream>
using namespace std;

//define a classfor elemenmt in linked list

class Element{
public:
    int data;
    Element*next; //pointer to the next element

    //constructor to initialize an element
    Element(int value):data(value),next(nullptr)
    {

    }
};

//class for linkedlist
class LinkedList{
 private:
    Element*head; //pointer to the first element

public:
//constructor for empty linked list
LinkedList():head(nullptr)
{

}
//function to insert at the beginning
void insertAtBeginning(int value)
{
    Element*newElement= new Element(value);  //creating new element
    newElement->next= head;                     //set new element's nextpointer to current head
     head=newElement;                     //update the head to point new element
}
//function to insert at the end
void insertAtEnd(int value)
{
    Element*newElement=new Element(value);

    if(head==nullptr)
    {
        head=newElement;
    }
    else
    {
        Element*current=head;

        //traverse to the end of the list
        while(current->next!=nullptr)
        {
            current=current->next;
        }

        //set element as the last element's next
        current->next=newElement;
    }
}
//function to display
void Display()
{
    Element*current=head;
    //traverse the list and print each element
    while(current!=nullptr)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
//function to search
bool search(int value)
{
    Element*current=head;

    //traverse the list to find item
    while(current!=nullptr)
    {
        if(current->data==value)
        {
            return true;//value found
        }
        current=current->next;
    }
    return false;//value not found
}

//function to delete from beginning
void deleteFromBeginning()
{
    if(head!=nullptr)
    {
        Element*temp=head;
        head=head->next;
        delete temp;
    }
}
//function to delete from end of the list
void deleteFromEnd()
{
    if(head==nullptr)
    {
        return; //empty list,nothing to delete here
    }
    else if( head->next==nullptr)
    {
       delete head;
       head=nullptr;
    }
    else
    {
        Element*current=head;
        //traverse to the second to last element
        while(current->next->next!=nullptr)
        {
            current=current->next;
        }
        //delete the last element & update the next pointer of the second to last element
         delete current->next;
         current->next=nullptr;   
    }
}

};
int main() {
    LinkedList list; // Create an empty linked list

    // Insert elements at the beginning and end
    list.insertAtBeginning(20);
    list.insertAtBeginning(15);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    cout << "List: ";
    list.Display(); // Display the list: 5 10 20 30

    int searchValue = 20;
    if (list.search(searchValue))
     {
        cout << searchValue << " found in the list." <<endl;
     } else 
     {
        cout << searchValue << " not found in the list." <<endl;
     }

    // Delete elements from the beginning and end
    list.deleteFromBeginning();
    list.deleteFromEnd();

    cout << "List after deletion: ";
    list.Display(); // Display the list after deletion: 10 20

    return 0;
}