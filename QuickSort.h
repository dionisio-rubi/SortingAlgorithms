#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

template <typename T>
class QuickSort: public Sort<T>{
    private:
    T *arr;
    int size;
    void sort() override;
    void sort(int start, int end);
    int partition(int start, int end);
    void sortSML(int one, int mid, int last);

    public:
    QuickSort(T arr[], int n);

    ~QuickSort() { }
};

#include "QuickSort.cpp"
#endif