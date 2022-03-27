#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

template <typename T>
class QuickSort: public Sort<T>{
    private:
    T *arr;
    int size;
    void swap(int currentI, int otherI);
    void sort() override;

    public:
    QuickSort(T arr[], int n);

    ~QuickSort() { }
};

#include "QuickSort.cpp"
#endif