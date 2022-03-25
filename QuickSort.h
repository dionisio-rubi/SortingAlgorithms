#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename T>
class QuickSort: public SortInterface <T>{
    private:
    int swap = 0;
    int comparison = 0;

    public:
    void sort(T array[], int n) const;
};

#include "QuickSort.cpp"
#endif