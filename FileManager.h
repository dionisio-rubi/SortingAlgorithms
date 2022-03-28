#ifndef FILEMANAGER
#define FILEMANAGER
#include <iostream>
#include <fstream>
#include <sstream>

class FileManager{
    private:

    public:
    FileManager() = default;
    void copyArray(int* arrayCopy, const int otherArray[], int size);
    void newCSV(int* array, int n, std::string isSorted, std::string algorithm);
    void tableCSV(int size, const double arrayT[], const int arrayC[], const int arrayS[], std::string algorithm, const int totS[], const int totC[], const double totT[]);
    void changeCSV(int nSwaps, int nComparisons, double runTime, int size, std::string algorithm);
};

#endif