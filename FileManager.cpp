#include "FileManager.h"

void FileManager::copyArray(int* arrayCopy, const int otherArray[], int size){
    for(int i = 0; i < size; i++){
        arrayCopy[i] = otherArray[i];
    }
}

void FileManager::tableCSV(int size, const double arrayT[], const int arrayC[], const int arrayS[], std::string algorithm, const int totS[], const int totC[], const double totT[]){
    std::ofstream file;
    file.open(algorithm + std::to_string(size) + ".csv", std::ios::trunc);
    file << "Unsorted, Run Time, Comparisons, Swaps \n";
    for(int i = 0; i < 20; i++){
        if(i == 9){
            file << "Average," << totT[0]/10 << "," << totC[0]/10 << "," << totS[0]/10 << "\n";
            file << "Sorted, Run Time, Comparisons, Swaps \n" << arrayT[i] << "," << arrayC[i] << "," << arrayS[i] << "\n";
        }else{
            file << "," << arrayT[i] << "," << arrayC[i] << "," << arrayS[i] << "\n";
        }
    }
    file << "Average," << totT[1]/10 << "," << totC[1]/10 << "," << totS[1]/10 << "\n";

    file.close();
}


// void randCSV(int *array, int n, std::string isSorted, std::string algorithm){
//     for(int i = 0; i < n; i++){
//         //if it's the unsorted one, then random numbers are generated
//         if(isSorted.compare("unsorted") == 0){
//             srand(i);        
//             array[i] = rand() % (int)((1e+6) - 0) + 1;
//         }
//     }
// }

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

void FileManager::changeCSV(int nSwaps, int nComparisons, double runTime, int size, std::string algorithm){
    std::ofstream file;
    file.open(algorithm + std::to_string(size) + ".csv", std::ios::trunc);

    // for(int i = 0; i < n; i++){
    //     //if it's the unsorted one, then random numbers are generated
    //     if(isSorted.compare("unsorted") == 0){
    //         srand(i);        
    //         array[i] = rand() % (int)((1e+6) - 0) + 1;
    //     }
    //     file << array[i];
    //     if(i == n-1){
    //         file << "\n"; // << comp << "," << swap << std::endl;
    //     }else{
    //         file << ",";
    //     }
    // }

    file.close();
}