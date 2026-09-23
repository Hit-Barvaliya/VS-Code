#include<iostream>
using namespace std;
int main(){

    try{
        throw "throw string";
        throw 20;
        throw runtime_error("throw runtime error");

// after first throw statment code execution will rich to catch() so other throw statement will not execute

    }
    catch(const char *str){
        cout<<"some error is occured :- "<<str<<endl;
    }
    catch(int num){
        cout<<"some error occured in interger :- "<<num<<endl;
    }
    catch(runtime_error error){
        cout<<"some runtime error was occured :- "<<error.what()<<endl;;
    }

//if no catch satament will no match after that this catch block will execute

    catch(...){
        cout<<"some unknown error was occured :- ";
    }

    return 0;
}