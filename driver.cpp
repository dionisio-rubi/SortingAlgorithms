//Created by Rubi Dionisio

#include <iostream>
#include <chrono>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "FileManager.h"
#include "Sort.h"

int main(){
    int numSwaps[20];
    int numComparisons[20];
    double times[20];
    int totSwaps[2] = {0,0};
    int totComps[2] = {0,0};
    double totTimes[2] = {0,0};
    //unsorted arrays
    int unsorted1K[1000];
    int unsorted10K[10000];
    int unsorted100K[100000];
    //sorted arrays
    int sorted1K[1000];
    int sorted10K[10000];
    int sorted100K[100000];

    // int test[] = {4,5,7,6,8,1,2,0};
    // QuickSort<int> example(test,8);
    // for(int i = 0; i < 8; i ++){
    //     std::cout << test[i] << std::endl;
    // }
    
    //bubble
    FileManager bubble1k;
    bubble1k.newCSV(unsorted1K, 1000, "unsorted", "bubble");
    for(int i = 0; i < 10; i++){
        bubble1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        BubbleSort<int> bubble1(sorted1K, 1000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[0] += tempTime;
        times[i] = tempTime;
        numSwaps[i] = bubble1.getSwaps();
        totSwaps[0] += bubble1.getSwaps();
        numComparisons[i] = bubble1.getComparisons();
        totComps[0] += bubble1.getComparisons();

    }
    for(int i = 0; i < 10; i++){
        // bubble1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        BubbleSort<int> bubble1(sorted1K, 1000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[1] += tempTime;
        times[i+9] = tempTime;
        numSwaps[i+9] = bubble1.getSwaps();
        totSwaps[1] += bubble1.getSwaps();
        numComparisons[i+9] = bubble1.getComparisons();
        totComps[1] += bubble1.getComparisons();

    }
    bubble1k.tableCSV(1000, times, numComparisons, numSwaps, "Bubble", totSwaps, totComps, totTimes);
    // for(int i = 0; i < 10; i++){
    //     std::cout << times[i] << " " << numSwaps[i] << " " << numComparisons[i] <<std::endl;
    // }

    FileManager bubble10k;
    bubble10k.newCSV(unsorted10K, 10000, "unsorted", "bubble");
    for(int i = 0; i < 10; i++){
        bubble10k.copyArray(sorted10K, unsorted10K, 10000);
        auto start = std::chrono::steady_clock::now();
        BubbleSort<int> bubble10(sorted10K, 10000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[0] += tempTime;
        times[i] = tempTime;
        numSwaps[i] = bubble10.getSwaps();
        totSwaps[0] += bubble10.getSwaps();
        numComparisons[i] = bubble10.getComparisons();
        totComps[0] += bubble10.getComparisons();
    }
    for(int i = 0; i < 10; i++){
        // bubble1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        BubbleSort<int> bubble10(sorted10K, 10000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[1] += tempTime;
        times[i+9] = tempTime;
        numSwaps[i+9] = bubble10.getSwaps();
        totSwaps[1] += bubble10.getSwaps();
        numComparisons[i+9] = bubble10.getComparisons();
        totComps[1] += bubble10.getComparisons();

    }
    bubble10k.tableCSV(10000, times, numComparisons, numSwaps, "Bubble", totSwaps, totComps, totTimes);

    FileManager bubble100k;
    bubble100k.newCSV(unsorted100K, 100000, "unsorted", "bubble");
    for(int i = 0; i < 10; i++){
        bubble100k.copyArray(sorted100K, unsorted100K, 100000);
        auto start = std::chrono::steady_clock::now();
        BubbleSort<int> bubble100(sorted100K, 100000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[0] += tempTime;
        times[i] = tempTime;
        numSwaps[i] = bubble100.getSwaps();
        totSwaps[0] += bubble100.getSwaps();
        numComparisons[i] = bubble100.getComparisons();
        totComps[0] += bubble100.getComparisons();
    }
    for(int i = 0; i < 10; i++){
        // bubble1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        BubbleSort<int> bubble100(sorted1K, 100000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[1] += tempTime;
        times[i+9] = tempTime;
        numSwaps[i+9] = bubble100.getSwaps();
        totSwaps[1] += bubble100.getSwaps();
        numComparisons[i+9] = bubble100.getComparisons();
        totComps[1] += bubble100.getComparisons();

    }
    bubble100k.tableCSV(100000, times, numComparisons, numSwaps, "Bubble", totSwaps, totComps, totTimes);
    
    //Selection
    FileManager selection1k;
    selection1k.newCSV(unsorted1K, 1000, "unsorted", "selection");
    for(int i = 0; i < 10; i++){
        selection1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        SelectionSort<int> selection1(sorted1K, 1000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[0] += tempTime;
        times[i] = tempTime;
        numSwaps[i] = selection1.getSwaps();
        totSwaps[0] += selection1.getSwaps();
        numComparisons[i] = selection1.getComparisons();
        totComps[0] += selection1.getComparisons();

    }
    for(int i = 0; i < 10; i++){
        // selection1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        SelectionSort<int> selection1(sorted1K, 1000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[1] += tempTime;
        times[i+9] = tempTime;
        numSwaps[i+9] = selection1.getSwaps();
        totSwaps[1] += selection1.getSwaps();
        numComparisons[i+9] = selection1.getComparisons();
        totComps[1] += selection1.getComparisons();

    }
    selection1k.tableCSV(1000, times, numComparisons, numSwaps, "selection", totSwaps, totComps, totTimes);
    // for(int i = 0; i < 10; i++){
    //     std::cout << times[i] << " " << numSwaps[i] << " " << numComparisons[i] <<std::endl;
    // }

    FileManager selection10k;
    selection10k.newCSV(unsorted10K, 10000, "unsorted", "selection");
    for(int i = 0; i < 10; i++){
        selection10k.copyArray(sorted10K, unsorted10K, 10000);
        auto start = std::chrono::steady_clock::now();
        SelectionSort<int> selection10(sorted10K, 10000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[0] += tempTime;
        times[i] = tempTime;
        numSwaps[i] = selection10.getSwaps();
        totSwaps[0] += selection10.getSwaps();
        numComparisons[i] = selection10.getComparisons();
        totComps[0] += selection10.getComparisons();
    }
    for(int i = 0; i < 10; i++){
        // selection1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        SelectionSort<int> selection10(sorted10K, 10000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[1] += tempTime;
        times[i+9] = tempTime;
        numSwaps[i+9] = selection10.getSwaps();
        totSwaps[1] += selection10.getSwaps();
        numComparisons[i+9] = selection10.getComparisons();
        totComps[1] += selection10.getComparisons();

    }
    selection10k.tableCSV(10000, times, numComparisons, numSwaps, "selection", totSwaps, totComps, totTimes);

    FileManager selection100k;
    selection100k.newCSV(unsorted100K, 100000, "unsorted", "selection");
    for(int i = 0; i < 10; i++){
        selection100k.copyArray(sorted100K, unsorted100K, 100000);
        auto start = std::chrono::steady_clock::now();
        SelectionSort<int> selection100(sorted100K, 100000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[0] += tempTime;
        times[i] = tempTime;
        numSwaps[i] = selection100.getSwaps();
        totSwaps[0] += selection100.getSwaps();
        numComparisons[i] = selection100.getComparisons();
        totComps[0] += selection100.getComparisons();
    }
    for(int i = 0; i < 10; i++){
        // selection1k.copyArray(sorted1K, unsorted1K, 1000);
        auto start = std::chrono::steady_clock::now();
        SelectionSort<int> selection100(sorted1K, 100000);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_milliseconds = end-start;
        double tempTime = elapsed_milliseconds.count();
        totTimes[1] += tempTime;
        times[i+9] = tempTime;
        numSwaps[i+9] = selection100.getSwaps();
        totSwaps[1] += selection100.getSwaps();
        numComparisons[i+9] = selection100.getComparisons();
        totComps[1] += selection100.getComparisons();

    }
    selection100k.tableCSV(100000, times, numComparisons, numSwaps, "selection", totSwaps, totComps, totTimes);

    return 0;
};