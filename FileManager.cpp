#include "FileManager.h"

void FileManager::newCSV(int array[], int n, std::string isSorted){
    std::ofstream file;
    file.open(isSorted + std::to_string(n) + ".csv", std::ios::trunc);

    for(int i = 0; i < n; i++){
        //if it's the unsorted one, then random numbers are generated
        if(isSorted == "unsorted"){
            srand(i);
            array[i] = rand() % (n+1);
        }
        file << array[i];
        if(i == n-1){
            file << "\n";
        }else{
            file << ",";
        }
    }

    file.close();
}