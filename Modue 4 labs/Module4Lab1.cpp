#include <iostream>
using namespace std;

// Prototype for the sequential search function
int seqSearch(const string list[], int listLength, const string &searchItem);

void DisplayArray(const string pArray[], int pSize);

int main()
{
    const int ARRAY_SIZE = 5;
    string vehicleName[ARRAY_SIZE] = { "Civic", "Focus", "Tundra", "Blazor", "Smart Car" };
    double mpGallon[ARRAY_SIZE] = { 36.2, 28.5, 15.2, 18.0, 45.0 };

    // Display the vehicle names
    cout << "Vehicle Names:" << endl;
    DisplayArray(vehicleName, ARRAY_SIZE);

    // Display the MPG values
    cout << "MPG Values:" << endl;
    DisplayArray(mpGallon, ARRAY_SIZE);

    // Check if each car is Economical or a Gas Guzzler and display the result
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Car: " << vehicleName[i] << endl;
        cout << "MPG: " << mpGallon[i] << endl;

        // Check if the car is Economical or a Gas Guzzler
        if (mpGallon[i] >= 30.0)
        {
            cout << "Economical" << endl;
        }
        else
        {
            cout << "Gas Guzzler" << endl;
        }

        cout << endl; // Add a newline for readability
    }

    return 0;
}

// Function to perform a sequential search in an array of strings
int seqSearch(const string list[], int listLength, const string &searchItem)
{
    for (int i = 0; i < listLength; i++)
    {
        if (list[i] == searchItem)
        {
            return i; // Return the index if the item is found
        }
    }
    return -1; // Return -1 if the item is not found
}

// Function to display an array of strings
void DisplayArray(const string pArray[], int pSize)
{
    for (int i = 0; i < pSize; i++)
    {
        cout << pArray[i] << endl;
    }
}

