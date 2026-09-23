// --> print name n time
// --> print number from 1 to n
/*
#include<iostream>
using namespace std;

void printnum(int i,int n){
    if(i>n) return;
    cout<<"hit :- "<<i<<endl;
    
    printnum(i+1,n);
    }
    int main(){
        
    printnum(1,10);
    return 0;
    }
    */

// --> print number from n to 1

#include<iostream>
using namespace std;
void print_num(int n){
    cout<<n<<" ";   // if we write cout before function call this will print n -> 1
                    // but when we write cout after function call this will print 1 -> n
    if(n==1)    return;
    print_num(n-1);
}
int main(){

    print_num(10);
    return 0;
}