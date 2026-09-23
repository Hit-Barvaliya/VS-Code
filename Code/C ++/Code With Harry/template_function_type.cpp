//member funcion template & overloading template function

#include<iostream>
using namespace std;

//we can also declare the function at this way :- 
template<class T1>
class myclass{
    public:
    T1 data;
    myclass(T1 a){
        data = a;
    }
    void display();
};
template <class T1>
void myclass<T1> :: display(){
    cout<<data<<endl;
}

//<--------function overloading---------->

void func(int a){
    cout<<"I am first func() :- "<<a<<endl;
}

template<class t1>
void func(t1 a){
    cout<<"I am templatised func() :- "<<a<<endl;
}

template<class t2>
void first_func(t2 a){
    cout<<"I am first_func() :- "<<a<<endl;
}

int main(){
    myclass<int> m1(45);
    m1.display();

    func(3);    //Exact matches takes the first priority
                    //so hear template function will not call
    first_func(34);  //hear template function is calling

    return 0;
}