#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1;
    l1.push_back(1);
    l1.emplace_back(2);

    l1.push_front(3);
    l1.emplace_front(4); 

    for(auto it = l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }

    
    return 0;
}