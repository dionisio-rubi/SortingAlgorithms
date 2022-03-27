#ifndef SORT_H
#define SORT_H

template <typename T>
class Sort{
    private:
    T *arr;
    int size;
    int swaps;
    int comparisons;

    public:
    Sort(T arr[], int n);
    // virtual void sort(T array[]) = 0;
    virtual void sort() = 0;
    void swap(int currentI, int otherI);

    void increaseSwap();
    void increaseComp();

    T* getArr()const;
    int getSize()const;
    int getSwaps() const;
    int getComparisons() const;
    
    ~Sort() { }
};

#endif