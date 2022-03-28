template<typename T>
QuickSort<T>::QuickSort(T arr[], int n)
    : Sort<T>(arr, n)
{
    QuickSort<T>::arr = Sort<T>::getArr();
    QuickSort<T>::size = Sort<T>::getSize();
    sort();
}

template<typename T>
void QuickSort<T>::sortSML(int one, int mid, int last){
    if(arr[one] > arr[mid]){
        this->swap(arr[one], arr[mid]);
    }
    if(arr[mid] > arr[last]){
        this->swap(arr[mid], arr[last]);
    }
    if(arr[one] > arr[mid]){
        this->swap(arr[one], arr[mid]);
    }
}

template<typename T>
int QuickSort<T>::partition(int s, int e){

    // int m = s + (e-s)/2;
    // sortSML(s, m, e);
    // this->swap(arr[m], arr[e-1]);
    // int pivotIndex = e - 1;

    // int pivot = arr[s];
    // int count = 0;
    // for(int i = start + 1; i <= e; i++){
    //     this->increaseComp();

    // }
    int pivot = arr[s];
    int i = s - 1;
    int j = e + 1;

    while(1){
        do{
            i++;
        }while(arr[i] < pivot);

        do{
            j--;
        }while(arr[j] > pivot);
        this->increaseComp();
        if(i >= j){
            return  j;
        }
        this->increaseSwap();
        this->swap(arr[i], arr[j]);
    }


}

template <typename T>
void QuickSort<T>::sort(){
    sort(0, size);
}

template <typename T>
void QuickSort<T>::sort(int start, int end){
    if(start >= end){return;}

    int pivotI = partition(start, end);

    sort(start, pivotI - 1);
    sort(pivotI + 1, end);
}