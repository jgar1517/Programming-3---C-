// LinkedList.cpp
#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::insertItem(Student* newStudent) {
    HashNode* newNode = new HashNode(newStudent);

    if (!head) {
        head = newNode;
    }
    else {
        HashNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

bool LinkedList::removeItem(int studentID) {
    HashNode* current = head;
    HashNode* prev = nullptr;

    while (current && current->student->studentID != studentID) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        return false;
    }

    if (prev == nullptr) {
        head = current->next;
    }
    else {
        prev->next = current->next;
    }

    delete current->student;
    delete current;
    return true;
}

Student* LinkedList::getStudent(int studentID) {
    HashNode* current = head;

    while (current && current->student->studentID != studentID) {
        current = current->next;
    }

    return current ? current->student : nullptr;
}

void LinkedList::printList() {
    HashNode* current = head;
    std::cout << "{ ";
    while (current) {
        std::cout << "Student ID: " << current->student->studentID << ", Name: " << current->student->name;
        if (current->next) std::cout << ", ";
        current = current->next;
    }
    std::cout << " }\n";
}

int LinkedList::getLength() {
    int length = 0;
    HashNode* current = head;
    while (current) {
        length++;
        current = current->next;
    }
    return length;
}

LinkedList::~LinkedList() {
    HashNode* current = head;
    while (current) {
        HashNode* next = current->next;
        delete current->student;
        delete current;
        current = next;
    }
}
