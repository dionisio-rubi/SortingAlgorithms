sort: driver.o
	g++ -o sort driver.o

driver.o: driver.cpp BubbleSort.h QuickSort.h SelectionSort.h
	g++ -c driver.cpp

clean:
	rm *.o sort