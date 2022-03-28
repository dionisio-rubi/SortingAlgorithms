template<typename T>
BubbleSort<T>::BubbleSort(T arr[], int n)
    : Sort<T>(arr, n)
{
    BubbleSort<T>::arr = Sort<T>::getArr();
    BubbleSort<T>::size = Sort<T>::getSize();
    sort();
}

template <typename T>
void BubbleSort<T>::sort(){
    bool sorted = false; //checker for if swapped --> false if no swaps
    int pass = 1;

    while(!sorted && (pass < size)){
        sorted = true; //assume that it's sorted
        for(int i = 0; i < size - pass; i++){
            int nextI = i + 1;
            this->increaseComp();
            if(arr[i] > arr[nextI]){
                this->swap(i, nextI);
                this->increaseSwap();
                // Sort<T>::increaseSwap();
                sorted = false;
            }
        }
        pass++;
    }
}