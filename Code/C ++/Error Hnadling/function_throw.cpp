#include<iostream>
using namespace std;

void throw_error() throw(int,char,runtime_error){
//we need to specify the type throw statement in braket
//if we are not specify it will gives an error
    
    // throw 20;
    // throw 'c';
    throw runtime_error("there was run time error");
}
int main(){
    
    try{
        throw_error();
    }
    catch(int num){
        cout<<"some interger type error was occured :- "<<num<<endl;
    }
    catch(char str){
        cout<<"some charcater type error was occured :- "<<str<<endl;
    }
    catch(runtime_error error){
        cout<<"some runtime error was occured :- "<<error.what()<<endl;
    }
    return 0;
}