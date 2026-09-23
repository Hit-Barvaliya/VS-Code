// NOT DONE
// error in the dynemic memory allocation in the array of object
// when we store the new quantity of iteam set as 0 after that we can not use that memory again
#include<iostream>
#include<vector>
using namespace std;
class inventory{
    int id;
    string name;
    int price;
    int quantity;
    public:
    void set_id(int n){
        id = n;
    }
    void set_name(string n){
        name = n;
    }
    void set_price(int n){
        price = n;
    }
    void set_quantity(int n){
        quantity = n;
    }
    bool check_num(int n){
        if(id == n) return 1;
        else return 0;
    }
    void print(int i){
        cout<<"\nenter the name of iteam["<<i+1<<"] : "<<name;
        cout<<"\nenter the ID of iteam["<<i+1<<"] : "<<id;
        cout<<"\nenter the price of iteam["<<i+1<<"] : "<<price;
        cout<<"\nenter the quantity of iteam["<<i+1<<"] : "<<quantity;
    }
    void print_name(){
        cout<<name;
    }
};
int main (){

    int n,a,id,pri,qua;
    string name;
    cout<<"enter the number of item : ";
    cin>>n;
    inventory iteam[10];
    for(int i=0;i<n;i++){
        cout<<"enter the name of iteam["<<i+1<<"] : ";
        cin>>name;
        iteam[i].set_name(name);
        cout<<"enter the ID of iteam["<<i+1<<"] : ";
        cin>>id;
        iteam[i].set_id(id);
        cout<<"enter the price of iteam["<<i+1<<"] : ";
        cin>>pri;
        iteam[i].set_price(pri);
        cout<<"enter the quantity of iteam["<<i+1<<"] : ";
        cin>>qua;
        iteam[i].set_quantity(qua);
    }
    
    do{
        cout<<"\nenter 0 for exit \nenter 1 to add new iteam";
        cout<<"\nenter 2 to increase or decrease iteam\n";
        cout<<"enter 3 to see all the datils :- ";
        cin>>a;
        if(a==1){
            n++;
            cout<<"enter the name of iteam["<<n<<"] : ";
            cin>>name;
            iteam[n-1].set_name(name);
            cout<<"enter the ID of iteam["<<n<<"] : ";
            cin>>id;
            iteam[n-1].set_id(id);
            cout<<"enter the price of iteam["<<n<<"] : ";
            cin>>pri;
            iteam[n-1].set_price(pri);
            cout<<"enter the quantity of iteam["<<n<<"] : ";
            cin>>qua;
            iteam[n-1].set_quantity(qua);
        } else if (a==2){
            int c=-1;
            cout<<"enter the id number of that iteam :- ";
            cin>>id;
            for(int i=0;i<=n;i++){
                if(iteam[i].check_num(id))    c=i;
            }
            if(c>=0){
                cout<<"enter the new quantity of  ";
                iteam[c].print_name();
                cout<<":- ";
                cin>>qua;
                if(qua<0)   cout<<"this is not valid ";
                else    iteam[c].set_quantity(qua);
            }else cout<<"enter the valid id number.";
        }else if (a==3){
            cout<<"<---full details of all iteams--->";
            for(int i=0;i<n;i++){
                iteam[i].print(i);
            }
            cout<<"<---this are the details of all iteams--->\n";
        }
    }while(a!=0);
    return 0;
}