#include<iostream>
#include<string>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string t,float r){
        title = t;
        rating = r;
    }
    virtual void display(){};
};

class cwhVideo : public cwh {
    float vlen;
    public:
    cwhVideo(string t,float r,float l) : cwh(t,r){
        vlen = l;
    }
    void display(){
        cout<<"title of the video is :- "<<title<<endl;
        cout<<"rating of this video is :- "<<rating<<endl;
        cout<<"length of this video is :- "<<vlen<<endl;
    }
};

class cwhText : public cwh{
    int words;
    public:
    cwhText(string t,float r,int wc) : cwh(t,r){
        words = wc;
    }
    void display(){
        cout<<"title of the textur is :- "<<title<<endl;
        cout<<"rating of this textur is :- "<<rating<<endl;
        cout<<"words of this textur is :- "<<words<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;
    // cwhText t1;
    // cwhVideo v1;

    title = "Djengo tutorial video";
    rating = 4.89;
    vlen = 4.67;
    cwhVideo v1(title,rating,vlen);
    // v1.display();

    title = "Djengo tutorial text";
    rating = 4.18;
    words = 433;
    cwhText t1(title,rating,words);
    // t1.display();
    
    cwh * p[2];
    p[0] = &v1;
    p[1] = &t1;

    p[0] ->display();
    p[1]->display();
    return 0;
}
/*
Rules for virtual funtion.
1. They can not be staic.
2. They are accessed by object pointers.
3. Virtual function can be a friend of anouther class.
4. A virtual function in base class might not be used.
5.If a virtual function is defined in a base class, there is no
necessite of redefining it in the derived class[that means :- 
when in the derived class has no function, base class virtual
function will automatacally run]

*/