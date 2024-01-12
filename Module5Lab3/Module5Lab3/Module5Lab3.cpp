// NVC Programming 3
// Author: Jonathan Garcia
// MOdule 5 Lab 3 
// Create a menu program that allows a user to select the 5 Options form a Menu
// This lab will require you to overload a function called addNumbers

#include <iostream>
#include <cmath>
using namespace std;

//define function
void addNumbers(int, double) ;
int addNumbers(int, int);
int addNumbers(int, int, int);
double addNumbers(double, double);
double addNumbers(double, double, double);

int main() {
	int one1 = 5;
	int two2 = 6;
	int three3 = 2;
	double dOne = 4.25;
	double dTwo = 6.50;
	double dThree = 7.25;
	int	userSelection;

	// Output Title and Menu
	cout << "----------Calculator----------\n 1. Add Two Integers \n 2. Add Three Integers \n 3. Add Two Doubles \n 4. Add Three Doubles \n 5. Exit the Program \n";
	
	// Ask user to input option 
	cout << "\n";
	cout << "Please enter your selection: ";
	cout << "\n";
	cin >> userSelection;
		
		// 5 options 
		// add two integer numbers
		// add three integer numbers
		// add two double numbers
		// add three double numbers
		// Quit program
	while (userSelection != 5) {
		switch (userSelection)
		{
		case 1:
			cout << "The sum of the two Integers " << one1 << " and " << two2 << " is " << addNumbers(one1, two2) << endl;
			cout << "Please select another option: ";
			break;
		case 2:
			cout << "The sum of the three Integers " << one1 << ", " << two2 << " and " << three3 << " is " << addNumbers(one1, two2, three3) << endl;
			cout << "Please select another option: ";
			break;
		case 3:
			cout << "The sum of the two Doubles " << dOne << " and " << dTwo << " is " << addNumbers(dOne, dTwo) << endl;
			cout << "Please select another option: ";
			break;
		case 4:
			cout << "The sum of the three Doubles " << dOne << ", " << dTwo << " and " << dThree << " is " << addNumbers(dOne, dTwo, dThree) << endl;
			cout << "Please select another option: ";
			break;
		}
		cin >> userSelection;
	}
	return 0;
}


//functions
int addNumbers(int one1, int two2)
{
	return one1 + two2;
}

int addNumbers(int one1, int two2, int three3)
{
	return one1 + two2 + three3;
}

double addNumbers(double dOne, double dTwo)
{
	return dOne + dTwo;
}

double addNumbers(double dOne, double dTwo, double dThree)
{
	return dOne + dTwo + dThree;
}
