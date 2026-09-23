#include<iostream>
#include<cmath>
using namespace std;
class point;
class ans{
    public:
    ans (point,point);
};
class point{
    int x,y;
    friend class ans;
    public:
    point (int ,int);
    //this also called a constructor 
    // point (int a,int b){
    //     x=a,y=b;
    // }
    void print(){
        cout<<"your point is ("<<x<<","<<y<<")\n";
    }    
};

point :: point(int a,int b){
    x=a,y=b;
}
ans :: ans(point po1,point po2){
    float y = sqrt((po2.x-po1.x)*(po2.x-po1.x)+(po2.y-po1.y)*(po2.y-po1.y));
    cout<<"your answer is : "<<y;
}

int main (){
    point p1(0,1);
    p1.print();
    point p2(0,6);
    p2.print();
    ans answer1(p1,p2);  
    
    return 0;
}