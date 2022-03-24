#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl; using std::vector;

void output(vector<double> numbers) {
	for (vector<double>::iterator ip = numbers.begin(); 
		ip != numbers.end(); ++ip) {
		cout << *ip << " ";
	}
	cout << endl;
}

int main() {

	char operation;
	double input;
	vector<double> numbers;
	
	while (true) {

		cout << "Enter operation [a/r/q] and number: ";
		cin >> operation >> input;

		if (operation == 'a') {
			vector<double>::iterator it = find(numbers.begin(), numbers.end(), input);
			if (it == numbers.end()) {
				numbers.push_back(input);
			}
				cout << "your numbers: ";
				output(numbers);
			
		}
		else if (operation == 'r') {
			vector<double>::iterator it= find(numbers.begin(), numbers.end(), input);
			if (it != numbers.end());
			numbers.erase(it);
			cout << "your numbers: ";
			output(numbers);
		}
		else
			break;
	}
}


	