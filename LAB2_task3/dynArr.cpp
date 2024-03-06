#include"dynArr.h"
#include<iostream>

dynArr::dynArr()
{
    data=NULL;
    numRows=0;
    numCols=0;
}
dynArr::dynArr(int rows,int cols)
{
    numRows=rows;
    numCols=cols;

    data=new int*[numRows];

    for(int i=0;i<numRows;i++)
    {
        data[i]=new int[numCols];
    }
}
dynArr::~dynArr()
{
    for( int i=0;i<numRows;i++)
    {
        delete[]data[i];
    }
    delete[]data;
}
int dynArr::getValue(int rows,int cols)
{
    return data[rows][cols];
}
void dynArr::setValue(int rows,int cols,int value)
{
    data[rows][cols]=value;
}
