#include<iostream>
#include<list>

using namespace std;

void display(list<int> &l1){
    list<int> :: iterator itr = l1.begin();
    for(int i=0;i<l1.size();i++){
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
//optional way :- 
    // for(itr = l1.begin();itr!=l1.end();itr++){
    //     cout<<*itr<<" ";        
    // }
}

int main(){

    list<int> lis1;     //list of 0 length 

    lis1.push_back(1);
    lis1.push_back(5);
    lis1.push_back(3);
    lis1.push_back(19);
    lis1.push_back(163);
    list<int> :: iterator itr;
    itr = lis1.begin();

    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    itr++;
    cout<<*itr<<" ";
    cout<<endl;
//we also do this with function instead of this
    
    // display(lis1);
    // lis1.pop_back();
    // cout<<"after the use pop_back() :- ";
    // display(lis1);
    // lis1.pop_front();   //this function wiil remove first element
    // cout<<"after the use of pop_front() :- "; //pop_front() is not available in vector
    // display(lis1);
    // lis1.remove(3);     // this function is remove all the 3 from the list
    // cout<<"after the use of remove() :- ";
    // display(lis1);

    list<int> lst2(5);      //empty vector of 7 lngth
    list<int> :: iterator itr2 = lst2.begin();

    *itr2 = 5;
    itr2++;
    *itr2 = 3;
    itr2++;
    *itr2 = 9;
    itr2++;
    *itr2 = 15;
    itr2++;
    *itr2 = 55;
    itr2++;

    display(lst2);

    lis1.merge(lst2);   //this is for merge two list
    cout<<"after the merge two list :- ";
    display(lis1);

    lis1.sort();    //this is for sorting the list
    cout<<"after the sorting the list :- ";
    display(lis1);

    lis1.reverse();
    cout<<"after the reverse the list :- ";
    display(lis1);
    return 0;
}