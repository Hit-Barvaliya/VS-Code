#include<iostream>
using namespace std;
class marks{
    int intmarks;
    int extmarks;
    public:
    marks(){}
    marks(int i,int e){
        intmarks = i;
        extmarks = e;
    }
    marks operator-(marks);

    void display();
};

marks marks :: operator-(marks ma){
    marks temp;
    temp.extmarks = extmarks - ma.extmarks;
    temp.intmarks = intmarks - ma.intmarks;
}

void marks :: display(){
    cout<<"the marks of internal exam is :- "<<intmarks
    <<"\nthe marks of external exam is :- "<<extmarks<<endl;
}
int main(){
    marks m1(10,20),m2(30,40);

    marks m3 = m2 - m1;
    m3.display();
    return 0;
}