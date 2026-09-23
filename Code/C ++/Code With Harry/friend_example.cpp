#include<iostream>
using namespace std;
class y;
class x{
    int val1;
    friend void swapnum(x & , y & );
    public:
    void set_number(int y){
        val1=y;
    }
    void display(){
        cout<<val1;
    }
};
class y{
    int val2;
    friend void swapnum(x & , y & );
    public:
    void set_number(int y){
        val2=y;
    }
    void display(){
        cout<<val2;
    }
};
void swapnum(x &o1,y &o2){
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}
int main(){
    x obj1;
    y obj2;
    obj1.set_number(34);
    obj2.set_number(65);
    obj1.display();
    cout<<endl;
    obj2.display();
    cout<<endl<<"after swap : "<<endl;
    swapnum(obj1,obj2);
    obj1.display();
    cout<<endl;
    obj2.display();
    return 0;
}