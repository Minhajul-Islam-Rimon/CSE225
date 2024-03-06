/* Task 1: Recall the class we used in the previous lab to allocate memory dynamically. Modify the header file
and the source file given below so that they now work as template class (the array elements in the
dynamically allocated memory can be any type as the user defines).*/



#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template <class T>
class dynArr
{
private:
    T *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, T);
    T getValue(int);
};

#endif // DYNARR_H_INCLUDED