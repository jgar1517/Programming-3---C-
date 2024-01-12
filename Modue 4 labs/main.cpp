// NVC - Programming  - C++
// Author: Jonathan Garcia
//prgram that allows user to input a list of integers, then perform various operations on the list using vectors

#include <iostream>	// include the iostream library for input/output
#include <iomanip>	//include iomanip library for formatting
#include <vector>  //include vector header file to user vectors in C++
#include <algorithm>
using namespace std;


int main() {

	// variables for poition and value in vactor
	int posNumber;
    int value;
    int value2;
    
    //create a vector and store integers 
    vector<int> myVector;
	
	//display program title
	cout << "------------------- Integer Vector Demo -------------------"; 
	
	cout << "\n" << endl; 
	
	cout << "Enter a list of integers, one at a time. Enter -1 to stop."; 
	cout << endl; 
	
	//while loop to continue to ask user for input until user enters -1
	while (true)
	{
	//ask the user for integers one at a time . 
	cout << "Enter a integer to the vector: ";
	cin >> value;
	
	//Enter -1 to stop.
	if(value == -1) {
        break; 
    }
    //store integers in vector
	   myVector.push_back(value);
	
	}
	//display contents of the vector to the screen
	cout << "\n" << endl;
	cout << "The contents of the vector are: ";
	for (int num : myVector){
	cout << num  << " "; 
	}
	
	cout << "\n" << endl;
	
	//Ask the user to enter a value to search for in the vector
	cout << "Enter a value to search for in the vector: ";
	cin >> value2;
	auto it = find(myVector.begin(), myVector.end(), value2);
	//Check to see if value was found 
	 if (it != myVector.end()) {
        cout << value2 << " was found at position " << distance(myVector.begin(), it) << endl;
    } else {
        cout << "Value not found." << endl;
    }
	
	cout << "\n" << endl;
	
	//Ask the user for a position in the vector to remove
	cout << "Enter a position to remove (0 to 2): ";
    cin >> posNumber; 
	
	//Remove the integer at the posiiton and display the contents of the vector again
	cout << "After removing the value at position " << posNumber << ". The contents of the vector are: ";
	if(posNumber > -1 && posNumber < myVector.size()) {
       myVector.erase(myVector.begin() + posNumber);
    } 
	else {
      cout << "Invalid position.";
	}
	for (int num : myVector){
	cout << num  << " "; 
	}
	
	cout << "\n" << endl;
	
	//Ask the user for a value to insert into the vector
	cout << "Enter a value to insert into Vector: ";
    cin >> value;
	
	//Ask the user for a position to insert the value into
	 cout << "Enter a position to insert (0 to 2): ";
  	 cin >> posNumber;
    
	if(posNumber > -1 && posNumber <= myVector.size()) {
        myVector.insert(myVector.begin() + posNumber, value);
    } 
	else {
      cout << "Invalid position.";
    }
	
	//Display the contents of the vector one last time  
	cout << "After inserting the value, the contents of the vector are: ";
	for (int num : myVector){
	cout << num  << " "; 
    }
    
    cout << "\n" << endl;
    
    
    
    
	return 0;
}
