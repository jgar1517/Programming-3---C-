#pragma once

    // HashNode.h
#ifndef HASHNODE_H
#define HASHNODE_H

#include "Student.h"
#include <vector>
    class HashNode {
    public:
        Student* student;
        HashNode* next;

        HashNode(Student* stu);
        ~HashNode();
    };

#endif // HASHNODE_H


