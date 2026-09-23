    //(assignment 7)
    #include<iostream>
    using namespace std;
    template <typename T>
    void compair(T a,T b){
        if(a>b) cout<<a<<" is greater then "<<b<<"\n";
        else if(a<b)    cout<<b<<" is greater then "<<a<<"\n";
        else cout<<"both are equal\n";
    }

    int main(){
        cout<<"compair 2 & 4 :- ";
        compair(2,4);
        cout<<"compair 9.3 & 4.5 :- ";
        compair(9.3,4.5);
        cout<<"compair x & C :- ";
        compair('x','C');
        return 0;
    }