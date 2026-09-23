//theory of functor was at the end of code

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){

    //Function object (Functor) : Function wrapped in a class so that it like an object

    int arr[] = {1,4,3,7,86,9};
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+5);    //this function do sorting to arr[0] to arr[4]
    cout<<"\nafter sorting the array :- ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    sort(arr,arr+6,greater<int>());   //this functio sorting in greater to smaller

    cout<<"\nafter sorting greater to smaller is :- ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// functor (from chatgpt) :- 
/*
Sure! A functor (or function object) in C++ is any object that can be used as if it were a function — specifically, an object of a class that defines the operator().

✅ Basic Example of a Functor
 
#include <iostream>
using namespace std;

// Define a functor class
class Adder {
    int value;
public:
    Adder(int v) : value(v) {}

    // Overload function call operator
    int operator()(int x) const {
        return value + x;
    }
};

int main() {
    Adder add5(5); // Create functor with value 5

    cout << "5 + 10 = " << add5(10) << endl;  // Functor usage like a function

    return 0;
}

🔍 What’s Happening Here?
Adder is a class with an overloaded operator().

When you create an object like Adder add5(5);, it stores the value 5.

Then add5(10) acts like a function call, returning 5 + 10.

🧠 Why Use Functors?
More flexible than functions — can hold state (like the stored value in this case).

Can be used in STL algorithms like sort(), for_each(), etc.

Replaces function pointers in many cases with more control and safety.
*/