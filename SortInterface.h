#ifndef SELECTIONINTERFACE_H
#define SELECTIONINTERFACE_H

template <typename T>
class SortInterface{
    public:
    virtual void sort(T array[], int n) const = 0;
    ~SortInterface() { }
};

#endif