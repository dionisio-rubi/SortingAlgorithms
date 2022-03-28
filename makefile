all: sort

sort: driver.o FileManager.o
	g++ -o sort driver.o FileManager.o

driver.o: driver.cpp BubbleSort.h QuickSort.h SelectionSort.h
	g++ -c driver.cpp

FileManager.o: FileManager.cpp FileManager.h
	g++ -c FileManager.cpp

clean:
	rm *.o sort