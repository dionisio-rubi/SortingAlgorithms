#include "FileManager.h"

void FileManager::newCSV(int* array, int n, std::string isSorted, std::string algorithm){
    std::ofstream file;
    file.open(algorithm + isSorted + std::to_string(n) + ".csv", std::ios::trunc);

    for(int i = 0; i < n; i++){
        //if it's the unsorted one, then random numbers are generated
        if(isSorted.compare("unsorted") == 0){
            srand(i);        
            array[i] = rand() % (int)((1e+6) - 0) + 1;
        }
        file << array[i];
        if(i == n-1){
            file << "\n"; // << comp << "," << swap << std::endl;
        }else{
            file << ",";
        }
    }

    file.close();
}