#include<iostream>
using namespace std;
/*
Inheritance:
student--->test
student--->sports

test--->result
sports--->result
*/
class student {
    // protected:
    int rollnumber;
    public:
    void set_rollnumber(int n){
        rollnumber = n;
    }
    int get_rollnumber(){
        return rollnumber;
    }
};
// you can also write this way :- 
// class test : virtual public student{};
class test : public virtual student{
    // protected:
    float maths,physics;
    public:
    void set_maths_marks(float n){
        maths = n;
    }
    float get_maths_marks(){
        return maths;
    }
    void set_phusics_marks(float n){
        physics = n;
    }
    float get_phusics_marks(){
        return physics;
    }
};
class spotrs : virtual public student{
    // protected:
    float score;
    public:
    void set_score(float n){
        score = n;
    }
    float get_score(){
        return score;
    }
};
class result : public test , public spotrs{
    // protected:
    float total;
    public:
    void disply(){
        total = get_maths_marks() + get_phusics_marks() + get_score();
        cout<<"your roll numbr is :- "<<get_rollnumber()<<endl
            <<"your result is :- \n"
            <<"your maths marks is :- "<<get_maths_marks()<<endl
            <<"your phusics marks is :- "<<get_phusics_marks()<<endl
            <<"your sports score is :- "<<get_score()<<endl
            <<"your total score is :- "<<total;
    }
};
int main(){
    result r1;
    
    r1.set_rollnumber(4200);
    r1.set_maths_marks(70);
    r1.set_phusics_marks(90.5);
    r1.set_score(7);
    r1.disply();
    return 0;
}