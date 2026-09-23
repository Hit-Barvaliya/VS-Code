// this code is working with some issues

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
// #include<pair>
#include <bits/stdc++.h>
using namespace std;
class vehical
{
protected:
    string ve_number;
    pair<int, int> entry;
    pair<int, int> exit;
    string owner;

public:
    // vehical(string n,int en1,int en2,int ex1,int ex2,string ow){
    // ve_number = n;
    // entry.first = en1;
    // entry.second = en2;
    // exit.first = ex1;
    // exit.second = ex2;
    // owner = ow;
    // }
    void showDetails()
    {
        cout << "vehical number is :- " << ve_number << endl
             << "entry time is :- " << entry.first << " : " << entry.second << endl

             << "exit time is :- " << exit.first << " : " << exit.second << endl
             << "owner name is :- " << owner << endl;
    }
    string get_vehicalnumber()
    {
        return ve_number;
    }
    int get_entertime1()
    {
        return entry.first;
    }
    int get_entertime2()
    {
        return entry.second;
    }
    int get_exittime1()
    {
        return exit.first;
    }
    int get_exittime2()
    {
        return exit.second;
    }
    void set_details(string n, int en1, int en2, int ex1, int ex2, string ow)
    {
        ve_number = n;
        entry.first = en1;
        entry.second = en2;
        exit.first = ex1;
        exit.second = ex2;
        owner = ow;
    }
};
class two_wheeler : public vehical
{
    string helmet_locker_type;

public:
    // two_wheeler(string n,int en1,int en2,int ex1,int ex2,string ow,string he) : vehical(string n,int en1,int en2,int ex1,int ex2,string ow){
    // helmet_locker_type = he;
    // }
    void showDetails()
    {
        vehical::showDetails();
        cout << "helmet locker type is :- " << helmet_locker_type << endl;
    }
    void two_wheel_charges()
    {
        int charges = 0;
        int hour = (get_exittime1() - get_exittime1()) + (get_exittime2() - get_entertime2()) /60;
        while (hour >= 1)
        {
            if (hour <= 2)
            {
                charges += (hour * 10);
                hour -= 1;
            }
            else if (hour <= 5)
            {
                charges += (hour * 20);
                hour -= 1;
            }
            else if (hour > 5)
            {
                charges += (hour * 50);
                hour -= 1;
            }
        }
        cout << "total charges of your two wheeler is :- " << charges << endl;
    }
    void t_set_details(string n, int en1, int en2, int ex1, int ex2, string ow, string he)
    {
        // set_details(string n,int en1,int en2,int ex1,int ex2,string ow);
        ve_number = n;
        entry.first = en1;
        entry.second = en2;
        exit.first = ex1;
        exit.second = ex2;
        owner = ow;
        helmet_locker_type = he;
    }
};
class four_wheeler : public vehical
{
    string valet_srevice_type;

public:
    // four_wheeler(string n,int en1,int en2,int ex1,int ex2,string ow,string val) : vehical(string n,int en1,int en2,int ex1,int ex2,string ow){
    // valet_srevice_type = val;
    // }
    void showDetails()
    {
        vehical::showDetails();
        cout << "valet service type is :- " << valet_srevice_type << endl;
    }
    void four_wheel_charges()
    {
        int charges = 0;
        int hour = (get_exittime1() - get_exittime1()) + (get_exittime2() - get_entertime2()) / 100;
        while (hour >= 0)
        {
            if (hour <= 2)
            {
                charges += (hour * 15);
                hour -= 1;
            }
            else if (hour <= 5)
            {
                charges += (hour * 30);
                hour -= 1;
            }
            else if (hour > 5)
            {
                charges += (hour * 70);
                hour -= 1;
            }
        }
        cout << "total charges of your four wheeler is :- " << charges << endl;
    }
    void f_set_details(string n, int en1, int en2, int ex1, int ex2, string ow, string val)
    {
        ve_number = n;
        entry.first = en1;
        entry.second = en2;
        exit.first = ex1;
        exit.second = ex2;
        owner = ow;
        valet_srevice_type = val;
    }
};
int main()
{
    vector<two_wheeler> t1;
    vector<four_wheeler> f1;
    int a;
    string n, ow, he, val;
    int en1, en2, ex1, ex2;
    while (1)
    {
        cout << "enter 0 for exit "<<endl
             << "enter 1 to add a two-wheeler"<<endl
             << "enter 2 to add a four-wheeler"<<endl
             << "enter 3 to show the charges of two-wheeler"<<endl
             << "enter 4 to show the charges of four-wheeler"<<endl
             << "enter 5 to show all the vihecl :- ";
        cin >> a;
        if (a == 0)
            break;
        // a==1-----------------
        if (a == 1)
        {
            cout << "enter the owner name :- ";
            cin >> ow;
            cout << "enter the entry time in hour :- ";
            cin >> en1;

            cout << "enter the entry time in minnuts:- ";
            cin >> en2;
            cout << "enter the exit time in hour :- ";
            cin >> ex1;
            cout << "enter the exit time in minnuts:- ";
            cin >> ex2;
            cout << "enter the helmet type locker :- ";
            cin >> he;
            cout << "enter the vahical number :- ";
            cin >> n;
            int check = 0;
            for (int i = 0; i < t1.size(); i++)
            {
                if (t1[i].get_vehicalnumber() == n)
                {
                    check = 1;
                    cout << "this vehical number is already entered :- " << endl;
                    break;
                }
            }
            if (check == 0)
            {
                // string n,string en,string ex,string ow,string val
                two_wheeler T;
                T.t_set_details(n, en1, en2, ex1, ex2, ow, he);
                t1.push_back(T);
                try
                {
                    ofstream file("vehical.txt",ios::app);
                    if (file.is_open())
                    {
                        file << "add new two-wheeler :- " << endl;
                        file << "name of owner is :- " << ow << endl;
                        file << "entry time is :- " << en1 << " : " << en2 << endl;
                        file << "exit time is :- " << ex1 << " : " << ex2 << endl;
                        file << "vehical_number is :- " << n << endl;
                        file << "helmet type locker is :- " << he << endl
                             << endl;
                    }
                    else
                    {
                        throw "file is not open";
                    }
                    file.close();
                }
                catch (const char *ch)
                {
                    cout << "some error is occured :- " << ch << endl;
                }
            }
// a==2-------------------
        }
        else if (a == 2)
        {
            cout << "enter the owner name :- ";
            cin >> ow;
            cout << "enter the entry time in hour :- ";
            cin >> en1;
            cout << "enter the entry time in minnuts:- ";
            cin >> en2;
            cout << "enter the exit time in hour :- ";
            cin >> ex1;
            cout << "enter the exit time in minnuts:- ";
            cin >> ex2;
            cout << "enter the valet service type :- ";
            cin >> val;
            cout << "enter the vahical number :- ";
            cin >> n;
            int check = 0;
            for (int i = 0; i < f1.size(); i++)
            {
                if (f1[i].get_vehicalnumber() == n)
                {
                    check = 1;
                    cout << "this vehical number is already entered :- " << endl;
                    break;
                }
            }
            if (check == 0)
            {
                // string n,string en,string ex,string ow,string val
                // two_wheeler T(n,en1,en2,ex1,ex2,ow,he);
                four_wheeler F;
                F.f_set_details(n, en1, en2, ex1, ex2, ow, val);
                f1.push_back(F);
                try
                {
                    ofstream file("vehical.txt",ios::app);
                    if (file.is_open())
                    {
                        file << "add new two-wheeler :- " << endl;
                        file << "name of owner is :- " << ow;
                        file << "entry time is :- " << en1 << " : " << en2 << endl;
                        file << "exit time is :- " << ex1 << " : " << ex2 << endl;
                        file << "vehical number is :- " << n << endl;
                        file << "valet service type is :- " << val << endl
                             << endl;
                    }
                    else
                    {
                        throw "file is not open";
                    }
                    file.close();
                }
                catch (const char *ch)
                {
                    cout << "some error is occured :- " << ch << endl;
                }
            }
// a==3-----------------
        }
        else if (a == 3)
        {
            cout << "enter your vehical number :- ";
            cin >> n;
            for (int i = 0; i < t1.size(); i++)
            {
                if (t1[i].get_vehicalnumber() == n)
                {
                    t1[i].two_wheel_charges();
                    break;
                }
            }
// a==4------------------
        }
        else if (a == 4)
        {
            cout << "enter your vehical number :- ";
            cin >> n;
            for (int i = 0; i < f1.size(); i++)
            {
                if (f1[i].get_vehicalnumber() == n)
                {
                    f1[i].four_wheel_charges();
                    break;
                }
            }
// a==5-------------------
        }
        else if (a == 5)
        {
            try
            {
                ofstream file("vehical.txt",ios::app);
                if (file.is_open())
                {
                    cout << "information of all two-wheeler :- " << endl;
                    for (int i = 0; i < t1.size(); i++)
                    {
                        t1[i].showDetails();
                    }
                    cout << "information of all four-wheeler :- " << endl;
                    for (int i = 0; i < f1.size(); i++)
                    {
                        f1[i].showDetails();
                    }
                }
                else
                {
                    throw "No record found";
                }
            }
            catch (const char * ch)
            {

                cout << "some error is occured during display data :- " << ch << endl;
            }
        }
    }
    return 0;
}