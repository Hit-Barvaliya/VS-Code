// #include<bits/stdc++.h>
#include<iostream>
#include<set>       //this is for set
using namespace std;

void explain_set(){
    
    set<int> s1;
    s1.insert(2);   //{2}
    s1.insert(3);   //{2,3}
    s1.emplace(5);  //{2,3,5}
    s1.emplace(5);  //{2,3,5}
    s1.insert(4);   //{2,3,4,5}
    s1.insert(6);   //{2,3,4,5,6}
    s1.insert(7);   //{2,3,4,5,6,7}
//this will store all the element in order

    /*
    begin(), end(), rbegin(), rend(), size(), emp(), empty() and swap() are as same as those
    */

    auto it = s1.find(3);
    cout<<*it<<endl;

    auto it1 = s1.find(10);
    cout<<"if element is not found :- "<<*it1<<endl;
//it will point after last element
//in this case point after 5

    s1.erase(6);    //hear 3 is not an index this element 

    int cint = s1.count(3); //if 3 is present in the set it will return 1 else return 0
    cout<<cint<<endl;

    auto it2 = s1.find(3);
    auto it3 = s1.find(5);
    s1.erase(it2,it3);  //erease from [first,last)
    //before erease{2,3,4,5,7}
    // after erease{2,5,7}
    
    auto it4 = s1.upper_bound(2);
    auto it5 = s1.lower_bound(3);
    //no idea about upper bound and lower bound
}

void explain_multiset(){
    //every thing is same as set
    // but multimep can store duplicate element 

    multiset<int> ms;

    ms.insert(1);   //{1}
    ms.insert(1);   //{1,1}
    ms.insert(1);   //{1,1,1}  
     

    ms.erase(1);    // it will erease all 1

    int cnt = ms.count(1);  // it will count the number of 1
    cout<<"in the multi map there are "<<cnt<<" number of 1"<<endl;

    // it will erase olny 1
    // ms.erase(ms.find(1));

// if i want to run this line, i do comment out previous cout line
    int cnt2 = ms.count(1);  // it will count the number of 1
    cout<<"in the multi map there are "<<cnt2<<" number of 1"<<endl;

    // ms.erase(ms.erase(1),ms.erase(1)+2);
    //here some logical error
    int cnt3 = ms.count(1);  // it will count the number of 1
    cout<<"in the multi map there are "<<cnt3<<" number of 1"<<endl;

    //REST OF ALL THE FUNCTIONS ARE SAME AS SET
}

void explainUset(){
    //this is unorder set
    //lower_bound and uper_bound function are not work,
    //rest of all function are same as above,
    //it does not store in any pirticular order ,
    //it has better complexity beter then set in most cases,
    //except some when collison heppens
}

int main(){

    // explain_set();

    explain_multiset();
    
    return 0;
}