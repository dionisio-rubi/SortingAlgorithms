#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template <typename T>
class BubbleSort: public SortInterface <T>{
    private:
    int swap = 0;
    int comparison = 0;

    public:
    void sort(T array[], int n) const;

};

#include "BubbleSort.cpp"
#endif