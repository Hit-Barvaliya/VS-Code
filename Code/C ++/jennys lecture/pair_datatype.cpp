// this is for learing
#include<iostream>
#include<utility>

using namespace std;
int main(){
    pair<int,float> p1(23,58.36);

    cout<<p1.first<<" "<<p1.second<<endl;

//secomd way of initialization

    pair<int,string> p2;
    p2 = make_pair(23,"Hello World");
    cout<<p2.first<<" "<<p2.second<<endl;

//third way of initialization

    auto p3 = make_pair(58.89,"That was nice : ");
    cout<<p3.first<<" "<<p3.second<<endl;

//COPY OF PAIR
    pair<int,float> p4(23,58.98);
    pair<int,float> p5(p4);
    cout<<p4.first<<" "<<p4.second<<endl;

    pair<bool,string> p6;
    p6 = {true,"HELLO WOLRD"};
    // p6.first = true;
    // p6.second = "HELLO WORLD";
    cout<<p6.first<<" "<<p6.second<<endl;
//WE DO SWAP BETWEEN PAIR1 OF FIRST , PAIR2 OF FIRST AND PAIR1 OF SECOND , PAIR2 OF SECOND
//WE NEED SAME DATA TYPE IN SAME ORDER

// First, the first elements are compared.
// Only if the first elements are equal, the second elements are compared.

    pair<int,float> p7(2,5.9);
    pair<int,float> p8(23,58.98);
    p7.swap(p8);
    cout<<p7.first<<" "<<p7.second<<endl;
    cout<<p8.first<<" "<<p8.second<<endl;
// IF WE DO NOT initializ THE VALUE IT WILL RETURN 0 OR NULL_CHARACTER
    pair<int,float> p9;
    cout<<p9.first<<" "<<p9.second<<endl;
    pair<bool,string> p10;
    cout<<p10.first<<" "<<p10.second<<endl;

//WE CAN ALSO DO COMPARISION
// we need same data type
    cout<<(p7 > p8)<<endl;


    
    return 0;
}