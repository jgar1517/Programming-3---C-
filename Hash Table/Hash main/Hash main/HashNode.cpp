#include "HashNode.h"

// HashNode.cpp

HashNode::HashNode(Student* stu) : student(stu), next(nullptr) {}

HashNode::~HashNode() {
    // Destructor implementation, if needed
}
