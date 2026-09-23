#include<iostream>
using namespace std;

template <class T>

class vector {
    int size;
    T* arr;
    public:
    vector (int n) {
        size = n;
        arr = new T[size];
    }
    void set_arr(T a,T b,T c){
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }
    T dotproduct(vector v1){
        T sum = 0;
        for(int i=0;i<3;i++){
            sum += arr[i] * v1.arr[i];
        }
        return sum;
    }
};

int main(){
    vector <float> v1(3);
    v1.set_arr(2.6,4.4,5.5);

    vector <float> v2(3);
    v2.set_arr(3.5,4.9,2.2);
    cout<<"sum is :- "<<v1.dotproduct(v2);
    return 0;
}



/*
// this code withh an error

#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    int size;
    T *arr;
    vector (int m){
        size = m;
        arr = new T[size];
    }

    T dotproduct(vector &v){
        T d =0;
        for(int i=0;i<size;i++){
            d += this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){

    vector <float>(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 5.4;
    v1.arr[2] = 2.2;

    vector <float>(3);
    v2.arr[0] = 1.3;
    v2.arr[1] = 2.5;
    v2.arr[2] = 2.3;

    T a = v1.dotproduct(v2);
    cout<<a;
    return 0;
}

*/