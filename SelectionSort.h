#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include "Sort.h"

template <typename T>
class SelectionSort: public Sort<T>{
    private:
    T *arr;
    int size;
    void sort() override;
    int findIndexOfLargest(const T a[], int cSize);

    public:
    SelectionSort(T arr[], int n);

    ~SelectionSort () { }

};

#include "SelectionSort.cpp"
#endif