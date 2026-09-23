#include<iostream>
using namespace std;
int count = 0;
class number{
    public:
    number(){
        count++;
        cout<<"Hear cunstructor is called for "<<count<<endl;
    }
    ~number(){
        cout<<"Hear distructor is called for "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are start from main function.\n";
    cout<<"we are creat one object.\n";
    number n1;
    {
        cout<<"entering the new block.\n";
        cout<<"we are creat two object.\n";
        number n2,n3;
        cout<<"exit from the block.\n";
    }
    cout<<"exit from the main function.\n";
    return 0;
}