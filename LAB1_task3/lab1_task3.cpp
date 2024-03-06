#include<iostream>
using namespace std;
 int main()
 {
     int rows;
     cout<<"Enter the number of rows: ";
     cin>>rows;

     int**array=new int*[rows];//array pointers to represent rows
     int* colsarray=new int [rows];//allocate to store num of colmn in each row

     for(int i=0;i<rows;i++)
     {

         cout<<"Enter the number of elements in row"<<i+1<<":";
         cin>>colsarray[i];
//input
         array[i]=new int [colsarray[i]];

         for(int j=0;j<colsarray[i];j++)
         {
             cout<<"Enter  element at row" <<i+1<<",column" <<j+1<<":";
             cin>>array[i][j];

         }

     }
     //print
     cout<<"Array values:" <<endl;
     for(int i=0;i<rows;++i)
     {
         for(int j=0;j<colsarray[i];++j)
         {
           cout<<array[i][j]<<" ";
         }
          cout<<endl;
     }
//deallocate for indivudal rows
     for (int i = 0; i < rows; ++i)
        {
        delete[] array[i];
        }
        //de allocate memory for array of pointers and colsarray
        delete[]array;
        delete []colsarray;
        return 0;
 }
