#include<iostream>
using namespace std;

int count = 0;
void ToH(int n,char beg,char auxi,char end){
    if(n==1){
        count++;
        cout<<count<<". "<<beg<<"->"<<end<<endl;
        return;
    } else {
        ToH(n-1,beg,end,auxi);
        count++;
        cout<<count<<". "<<beg<<"->"<<end<<endl;
        ToH(n-1,auxi,beg,end);
    }
}


void printAllStep(int n){
    char a ='a';
    char b ='b';
    char c ='c';
    ToH(n,a,b,c);
}


int main(){

    cout<<"Hello";
    
    cout<<"Enter hte number of ring in tower :- ";
    int n;
    cin>>n;
    printAllStep(n);


    /*
    Quick Facts

Total Moves: 2³ - 1 = 7 moves

Depth of recursion tree: 3 (same as number of disks)

Time Complexity: O(2ⁿ)

Space Complexity: O(n)
    */


/*
                                             TOH(3, A, B, C)
                              /                                           \
                     TOH(2, A, C, B)                                    TOH(2, B, A, C)
                 /          |        \                             /          |         \
      TOH(1, A, B, C)   Move(2, A→B)  TOH(1, C, A, B)  TOH(1, B, C, A)  Move(2, B→C)  TOH(1, A, B, C)
           |                               |                   |                             |
    Move(1, A→C)                     Move(1, C→B)         Move(1, B→A)                 Move(1, A→C)

*/

    
    return 0;
}