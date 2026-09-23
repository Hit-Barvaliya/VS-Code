/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and 
    performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and 
    performs any four scientific operations of your choice and displays the results 
    using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and 
    scientific calculator.
    Q4. How is code reusability implemented?
*/

#include<iostream>
#include<math.h>
using namespace std;

class number{
    float num1,num2;
    public:
    float get_num1(){
        return num1;
    }
    float get_num2(){
        return num2;
    }
    void set_num1(float f){
        num1 = f;
    }
    void set_num2(float f){
        num2 = f;
    }
};
class operation{
    char sign;
    public:
    char get_operation(){
        return sign;
    }
    void set_operation(char c){
        sign = c;
    }
};

//this is for SimpleCalculator
class simplecalculator : public number , public operation{
    public:
    
    void simpleclaculation(){
        float num1 = get_num1();
        float num2 = get_num2();
        char symbol = get_operation();
        switch (symbol)
        {
        case '+':
            cout<<"sum of two number is :- "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"division of two number is :- "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"multiplex of two number is :- "<<num1*num2<<endl;
            break;
        case '/':
            cout<<"division of two number is :- "<<num1/num2<<endl;
            break;
        default:
            cout<<"enter valid operation.\n";
            break;
        }
    }
};

//this is for ScientificCalculator
class scientific_calculator : public simplecalculator{
    float degree;
    public:
    void set_degree(float n){
        degree = n;
    }
    float get_degree(){
        return degree;
    }
    void scientific_calculaton(){
        char symbol = get_operation();
        if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'){
            simpleclaculation();
        }
        else{
            switch (symbol){
        case '1':
            cout<<"the value of sin is  "<<sin(degree*M_PI/180)<<" with "<<degree<<" angle"<<endl;
            break;
        case '2':
        cout<<"the value of cos is  "<<cos(degree*M_PI/180)<<" with "<<degree<<" angle"<<endl;
            break;
        case '3':
        cout<<"the value of tan is  "<<tan(degree*M_PI/180)<<" with "<<degree<<" angle"<<endl;
            break;
        case '4':
        cout<<"the value of cot is  "<<1/(tan(degree*M_PI/180))<<" with "<<degree<<" angle"<<endl;
            break;
        case '5':
        cout<<"the value of sec is  "<<1/cos(degree*M_PI/180)<<" with "<<degree<<" angle"<<endl;            break;
        case '6':
        cout<<"the value of cosec is  "<<1/sin(degree*M_PI/180)<<" with "<<degree<<" angle"<<endl;            break;
        default:
            cout<<"enter valid operation.\n";
            break;
        }
        }
        
    }
};

int main(){
    simplecalculator s1;
    scientific_calculator s2;
    
    char symbol;
    
    cout<<"enter operation('+','-','*','/') \n enter 1 2 for sin & cos\n";
    cout<<"enter 3 4 for tan & cot\nenter 5 6 for sec & cosec :- ";
    cin>>symbol;
    if(symbol=='1'||symbol=='2'||symbol=='3'||symbol=='4'||symbol=='5'||symbol=='6'){
        float degree;
        cout<<"enter the degree of an angle :- ";
        cin>>degree;
        
    }else{
        float num1,num2;
        cout<<"enter first number :- ";
        cin>>num1;
        cout<<"enter second number :- ";
        cin>>num2;
        s2.set_num1(num1);
        s2.set_num2(num2);
    }
    
    s2.set_operation(symbol);
    s2.scientific_calculaton();
    return 0;
}