#include<iostream>
using namespace std;
class Marks{
    int mark;
    public:
    Marks(){
        mark = 0;
    }
    Marks(int m){
        mark = m;
    }
    void operator+=(int bonusmark){
        mark += bonusmark;
    }
    friend void operator-=(Marks& , int);
    void display(){
        cout<<"your mark is :- "<<mark<<endl;
    }
};

void operator-= (Marks &currentobj,int readmakrs){
    currentobj.mark -= readmakrs;
}

int main(){
    Marks m1(45);
    m1.display();
    m1 += 20;
    m1.display();
    m1 -= 20;
    m1.display();
    return 0;
}