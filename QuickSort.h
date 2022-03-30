#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

template <typename T>
class QuickSort: public Sort<T>{
    private:
    T *arr;
    int size;
    void sort() override;
    void quickSort(int start, int end);
    int partition(int start, int end);

    public:
    QuickSort(T arr[], int n);

    ~QuickSort() { }
};

#include "QuickSort.cpp"
#endif