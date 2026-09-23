//(assignmen 2)
#include<iostream>
using namespace std;
template <typename T>
T cube(T num){
  return num*num*num;
}
int main (){
  cout<<"cube of 3 is :- "<<cube(3)<<endl;
  cout<<"cube of 4.5 is :- "<<cube(4.5)<<endl;
  cout<<"cube of -5 is :- "<<cube(-5)<<endl;
  return 0;
}