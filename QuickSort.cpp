#include "QuickSort.h"

template<typename T>
QuickSort<T>::QuickSort(T arr[], int n)
    : Sort<T>(arr, n)
{
    QuickSort<T>::arr = Sort<T>::getArr();
    QuickSort<T>::size = Sort<T>::getSize();
    sort();
}

template <typename T>
void QuickSort<T>::sort(){
    // if((last - first+1) < MIN_SIZE){
        
    // }
}