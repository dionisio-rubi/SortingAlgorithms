#ifndef FILEMANAGER
#define FILEMANAGER
#include <iostream>
#include <fstream>
#include <sstream>

class FileManager{
    private:

    public:
    FileManager() = default;
    void newCSV(int *array, int n, std::string isSorted, std::string algorithm);
};

#endif