#include "SelectionSort.h"

template <typename T>
int SelectionSort::findIndexOfLargest(const T a[], int size){
    int index = 0; //index of the largest entry found so far
    for(int currentIndex = 1; currentIndex < size; currentIndex++){
        if(a[currentIndex] > a[index]){
            index = currentIndex;
            compare++;
        }
    }
    return index; //returns largest entry
}

template <typename T>
void SelectionSort::sort(T array[], int n) const{
    for(int last = n-1; last >= 1; last--){
        int largest = findIndexOfLargest(array, last + 1);
        std::swap(array[largest], array[last]);
        swap++;
    }
}