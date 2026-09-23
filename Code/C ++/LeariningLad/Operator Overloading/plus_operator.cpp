#include<iostream>
using namespace std;
class marks{
    int intmarks;
    int extmarks;
    public:
    marks (){}
    marks(int i,int e){
        intmarks = i;
        extmarks = e;
    }

    marks operator+ (marks ma){
        marks temp;
        temp.intmarks = intmarks + ma.intmarks;
        temp.extmarks = extmarks + ma.extmarks;
        // return (intmarks+ma.intmarks , extmarks+ma.extmarks);
        //for this line we make i=0 & e=0 in constructor
        return temp;
    }

    void display(){
        cout<<"marks of internal exam is :- "<<intmarks<<endl;
        cout<<"marks of external exam is :- "<<extmarks<<endl;
    }
};
int main (){
    marks m1(10,20),m2(30,40);
    marks m3 = m1 + m2;
    m3.display();
    return 0;
}