#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

template <typename T>
class BubbleSort: public Sort <T>{
    private:
    T *arr;
    int size;
    // void swap(int currentI, int otherI);
    void sort() override;

    public:
    BubbleSort(T arr[], int n);

    ~BubbleSort () { }
};

#include "BubbleSort.cpp"
#endif