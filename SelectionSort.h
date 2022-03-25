#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

template <typename T>
class SelectionSort: public SortInterface <T>{
    private:
    int swap = 0;
    int comparison = 0;

    public:
    int findIndexOfLargest(const T array[], int size);
    void sort(T array[], int n) const;

};

#include "SelectionSort.cpp"
#endif