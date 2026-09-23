
#ifndef CLASSA_H
#define CLASSA_H
#include<iostream>
// #include "ClassB.h"  // Include the header of ClassB
using namespace std;

class classB;

class ClassA {
    protected:
    int secretData;

public:
    ClassA() : secretData(42) {}  // Initialize some private data

    // Declare ClassB as a friend class
    friend class ClassB;
};

#endif // CLASSA_H
