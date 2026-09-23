//this is complate

#include<iostream>
using namespace std;

template<class T>
class calculator{
    T number1,number2,answer;
    char symbol;
    public:
    void set_data(T a,T b,char ch){
        number1 = a;
        number2 = b;
        symbol = ch;
        if (ch=='+'){
            answer = number1 + number2; cout<<answer<<endl;
        }else if (ch=='-'){
            answer = number1 - number2; cout<<answer<<endl;
        }else if (ch=='*'){
            answer = number1 * number2; cout<<answer<<endl;
        }else if (ch=='/'){
            answer = number1 / number2; cout<<answer<<endl;
        }else cout<<"enter proper operation\n";
    }
};

int main(){
    
    float num1;
    float num2;
    float answer;
    char ch;
    int a;
    calculator<float> c1;
    while(1){
        cout<<"enter 1 for exit\n"
        <<"enter 2 for continue\n";
        cin>>a;

        if(a==1)        return 0;
        else if (a==2){
            cout<<"enter two number :- ";
            cin>>num1>>num2;
            cout<<"enter operation from('+','-','*','/')";
            cin>>ch;
            // c1 = calculator(num1,num2,ch);
            c1.set_data(num1,num2,ch);
            
        }else cout<<"enter valid choice\n";
    }

    return 0;
}