#include <iostream>
#include "varArray.hpp"

using std::cin; using std::cout; using std::endl;

void output(double* arrayPtr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << arrayPtr[i] << " ";
	}
	cout << endl;
}

int check(double* arrayPtr, double number, int size) {
	for (int i = 0; i < size; ++i) {
		if (arrayPtr[i] == number) {
			return i;
		}
	}
	return -1;
}

void addNumber(double*& arrayPtr, double number, int& size) {
	if (check(arrayPtr, number, size) == -1) {
		double* newArray = new double[size+1];

		for (int i = 0; i < size; ++i) {
			newArray[i] = arrayPtr[i];
	}
		delete [] arrayPtr;
		newArray[size] = number;
		arrayPtr = newArray;
		++size;

	}
}

void removeNumber(double*& arrayPtr, double number, int& size) {
	if (check(arrayPtr, number, size) != -1) {

		int p = check(arrayPtr, number, size);
		double* newArray = new double[size-1];

		for (int i = 0; i < size-1; ++i) {
			newArray[i] = arrayPtr[i];
		}
		for (int i = p; i < size - 1; ++i) {
			newArray[i] = arrayPtr[i + 1];
		}
		delete[] arrayPtr;
		arrayPtr = newArray;
		--size;
	}
}