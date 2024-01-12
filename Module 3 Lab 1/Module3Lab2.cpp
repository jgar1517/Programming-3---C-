// Total pay (Annual Salary - Taxes Paid) Program
// NVC - Programming  - C++
// Author: Jonathan Garcia
// Ask user Annual Salary, calculate tax, then calculate total salary until user enters 0


#include <iostream> // include the iostream library for input/output
#include <iomanip>	//include iomanip library for formatting
#include <string>	//include the string library
#include <fstream>	//include the fstream library to write and read a file 
#include <string> 	//include string library to read the file line by line to console
using namespace std;

int main ()
{
    // Declare the variable to store the users annual salary
    double annualSalary = 0;
    
     //Declare variables for each tax rate
    double taxRate1 = annualSalary * .05;
    double taxRate2 = annualSalary * .10;
    double taxRate3 = annualSalary * .15;
    double taxRate4 = annualSalary * .20;
    double taxRate5 = annualSalary * .25;
 
    
    //set the formatting for the output 
	cout << showpoint << fixed << setprecision(2);
	
    // Ask user for their annual salary
    cout << "Enter annual salary:  ";
    cin >> annualSalary;
    
    
    //Print Annual Salary 
    cout << setw(8) << left << "Annual Salary: " << " $" << annualSalary << endl;
    
   	 do {
    
    // Determine the users tax rate based on their annual salary amount
    // (annualSalary < 20000) // tax rate in 5%
    {
        cout << setw(8) << left << "Tax Rate: 5.00%" << endl;
        cout << setw(8) << left << "Tax Withheld: " << " $" << taxRate1 << endl;
        cout << setw(8) << left << "Total Pay: " << " $" << annualSalary - taxRate1 << endl;
    }  while (annualSalary >= 20000, < 40000);
    else if (annualSalary < 40000) // tax rate is 10%
    {
        cout << setw(8) << left << "Tax Rate: 10.00%" << endl;
        cout << setw(8) << left << "Tax Withheld: " << " $" << taxRate2 << endl;
        cout << setw(8) << left << "Total Pay: " << " $" << annualSalary - taxRate2 << endl;
    }
    else if (annualSalary < 60000) // tax rate is 15%
    {
        cout << setw(8) << left << "Tax Rate: 15.00%" << endl;
        cout << setw(8) << left << "Tax Withheld: " << " $" << taxRate3 << endl;
        cout << setw(8) << left << "Total Pay: " << " $" << annualSalary - taxRate3 << endl;
    }
    else if (annualSalary >= 80000) // tax rate is 20%
    {
        cout << setw(8) << left << "Tax Rate: 20.00%" << endl; 
        cout << setw(8) << left << "Tax Withheld: " << " $" << taxRate4 << endl;
        cout << setw(8) << left << "Total Pay: " << " $" << annualSalary - taxRate4 << endl;
    }
    
    }
    while (annualSalary >= 1);
    cout << endl;
   return 0;
}
