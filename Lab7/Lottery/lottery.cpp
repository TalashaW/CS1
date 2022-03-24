#include <iostream>
#include <cstdlib>
#include <ctime>



using std::cin; using std::cout; using std::endl;


void assign(int wins [], int arraySize);

void draw(int wins[], int arraySize);

// prompts user for a single number ranging 1-100 and returns the value
int entry();

//returns true if the number matches one of the array elements
// returns false if the number doesnt match any array elements
bool check(int wins [], int arraySize, int num);

//prints out all of the numbers in the wins array and input
void printOut(int wins[], int arraySize, int num);



int main() {
	const int arraySize = 10;

	cout << "Enter weekly lottery drawing " << endl;
	int wins[arraySize];
	int userNum;
	int randNum;
	


	//time(nullptr) is current time and is always increasing, 
	// srand parameter needs to be different to generate different random numbers 
	srand(time(nullptr));

	assign(wins, arraySize);
	draw(wins, arraySize);
	int numGuess = entry();
	bool numFound = check(wins, arraySize, numGuess);

	
	
	if (numFound) {
		cout << "Winner!" << endl;
	}
	else {
		cout << "loser!" << endl;
	}
	
	printOut(wins, arraySize, numGuess);
}

void assign(int wins[], int arraySize) {

	for (int i = 0; i < arraySize; ++i) {
		wins[i] = 0;
	}
}

void draw(int wins[], int arraySize) {
	int numFound = 0;
	while (numFound < arraySize) {
		int num = (rand() % 100) + 1;
		//check if num inside wins

		if (check(wins, arraySize, num)) {
			//if it is then do nothing and start over
		}
		else {
			wins[numFound] = num;
			numFound++;
		}
			//if it isnt, add it to an unused spot in wins

	}
}
bool check(int wins[], int arraySize, int num) {

	for (int i = 0; i < arraySize; ++i) {
		if (wins[i] == num) {
			return true;

		}
	}
	return false;
}
int entry() {
	int userInput;
	cout << "Guess a number from 1-100" << endl;
	cin >> userInput;
	return userInput;
}
void printOut(int wins[], int arraySize, int num) {
	cout << "The winning number is: ";
	for (int i = 0; i < arraySize; ++i) {
		cout << wins[i] << " ";
			cout << endl;
	}

}
