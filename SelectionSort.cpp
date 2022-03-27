#include "SelectionSort.h"

template<typename T>
SelectionSort<T>::SelectionSort(T arr[], int n)
    : Sort<T>(arr,n)
{
    SelectionSort<T>::arr = Sort<T>::getArr();
    SelectionSort<T>::size = Sort<T>::getSize();
    sort();
}

template <typename T>
int SelectionSort<T>::findIndexOfLargest(const T a[], int cSize){
    int index = 0; //index of the largest entry found so far
    for(int currentIndex = 1; currentIndex < cSize; currentIndex++){
        if(a[currentIndex] > a[index]){
            index = currentIndex;
            this->increaseComp();
        }
    }
    return index; //returns largest entry
}

template <typename T>
void SelectionSort<T>::sort(){
    for(int last = size-1; last >= 1; last--){
        int largest = findIndexOfLargest(arr, last + 1);
        swap(largest, last);
        this->increaseSwap();
    }
}