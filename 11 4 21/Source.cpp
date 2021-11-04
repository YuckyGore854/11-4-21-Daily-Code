#include<iostream>
#include<array>

using namespace std;
double median(int* array, int arraySize);



int main() {
	const int arraySize = 8;
	int array[arraySize]; 
	
	for (int i = 0; i < arraySize; i++) {
		cin >> array[i];
	}
	//int* arrPoint = &array[5];
	

	cout << median(array, arraySize);
	
}


double median(int* array, int arraySize) {
	//cout << *array;
	
	if (arraySize % 2 == 1) return *array + arraySize / 2;

	else return ((double(*array + (arraySize / 2)) + double(*array + (arraySize - 1) / 2))) / 2;
}


