//DONE WITH ERROR
#include<iostream>
using namespace std;
class inventory{
    int id;
    string name;
    int quanty;
    float price;
    public:
    inventory(void);
    void set_id(int n){
        id = n;
    }
    void set_name(string n){
        name = n;
    }
    void set_quanty(int n){
        quanty = n;
    }
    void set_price(float n){
        price = n;
    }
    int find_num(){
        if(quanty==0)   return 0;
        else    return quanty;
    }
    float find_price(){
        return price*quanty ;
    }
};
inventory :: inventory (){
    id = 0;
    name = "---";
    quanty = 0;
    price = 0.0;
}

int main(){
    int a,count=0;
    inventory invo[count];
    do{
        cout<<"\nenter 1 to add product\nenter 2 to update the quantity";
        cout<<"\nenter 3 to calculate the total value of all the produce";
        cout<<"\nenter 0 to exit : ";

        cin>>a;
        if(a==1){
            string n;
            int i,q;
            float p;
            cout<<"enter the name of product : ";
            cin>>n;
            invo[count].set_name(n);
            cout<<"enter the ID of product : ";
            cin>>i;
            invo[count].set_id(i);
            cout<<"enter the quantity of product : ";
            cin>>q;
            invo[count].set_quanty(q);
            cout<<"enter the price of each product : ";
            cin>>p;
            invo[count].set_price(p);
            count++;
        }else if (a==2){
            int b,new_qua;
            cout<<"Enter the index of that product : ";
            cin>>b;
            if(b<+count){
                cout<<"enter the current quantity : ";
            cin>>new_qua;
            invo[b].set_quanty(new_qua);
            }else   cout<<"enter the valid index";
        }
        else if (a==3){
            float value=0;
            int number=0;
            for(int j=0;j<count;j++){
                number += invo[j].find_num();
                value += invo[j].find_price();
            }
            cout<<"<---ANSWER--->\n";
            cout<<"the total product is : "<<number;
            cout<<"\nthe total value is : "<<value;
        }
    }while(a!=0);
    
    return 0;
}