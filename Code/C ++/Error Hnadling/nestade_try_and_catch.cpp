#include<iostream>
using namespace std;
int main(){

    try{
        try{
            throw "string error";
        }
            catch(const char *str){
                cout<<"some character type error occured in inner loop :- "<<str<<endl;
            }
            catch(runtime_error error){
                cout<<"some runtime error occured in inner loop :- "<<error.what()<<endl;
            }
            
            throw runtime_error("error");
        //we can also write throw statement in catch block

    }
    catch(const char * str){
        cout<<"some character type error occured in outter loop :- "<<str<<endl;
    }
    catch(...){
        cout<<"some unknown error occured from the code in outter loop. "<<endl;
    }

    return 0;
}