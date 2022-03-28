//Created by Rubi Dionisio

#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "FileManager.h"
#include "Sort.h"

int main(){
    // int unsorted[5];
    // FileManager f;
    // f.newCSV(unsorted, 5, "unsorted", "bubble");
    // BubbleSort<int> bubble(unsorted, 5);
    // FileManager z;
    // z.newCSV(unsorted, 5, "sorted", "bubble");    

    int unsorted1K[1000];
    int unsorted10K[10000];
    int unsorted100K[100000];

    FileManager bubble1k;
    bubble1k.newCSV(unsorted1K, 1000, "unsorted", "bubble");
    FileManager bubble10k;
    bubble10k.newCSV(unsorted10K, 10000, "unsorted", "bubble");
    FileManager bubble100k;
    bubble100k.newCSV(unsorted100K, 100000, "unsorted", "bubble");

    return 0;
};