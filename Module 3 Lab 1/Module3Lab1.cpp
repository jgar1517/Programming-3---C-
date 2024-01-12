
// NVC - Programming  - C++
// Author: Jonathan Garcia
// Generate a multiplication table of with users input using nested loops 

#include <iostream>
#include <iomanip>	//include iomanip library for formatting
#include <string> 	//include string library to read the file line by line to console
using namespace std;

int main(){

double userNumber; 

cout << "---------------Multiplication Table---------------";cout << endl;
cout << "Enter number: ";
cin >> userNumber;

for (int i = 1; i <= userNumber; i++) {
   for (int j = 1; j <= userNumber; j++) {
      cout << setw(2) << left << i * j << " ";
   }
   cout << endl;
}
}
