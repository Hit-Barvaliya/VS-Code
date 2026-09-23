#include<iostream>
using namespace std;

//Forward declaration
class complex;

class calculater{
    public:
    int sumComplex(complex , complex);
    int sumcomcomplex(complex,complex);
};
class complex{
    int a,b;
    // Individually declaring function as frend
    // friend int calculater :: sumComplex(complex,complex);
    // friend int calculater :: sumcomcomplex(complex,complex);

    // aliter: declearing the entire calculater class as friend
        friend class calculater;
    public:
    void set_number(int x, int y){
        a=x,b=y;
    }
    void print(){
        cout<<"Your number is "<<a<<" + i"<<b<<endl;
    }
};
int calculater :: sumComplex(complex o1,complex o2){
    return(o1.a+o2.a);
}
int calculater :: sumcomcomplex(complex o1,complex o2){
    return(o1.b+o2.b);
}
int main(){
    complex c1,c2;
    c1.set_number(1,2);
    c2.set_number(3,4);
    calculater calsi;
    int x = calsi.sumComplex(c1,c2);
    cout<<x;
    cout<<calsi.sumcomcomplex(c1,c2);
    return 0;
}