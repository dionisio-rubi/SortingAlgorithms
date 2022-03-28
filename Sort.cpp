template<typename T>
Sort<T>::Sort(T arr[], int n)
    : arr(arr)
    , size(n)
    , comparisons(0)
    , swaps(0)
{
}

template<typename T>
void Sort<T>::swap(int currentI, int otherI){
    T temp = arr[currentI];
    arr[currentI] = arr[otherI];
    arr[otherI] = temp;
}

template <typename T>
void Sort<T>::increaseSwap(){
    swaps++;
}

template <typename T>
void Sort<T>::increaseComp(){
    comparisons++;
}

template <typename T>
T* Sort<T>::getArr()const{
    return arr;
}

template <typename T>
int Sort<T>::getSize()const{
    return size;
}

template <typename T>
int Sort<T>::getSwaps() const {return swaps;}

template <typename T>
int Sort<T>::getComparisons() const {return comparisons;}