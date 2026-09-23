//DONE WITH ERROR
/*error was the size of declaration of object.
hwn we max size of array at that time error will solve*/
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_number = 0;
    int marks[3] = {0,0,0};
    void display(){
        float ave = (marks[0]+marks[1]+marks[2])/3.0;
        cout<<"\n<---DETAILS OF STUDENT---> : ";
        cout<<"\nthe of name student is :- "<<name;
        cout<<"\nthe roll number of this student is :- "<<roll_number;
        cout<<"\nthe marks of three subject is :- "<<marks[0]<<" "<<marks[1]<<" "<<marks[2];
        cout<<"\n average marks is :- "<<ave;
    }
};
int main(){
    int a,n;
    cout<<"enter the number of students :- ";
    cin>>n;
    student stu[10];
    for(int i=0;i<n;i++){
        cout<<"enter the name of student : ";
            cin>>stu[i].name;
            cout<<"enter the roll number of student : ";
            cin>>stu[i].roll_number;
            cout<<"enter the marks of student of three subject : ";
            cin>>stu[i].marks[0];
            cin>>stu[i].marks[1];
            cin>>stu[i].marks[2];
    }
    do{
        cout<<"\nenter 1 to add new students\nenter 2 to see the full recoard";
        cout<<"\nenter 0 for exit : ";
        cin>>a;
        if(a==1){
            n++;
            cout<<"enter the name of student : ";
            cin>>stu[n-1].name;
            cout<<"enter the roll number of student : ";
            cin>>stu[n-1].roll_number;
            cout<<"enter the marks of student of three subject : ";
            cin>>stu[n-1].marks[0];
            cin>>stu[n-1].marks[1];
            cin>>stu[n-1].marks[2];
        }else if (a==2){
            for(int i=0;i<n;i++){
                stu[i].display();
            }
        }
    }while(a!=0);
    return 0;
}