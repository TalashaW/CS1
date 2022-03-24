#include <iostream>
#include "varArray.hpp"

using std::cin; using std::cout; using std::endl;

int varArray::check(double number) {
	
	for (int i = 0; i < size_; ++i) {
		if (array_[i] == number) {
			return i;
		}
	}
	return -1;
}

	
void varArray::addNumber(double number) {

	if (check(number) == -1) {
		double* newArray = new double[size_ + 1];

		for (int i = 0; i < size_; ++i) {
			newArray[i] = array_[i];
		}
		delete[] array_;
		newArray[size_] = number;
		array_ = newArray;
		++size_;

	}
}

void varArray::removeNumber(double number) {
	double* newArray = new double[size_ - 1];
	int index = check(number);

	if (index < 0) {
		return;
	}

	for (int i = 0; i < size_ - 1; ++i) {
		newArray[i] = array_[i];
	}
	for (int i = index; i < size_ - 1; ++i) {
		newArray[i] = array_[i + 1];
	}
	delete[] array_;
	array_ = newArray;
	--size_;
}
	


void varArray::output() {

	for (int i = 0; i < size_; ++i) {
		cout << array_[i] << " ";
	}
	cout << endl;
}
varArray::varArray() {
	size_ = 0;
}
varArray::~varArray() {
	delete array_;
}
varArray::varArray(const varArray& object) {
	size_ = object.size_;
	array_ = new double[size_];

	for (int i = 0; i < size_; ++i) {
		array_[i] = object.array_[i];
	}
}
varArray& varArray::operator=(const varArray& va) {

	if (this != &va) {

		size_ = va.size_;
		delete[] array_;
		array_ = new double[size_];

		for (int i = 0; i < size_; ++i) {
			array_[i] = va.array_[i];
		}
		return *this;
	}
}
