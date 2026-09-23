#include<iostream>
#include<vector>
using namespace std;
class patient{
    int patielnID;
    string p_name;
    int age;
    string ailment;
    public:
    void inputData(int i,string n,int a,string ai){
        patielnID = i;
        p_name = n;
        age = a;
        ailment = ai;
    }
    // void inputData(){
        // cout<<"the name of patient is :- ";
        // cin>>p_name;
        // cout<<"the id of patient is :- ";
        // cin>>patielnID;
        // cout<<"age of patient is :- ";
        // cin>>age;
        // cout<<"ailement of patient :- ";
        // cin>>ailment;
    // }
    void displayData(){
        cout<<"the name of patient is :- "<<p_name<<endl
            <<"the id of patient is :- "<<patielnID<<endl
            <<"age of patient is :- "<<age<<endl
            <<"ailement of patient :- "<<ailment<<endl;
    }
};
class appoinment{
    int appoinmentID;
    string d_name;
    string date;
    public:
    appoinment(){
        appoinmentID = 0;
    }
    void schedule(){
        cout<<"enter the appoinment-id :- ";
        cin>>appoinmentID;
        cout<<"enter he name of doctor is :- ";
        cin>>d_name;
        cout<<"enter the date in string(12-03-2025) :- ";
        cin>>date;
    }
    void reschedule(){
        if(appoinmentID==0){
            cout<<"this patient has no appiitement for reschedule\n";
        }else{
            cout<<"re-enter the appoinment-id :- ";
            cin>>appoinmentID;
            cout<<"re-enter he name of doctor is :- ";
            cin>>d_name;
            cout<<"re-enter the date in string(dd-mm-yyyy) :- ";
            cin>>date;
        }
    }
};
class hospital : public patient , public appoinment{
    int appoinment_price;
    int medicin_price;
    public:
    void addpatient(){
        int i,a;
        string n,ai;
        cout<<"the name of patient is :- ";
        cin>>n;
        cout<<"the id of patient is :- ";
        cin>>i;
        cout<<"age of patient is :- ";
        cin>>a;
        cout<<"ailement of patient :- ";
        cin>>ai;
        inputData(i,n,a,ai);
    }
    void manageappoinment(){
        int a;
        cout<<"enter 1 to add new appoinment\n"
        <<"enter 2 to reschedule appoinment :- ";
        cin>>a;
        if(a==1){
            schedule();
        }else if(a==2){
            reschedule();
        }else   cout<<"enter valid choice\n";
    }
    void display_bill(){
        cout<<"\n<-----Your Bill----->\n";
        cout<<"your appoinment price is :- "<<appoinment_price<<endl
        <<"your medicine price is :- "<<medicin_price<<endl
        <<"your total cost is :- "<<appoinment_price+medicin_price<<endl;
    }
    void generate_bill(){
        cout<<"enter appoinment price :- ";
        cin>>appoinment_price;
        cout<<"enter the medicine price :- ";
        cin>>medicin_price;
        display_bill();
    }

};
int main(){
    // hospital h1;
    // h1.addpatient();
    // h1.manageappoinment();
    // h1.generate_bill();

    vector<hospital> h1;
    hospital tr;
    int a;
    while(1){
        cout<<"\nenter 1 to add new pateint\n"
            <<"enter 2 to manage appoinment\n"
            <<"enter 3 to generate new bill\n"
            <<"enter 4 to display data\n"
            <<"enter 5 to schedule data\n"
            <<"enter 6 to reschedule data\n"
            <<"enter 7 to exit :- ";
            cin>>a;
            cout<<"\n";
            if(a==1){
                tr.addpatient();
                h1.push_back(tr);
            }else if (a==2){
                h1[0].manageappoinment();
            }else if (a==3){
                h1[0].generate_bill();
            }else if (a==4){
                h1[0].displayData();
            }else if (a==5){
                h1[0].schedule();
            }else if (a==6){
                h1[0].reschedule();
            }else if(a==7)  break;

            else cout<<"-: enter valid choice :-\n";
    }

    return 0;
}