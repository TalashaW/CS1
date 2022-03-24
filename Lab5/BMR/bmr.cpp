#include <iostream>
#include<cmath>
#include<ctime>
#include <cstdlib>

using std::cin; using std::cout; using std::endl;


const int Cal = 195;
double bmrWomen(int weightLbs, int userHeight, int ageInYears);
double bmrMen(int weightLbs, int userHeight, int ageInYears);


double bmrWomen(int weightLbs, int userHeight, int ageInYears) {
	return 655 + (4.3 * weightLbs) + (4.7 * userHeight) - (4.7 * ageInYears);
}
double bmrMen(int weightLbs, int userHeight, int ageInYears) {
	return 66 + (6.3 * weightLbs) + (12.9 * userHeight) - (6.8 * ageInYears);
}

int main() {

	double bmr;
	int gender;
	int userHeight;
	int weightLbs;
	int ageInYears;
	int donuts;


	cout << "1.Female" << endl;
	cout << "2.Male" << endl;
	cout << "Select gender: ";
	cin >> gender;
	cout << endl;

	cout << "Enter height: ";
	cin >> userHeight;
	cout << endl;

	cout << "Enter weight: ";
	cin >> weightLbs;
	cout << endl;

	cout << "Enter age: ";
	cin >> ageInYears;
	cout << endl;


	if (gender == 1) {
		cout << "Female" << endl;
		bmr = bmrWomen(userHeight, weightLbs, ageInYears);
	}
	else if (gender == 2) {
		cout << "Male" << endl;
		bmr = bmrMen(userHeight, weightLbs, ageInYears);

	}
	cout << " Your bmr is: " << bmr << endl;

	donuts = bmr / Cal;
	cout << "you can eat " << donuts << " donuts" << endl;
}

