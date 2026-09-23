#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
//work of emplace_back is as same as push_back but it is faster then push_back
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<pair<int,int>> vac;
    vac.push_back({1,2});
    vac.emplace_back(3,4);
//this is the syntax different between push_back and emplace_back

    vector<int> v1(5,100);
// size of this vector is 5 and all the element is 100

    vector<int> v2(5);
//this is empty vector which vector`s size is 5

    vector<int> v3(v1);
// at this way we can copy the eloement of v1 in the v3

    vector<int> :: iterator it = v.begin();

    cout<<"it will print the value  :- "<<*it<<endl;
    it++;
    cout<<"after the increment of iterator :- "<<*it<<endl;

    vector<int> :: iterator it1 = v.end();
    cout<<"in the end functio with iterator :- "<<*it1<<endl;
    it1--;
    cout<<"in the end functio with iterator :- "<<*it1<<endl;
//it was proved that in the end function iterator will point after the last element of vector
//-> it will confirmed (print the last element after the decreasing the iterator)
    
    vector<int> :: reverse_iterator it2 = v.rend();
// this will work like na reeversr vector like v={6,5,4,3,2,1};
    cout<<"in the rend function with iterator :- "<<*it2<<endl;
    it2--;
    cout<<"after decreasing iterator :- "<<*it2<<endl;

    vector<int> :: reverse_iterator it3 = v.rbegin();
    cout<<"in the rbegin function with iterator :- "<<*it3<<endl;
    it3++;
    cout<<"after increasing iterator :- "<<*it3<<endl;

    cout<<"with the help of loop :- ";
    for(vector<int>::iterator it4 = v.begin();it4!=v.end();it4++){
        cout<<*it4<<" ";
    }
    cout<<endl;
//shcourt for loop
    for(auto it4 = v.begin();it4!= v.end();it4++){
        cout<<*it4<<" ";
    }
    cout<<endl;
    for(auto it4 : v){
        cout<<it4<<" ";
    }
    
    //=======================================================
// all function of Deque is as same as vector's function
//============================================================

    return 0;
}