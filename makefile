all: sort

sort: driver.o
	g++ -o sort driver.o

driver.o: driver.cpp BubbleSort.h QuickSort.h SelectionSort.h
	g++ -c driver.cpp

Sort.o: Sort.cpp Sort.h
	g++ -c Sort.cpp

clean:
	rm *.o sort