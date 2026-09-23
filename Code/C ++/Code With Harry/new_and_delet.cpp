//i don`t understand delet keyord proper
#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr = &a;
    cout<<"value of a is :- "<<*(ptr);

// with the help of new keyword
    float* p = new float(40.78);
    cout<<"\nthe value of p is :- "<<*(p)<<endl;

    int* arr = new int[4];
    arr[0] = 10;
    *(arr+1) = 20;  // this is consider as arr[1]
    arr[2] = 30;
   *(arr+3) = 40;   // this is consider as arr[3]
    cout<<"value of arr[0] :- "<<arr[0]<<endl;
    cout<<"value of arr[1] :- "<<arr[1]<<endl;
    cout<<"value of arr[2] :- "<<arr[2]<<endl;
    cout<<"value of arr[3] :- "<<arr[3]<<endl;

// for delet keyword

    cout<<"<---after delet keyword--->\n";
    delete[] arr;
    cout<<"value of arr[0] :- "<<arr[0]<<endl;
    cout<<"value of arr[1] :- "<<arr[1]<<endl;
    cout<<"value of arr[2] :- "<<arr[2]<<endl;
    cout<<"value of arr[3] :- "<<arr[3]<<endl;
    return 0;
}