// HashTable.h
#pragma once

#include "LinkedList.h"
#include "Student.h"
#include <vector>

class HashTable {
private:
    std::vector<LinkedList*> table;
    size_t tableSize;

    size_t hashFunction(int studentID) const;

public:
    HashTable(size_t size);
    ~HashTable();

    void insert(int studentID, const std::string& studentName);
    Student* search(int studentID) const;
    void remove(int studentID);
    void print() const;
};
