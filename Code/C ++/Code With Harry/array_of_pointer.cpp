#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void set_data(int n,float m){
        id = n ;
        price = m;
    }
    void print(){
        cout<<"the id of iteam is :- "<<id<<endl;
        cout<<"the price of iteam is :- "<<price<<endl;
    }
};
int main(){
  //int* ptr = new int[3];
    shop* ptr = new shop[3];
    shop* ptrTemp = ptr;
    int p;
    float q;
    for(int i=0;i<3;i++){
        cout<<"enter the ID and PRICE :-";
        cin>>p>>q;
        ptr->set_data(p,q);
        ptr++;
    }

    // for printing
    ptr = ptrTemp;
    for(int i=0;i<3;i++){
        //we also s\use ptrTemp directly
        ptr->print();
        ptr++;
    }
    return 0;
}