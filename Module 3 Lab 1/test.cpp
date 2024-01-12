#include <iostream>
#include <iomanip>	//include iomanip library for formatting
using namespace std;

// Prototype for the sequential search function
int carData();

int main()
{
	// create a const variable for the array size 
    const int ARRAY_SIZE = 5;
    // string and a double array for vehicle name and MPG
    string vehicleName[ARRAY_SIZE] = { "Civic", "Focus", "Tundra", "Blazor", "Smart Car" };
    double mpGallon[ARRAY_SIZE] = { 36.2, 28.5, 15.2, 18.0, 45.0 }; 
   
	// Use for loop to print each car and its MPG until program reaches end of array
	// program will start at the 0 index and repeat untill the end of the ARRAY_SIZE... 5
    for (int carData = 0; carData < ARRAY_SIZE; carData++)
    {
       cout << setw(5) << left << "Car: " << vehicleName[carData] << endl;
       cout << setw(13) << right << "MPG: " << mpGallon[carData] << endl;
	
    // Check if the vehicle is Economical or a Gas Guzzler
        
        if (mpGallon[carData] >= 30)
        {
            cout << setw(18) << "Economical" << endl;
        }
        else
        {
            cout << setw(19) << "Gas Guzzler" << endl;
        }
 		
	}
	
	return 0;
}
	

    


