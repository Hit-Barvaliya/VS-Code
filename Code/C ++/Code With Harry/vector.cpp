#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Display this vector :- ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";     //at ehi way wa can access element
    }
    cout<<endl;
}

int main(){
    // vector<int> vec1;
    // int a,size=5;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"enter the element :- ";
    //     cin>>a;
    //     vec1.push_back(a);
    // }
    // display(vec1);
    // vec1.pop_back();    //This function will remove the last element of vector
    // cout<<"after use pop_back() :- ";
    // display(vec1);

    // vector<int> :: iterator iter = vec1.begin();    //at this way we make iterator
    // vec1.insert(iter, 566);     //with the help of this function we can insert the new value at any position
    // cout<<"after use insert () :- ";
    // display(vec1);
    // vec1.insert(iter+3, 581);     
    // cout<<"after use insert () at 3rd position :- ";
    // display(vec1);
    // vec1.insert(iter+2,3, 11);     
    // cout<<"we can enter the number of copies :- ";
    // display(vec1);



    vector<int> vec1;   //zero length vector
    vector<char> vec2(4);   //4-element vector
    vec2.push_back('A');
    display(vec2);  
    vec2.push_back('B');
    display(vec2);

    vector<char> vec3(vec2);    //4-element character vector from vec2
    display(vec2);

    vector<int> vec4(6,13);     //6-element vector of 13`s
    display(vec4);

    return 0;
}