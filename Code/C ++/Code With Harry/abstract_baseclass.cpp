//<-----TITLE OF THIS CODE----->
// abstract base class and pure virtual function
#include<iostream>
#include<string>
using namespace std;
/*
abstract base class means this type of class ,which class is used
only to creat a class not to creat a object [like cwh class]*/
/*
abstrct class has minimum one pure virtual function
*/
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string t,float r){
        title = t;
        rating = r;
    }
    virtual void display() = 0;
// this function is called do-nothing function--->pure virtual function
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

    title = "Djengo tutorial video";
    rating = 4.89;
    vlen = 4.67;
    cwhVideo v1(title,rating,vlen);

    title = "Djengo tutorial text";
    rating = 4.18;
    words = 433;
    cwhText t1(title,rating,words);
    
    cwh * p[2];
    p[0] = &v1;
    p[1] = &t1;

    p[0] ->display();
    p[1]->display();
    return 0;
}