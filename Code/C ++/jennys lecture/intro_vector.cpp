#include<iostream>
//vector is a part of (STL):-standard template library
#include<vector>    //using for vector
using namespace std;
int main (){
    vector<int> number;
    // vector<int> number(10);     => second way of decleration

    // number.push_back(2);
    // number.push_back(3);
    // cout<<number[1]<<number[0];

    number.push_back(1);
    number.push_back(2);
    number.push_back(3);
    number.push_back(4);
    number.push_back(5);

    cout<<"the size of vector is "<<number.size()<<endl;
    cout<<"the capacity of of vector is "<<number.capacity()<<endl;
    // tyr it also when size is 1,2,3,4,5 
    // when the capacity is fulthen it will become double

    //==========================================

    //  vector<int> numbers(10,5);
     //                     ^
// we can do also this way->|

    //vector<int> numbers(10);
    //fill(numbers.begin(),numbers.end(),5);

//we can also do this way

    vector<int> numbers={1,2,3,4,5,6,7,8,9,0};

//we can acess the value of first vector by second vector


    vector<int> numbers2(numbers.begin(),numbers.end());
//we can do also this way
    // vector<int> numbers2;
    // numbers2 = numbers;
    
    for(int i=0;i<numbers2.size();i++){
        cout<<" "<<i+1<<")->"<<numbers2[i];
    }
    
//------------->FOR ALL FUNCTION OF VECTOR THIS WEBSITE :-> https://cplusplus.com/reference/vector/vector/<------------

// USE front() back() FUNCTIO TO EXCESS THE FIRST & LAST ELEMENT 
    return 0;
}