//(assignment 5)
#include<iostream>
using namespace std;
class circle{
    float radius;
    public:
    circle (float n){
        radius = n;
    }
    float area (){
        return 3.14*radius*radius;
    }
};

class square{
    float length;
    public:
    square (float l){
        length = l;
    }
    float area(){
        return length*length;
    }
};
void compair(float a,float b){
    if(a>b) cout<<"Circle has large area.\n";
    else if(a<b)    cout<<"square has large area.\n";
    else cout<<"both are equal.\n";
}
int main(){
    circle c1(10);
    square s1(10);
    cout<<"area of circle is :- "<<c1.area()<<endl;
    cout<<"area os square is :- "<<s1.area()<<endl;
    compair(c1.area(),s1.area());
    return 0;
}