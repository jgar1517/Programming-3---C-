// Hash main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "HashTable.h"
#include "Student.h"
#include "LinkedList.h"

using namespace std;

int main() {
    HashTable table(13); // Create a hash table

    // Insert student records
    table.insert(123, "Alice");
    table.insert(456, "Bob");
    table.insert(789, "Lucy");
    table.insert(12, "Jose"); // Using 12 as the student ID
    table.insert(345, "Analyse");

    // Print all student records in the hash table
    cout << "Student Records:\n";
    table.print();

    // Search for a student record by ID
    int searchID = 12; // Corrected search ID
    Student* searchResult = table.search(searchID);
    if (searchResult) {
        cout << "Student with ID " << searchID << " found. Name: " << searchResult->name << "\n";
    }
    else {
        cout << "Student with ID " << searchID << " not found.\n";
    }

    // Remove a student record by ID
    int removeID = 2;
    table.remove(removeID);
    cout << "Removed student with ID " << removeID << "\n";

    // Print the student records in the hash table
    cout << "Updated Student Records:\n";
    table.print();

    return 0;
}