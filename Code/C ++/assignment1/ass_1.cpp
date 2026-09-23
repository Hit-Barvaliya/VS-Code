#include<iostream>
using namespace std;
class student {
  string name;
  int rollnumber;
  float marks;
  public:
  void set_name(string n){
    name = n;
  }
  void set_rollnumber(int n){
    rollnumber = n;
  }
  void set_marks(int n){
    marks = n;
  }
  void print(){
    cout<<"\nthe name of student is :- "<<name;
    cout<<"\nthe rollnumber is :- "<<rollnumber;
    cout<<"\nthe marks is :- "<<marks;
  }
};
int main (){
  int n;
  cout<<"Enter the number of student :- ";
  cin>>n;
  student s[n];
  string name;
  int num;
  float marks;
  for(int i=0;i<n;i++){
    cout<<"the name of student is :- ";
    cin>>name;
    s[i].set_name(name);
    cout<<"the rollnumber is :- ";
    cin>>num;
    s[i].set_rollnumber(num);
    cout<<"the marks is :- ";
    cin>>marks;
    s[i].set_marks(marks);
  }
  cout<<"\n<--------->";
  for(int i=0;i<n;i++){
    cout<<"\nDetails of students "<<i+1<<",";
    s[i].print();
  }
  
  return 0;
}