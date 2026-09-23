//(assignment 8)
#include<iostream>
using namespace std;
class books{
    string title;
    string author;
    int publication_year;
    public:
    books (){}
    books(string t,string a,int y){
        title = t;
        author = a;
        publication_year = y;
    }
    void get_details(){
        cout<<"title of book :-"<<title<<endl;
        cout<<"autor of book :- "<<author<<endl;
        cout<<"publication year is :- "<<publication_year<<endl;
    }
};
int main(){
    books book[3];
    book[0] = books("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    book[1] = books("To Kill a Mockingbird", "Harper Lee", 1960);
    book[2] = books("1984", "George Orwell", 1949);
    for (int i = 0; i < 3; i++)
    {
        book[i].get_details();
    }
    return 0;
}