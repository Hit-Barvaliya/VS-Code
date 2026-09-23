// there are two type of overloading 1. [] and 2. ()
//all this operator is not used for static and friend functio
//                                 --------   --------


// 1> this is for [] breket overloading

#include<iostream>
using namespace std;

class Marks{
    int subject[3];
    public:
    Marks(int a,int b,int c){
        subject[0] = a;
        subject[1] = b;
        subject[2] = c;
    }

    int operator [] (int position){
        return subject[position];
    }
};
int main(){
    Marks m1(11,22,33);

    cout<<"marks of subject 1 :- "<<m1[0]<<endl;
    cout<<"marks of subject 2 :- "<<m1[1]<<endl;
    cout<<"marks of subject 3 :- "<<m1[2]<<endl;
    return 0;
}


// 2> this is for () breket overloading

// #include<iostream>
// using namespace std;
// class Marks {
//     int marks;
//     string name;
//     public:
//     Marks(int m){
//         cout<<"constructoe is called :- \n";
//         marks = m;
//     }

//     Marks operator () (string n){
//         name = n;
//     }

//     Marks operator () (int m1){
//         cout<<"operator is called:- \n";
//         marks = m1;
//     }

//     void display(){
//         cout<<"your marks is :- "<<marks<<endl;
//         cout<<"name is :- "<<name<<endl;
//     }
// };
// int main (){

//     Marks m1(98);
//     m1.display();

//     m1(34);
//     m1("hit");
//     m1.display();
//     return 0;
// }