template<typename T>
QuickSort<T>::QuickSort(T arr[], int n)
    : Sort<T>(arr, n)
{
    QuickSort<T>::arr = Sort<T>::getArr();
    QuickSort<T>::size = Sort<T>::getSize();
    sort();
}

template<typename T>
int QuickSort<T>::partition(int s, int e){
    int pivotVal = arr[e];
    int pivotI = s;
    int temp;

    for(int i = s; i < e; i++){
        this->increaseComp();
        if(arr[i] <= pivotVal){
            this->increaseSwap();
            this->swap(i,pivotI);
            pivotI++;
        }
    }

    this->increaseSwap();
    this->swap(e, pivotI);
    return pivotI;
}

template <typename T>
void QuickSort<T>::sort(){
    quickSort(0, size-1);
}

template <typename T>
void QuickSort<T>::quickSort(int start, int end){
    if(start < end){
        int pivotI = partition(start, end);
        quickSort(start, pivotI - 1);
        quickSort(pivotI + 1, end);
    }
}