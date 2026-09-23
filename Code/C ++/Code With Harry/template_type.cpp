// template with multipal perameter
//               ``````````````````
#include<iostream>
using namespace std;
/*
CLASS TEMPLAATE WITH MULTIPALE PARAMETER(One,Two, or more)
template<class T1,class T2, .....(COMA SEPERATED)>
class nameOfClass{
    //body class
}
*/

template<class T1,class T2>

class myclass{
    public:
    T1 data1;
    T2 data2;
    
    myclass(T1 a,T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        //we can use both way to print data1 & data2
        cout<<data1<<endl<<this->data2<<endl;
    }
};

int main(){
    myclass<float,int> obj (12.34,50);
    obj.display();

    myclass<char,double> obj2('A',123.43);
    obj2.display();
    return 0;
}