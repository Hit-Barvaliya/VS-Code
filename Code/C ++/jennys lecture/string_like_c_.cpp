#include<iostream>
//this header file is for c-string
#include<cstring>
using namespace std;

int main(){
    char f_name[20];
    char l_name[20]; 
     char full_name[40];
    // string full_name;
    //this will give a garbage value
    cout<<f_name;

    cout<<"\nEnter your first name :- ";
    cin>>f_name;
    cout<<"Enter your last anme :- ";
    cin>>l_name;

    cout<<"Hii "<<f_name<<" your first name has "<<strlen(f_name)<<" characters. \nyour last name has ";
    cout<<strlen(l_name)<<" characters.\n";

    strcpy(full_name,f_name);
    //if you use strcpy function it will eraze all the previous elements thenafter store new character
    strcat(full_name," ");
    strcat(full_name,l_name);

    cout<<full_name<<endl;
// we use all the function of c language with the help of cstring header file

    cout<<"Enter your full name :- ";
    //this is for character arry
    cin.getline(full_name,50);
    //this for string
    // getline(cin,full_name);
    cout<<endl<<full_name;
    return 0;
}