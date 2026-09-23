#include<iostream>
#include<vector>
using namespace std;

class room;
vector<room> r12;


class room{
    protected:
    int room_id;
    string type;
    int price;
    bool isbooked=0;
    public:
    room(){};
    room(int i,string t,int p){
        room_id = i;
        type = t;
        price = p;
    }
    bool checkavailability(){
        return !(isbooked);
    }
    void bookroom(){
        int i,p;
        string t;
        cout<<"enter the id of room :- ";
        cin>>i;
        cout<<"enter the type of room :- ";
        cin>>t;
        cout<<"enter the price of room :- ";
        cin>>p;
        r12.push_back(room(i,t,p));
    }
};
class hotel : public room{
    public:
    void reserve_room(){
        bookroom();
    }
    void checkavailableroom(){
        int a = 0;
        for(int i=0;i<r12.size();i++){
            if (r12[i].checkavailability()) a=1;
        }
        if(a==1)    cout<<"room is available\n"; 
        else cout<<"room is not available\n";
    }
    void room_over(){
        cout<<"room time is over\n";
        isbooked = 0;
    }
};
int main(){
    hotel h1;
    
    h1.bookroom();
    h1.room_over();
    h1.reserve_room();
    h1.checkavailableroom();

    return 0;
}