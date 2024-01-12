// Contract Option Calculator 
// NVC - Programming  - C++
// Author: Jonathan Garcia
// C++ code that calculates the royalties for 3 contract options and which is the best option


#include <iostream>	// include the iostream library for input/output
#include <iomanip>	//include iomanip library for formatting
#include <string>	//include the string library

using namespace std;

	//declare constants - 
	const double optionOne = 5000 + 20000;
	const double optiontwoInterest = .125;
	const double interestTen = .10;
	const double interestFourteen = .14;
	
	  
int main(int argc, char** argv) {
	
	//Instantiate variables for price of novel, number of copies, interest rate
	double priceNovel;
	int copiesSold;
	
	//set up our number output
    cout << fixed << showpoint << setprecision(2);
    
    //program will write the header 
    cout << "--------------Author Contract Option Program--------------";cout << endl;
    
	//prompt author to enter the estimated number of copies that will be sold
	cout << "Enter the estimated amount of books to be sold: ";
    cin >> copiesSold;
		
	//prompt author to enter net price of each novel 
	cout << "Please enter net price of each novel: ";
	cin >> priceNovel;
	
	//output the royalties under each option AND the best option the author could choose 
	
	// display the formatted results for all 3 options 
	
	cout << setw(8) << left << "Option 1: " << " $" << optionOne << endl;
	
	//declare option two variable 
	float optionTwo = priceNovel * copiesSold * optiontwoInterest;
	 
	cout << setw(8) << left << "Option 2: " << " $" << optionTwo << endl;
	
	//Option 3 royalties nested if statements 
	// Determine the amount if there are less than or equal to 4000 copies sold and the amount when greater than 4000 
	// float variables help calculation 
	float optionthreeCopies = (copiesSold - 4000);
	float optionThree = copiesSold * interestTen;
	float optionthreeFinal = (optionthreeCopies * priceNovel) * interestFourteen;  
	float optionthreeTwo = optionThree + optionthreeFinal;
	
	if (copiesSold < 4000) // 10% for the first 4000 copies sold
    {
        cout << setw(8) << left << "Option 3: " << " $" << optionThree;
        //cout<< "INput x:";
        //cin >> x;
    }
    else if (copiesSold > 4000) 
    {
        cout << setw(8) << left << "Option 3: " << " $" << optionthreeTwo;
	}    
   	cout << endl;
   	
   	//Print best option using if else statements 
   	if (optionOne > optionTwo, optionOne > optionThree, optionOne > optionthreeTwo  )
   	{
   		cout << setw(8) << left << "Option 1 is your best choice!";
	}
	else if (optionTwo < optionOne, optionTwo > optionThree, optionTwo > optionthreeTwo  )
   	{
   		cout << setw(8) << left << "Option 2 is your best choice!";
	}
	else if (optionThree > optionOne, optionThree > optionTwo)
   	{
   		cout << setw(8) << left << "Option 3 is your best choice!";
	}
	else if (optionthreeTwo > optionOne, optionthreeTwo > optionTwo)
   	{
   		cout << setw(8) << left << "Option 3 is your best choice!";
   }
	return 0;
}
