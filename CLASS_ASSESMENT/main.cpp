#include<iostream>
#include"binarysearchtree.cpp"


int main()
{
    TreeType<int>tree;

    if(tree.IsEmpty()==true){
        cout<<"Tree is empty"<<endl;
    }
     else {
        cout << "Tree is not empty" << endl;
    }

    // Insert
    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    
    if(tree.IsEmpty()==true){
        cout<<"Tree is empty"<<endl;
    }
     else {
        cout << "Tree is not empty" << endl;
    }

    //length
    cout << "Length of the tree: " << tree.LengthIs() << endl;

    //reterive
    int item = 9;
    bool found;
    tree.RetrieveItem(item, found);
    if (found==true) {
       cout << "Item " << item << " is found" << endl;
    } else {
       cout << "Item " << item << " is not found" << endl;
    }

    item = 13;
    tree.RetrieveItem(item, found);
    if (found==true) {
        cout << "Item " << item << " is found" <<endl;
    } else {
       cout << "Item " << item << " is not found" << endl;
    }

    //inoreder
    cout << "Inorder traversal: ";
    tree.ResetTree(IN_ORDER);
    while (tree.IsEmpty()==false) {
        tree.GetNextItem(item, IN_ORDER, found);
      cout << item << " ";
    }
        cout << endl;

    //preorder
    cout << "Preorder traversal: ";
    tree.ResetTree(PRE_ORDER);
    while (tree.IsEmpty()==false) {
        tree.GetNextItem(item, PRE_ORDER, found);
      cout << item << " ";
    }
    cout << endl;
    //postorder
    cout << "Postorder traversal: ";
    tree.ResetTree(POST_ORDER);
    while (tree.IsEmpty()==false) {
        tree.GetNextItem(item, POST_ORDER, found);
        std::cout << item << " ";
    }
    std::cout << std::endl;

    tree.MakeEmpty();
    cout<<"Tree is Empty";
    return 0;
}