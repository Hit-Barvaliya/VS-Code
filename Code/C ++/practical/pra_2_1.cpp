//DONE
#include<iostream>
#include<vector>
using namespace std;
class Rectangle{
    int length;
    int width;
    public:
    void set_length(int l){
        length = l;
    }
    void set_width(int w){
        width = w;
    }
    int area(){
        return(length*width);
    }
    int perimeter(){
        return 2*(length+width);
    }
    void display(int a){
        cout<<"\nthe area of "<<a<<" rectangle is "<<area();
        cout<<"<==>the perameter of "<<a<<" rectangle is "<<perimeter();

    }
};

int main(){
    int a,count=0;
    Rectangle rec[count];
    do{
        cout<<"enter 1 to add Rectangle.\nenter 2 to update the size of Rectangle\n";
        cout<<"enter 3 to see all the Rectangle\nenter 0 for exit : ";
        cin>>a;
        if(a==1){
            int length,width;
            cout<<"Enter the length of rectangle :";
            cin>>length;
            rec[count].set_length(length);
            cout<<"Enter the width of rectangle : ";
            cin>>width;
            rec[count].set_width(width);
            count++;
        }else if (a==2){
            int b,length,width;
            cout<<"enter the index of rectnalge(start from 0) : ";
            cin>>b;
            cout<<"Enter the length of rectangle : ";
                cin>>length;
                rec[b].set_length(length);
                cout<<"Enter the width of rectangle : ";
                cin>>width;
                rec[b].set_width(width);
        }else if (a==3){
            cout<<"<--- REASULT IS --->";
            for(int i=0;i<count;i++){
                rec[i].display(i);
            }
        } else if(a!=0)cout<<"\nenter valid number!!!\n";
    }while(a!=0);
    return 0;
}