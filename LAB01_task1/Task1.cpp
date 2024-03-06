#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size:";
    cin>>size;
    //alocate memory
    int*arr=new int[size];
    //input
    cout<<"Inter array elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //print
    cout<<"Array elements:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //de-alloccate memory
    delete[]arr;
    return 0;

}