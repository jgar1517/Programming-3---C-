// NVC - Programming  - C++
// Author: Jonathan Garcia
// prgram that allows user to choose an operation and input two numbers
#include <cmath>
#include <iostream>
using namespace std;

//create a function for each four arithmetic operators: add, subtract, multiply, divide
//Each function should take two double parameters and return a double

//prototype functions
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

int main() {

	double numOne;
	double numTwo;
	int operations;

	//ask user for first number 
	cout << "Enter first number  ";
	cin >> numOne;
	//ask user for second number
	cout << "Enter second number  ";
	cin >> numTwo;
	//ask user for operation 
	cout << "Choose operation. Enter 1-4 (1.add, 2.subtract, 3.multiply, 4.divide) Choose 0 to exit: ";
	cin >> operations;
	
	//while loop to have menu appear to choose operation until user enters 0 
	while (operations != 0) {
		cout << "Choose another operation. (1.add, 2.subtract, 3.multiply, 4.divide) Choose 0 to exit: ";

		switch (operations)
		{
		case 1:
			cout << "The sum of these two numbers are " << add(numOne, numTwo) << endl;
			break;
		case 2:
			cout << "The sum of these two numbers are " << subtract(numOne, numTwo) << endl;
			break;
		case 3:
			cout << "The sum of these two numbers are " << multiply(numOne, numTwo) << endl;
			break;
		case 4:
			cout << "The sum of these two numbers are " << divide(numOne, numTwo) << endl;
			break;
		}
		cin >> operations;
	}
	return 0;
}

//functions
double add(double numOne, double numTwo)
{
	return numOne + numTwo;
}

double subtract(double numOne, double numTwo)
{
	return numOne - numTwo;
}

double multiply(double numOne, double numTwo)
{
	return numOne * numTwo;
}

double divide(double numOne, double numTwo)
{
	return numOne / numTwo;
}



