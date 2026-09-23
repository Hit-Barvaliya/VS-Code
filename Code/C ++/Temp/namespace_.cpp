#include<iostream>
using namespace std;
namespace printintro {
    void printsomething(){
        cout<<"hello world\nwell-come to c++"<<endl;
    }
}
namespace Transaction{
    void printTransaction(){
        cout<<"transaction has been completed"<<endl;
    }
}
int main(){

    printintro::printsomething();
    Transaction::printTransaction();
    return 0;
}