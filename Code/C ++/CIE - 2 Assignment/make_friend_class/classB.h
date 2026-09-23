

#ifndef CLASSB_H
#define CLASSB_H
// #include<iostream>
#include"classA.h"
using namespace std;
// Forward declaration of ClassA to avoid circular inclusion
// class ClassA;

class ClassB {
public:
    // void showSecret(const ClassA& a);
    void showSecret(const ClassA& a) {
        // Access private member of ClassA because it's a friend
        cout << "Secret Data from ClassA: " << a.secretData << endl;
    }
};

#endif // CLASSB_H
