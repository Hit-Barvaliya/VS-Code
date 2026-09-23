#include<iostream>
using namespace std;
class person{
    protected:
    int age;
    string name;
    public:
    person(string n,int a) : name(n) , age(a){}
    auto get_age(){
        return age;
    }
    auto get_name(){
        return name;
    }
    void display(){
        cout<<"name of a person is :- "<<name<<endl;
        cout<<"age of person is :- "<<age<<endl;
    }
};

class employee : public person{
    string id;
    public:
    employee(string n,int a,string i) : id(i) , person(n,a){}
    void display(){
        person :: display();
        cout<<"id of an employee is :- "<<id<<endl;
    }
};

class manager : public employee{
    string department;
    public:
    manager(string n,int a,string i,string d) : employee(n,a,i){
        department = d;
    }
    void display(){
        employee :: display();
        cout<<"department of manager is :- "<<department<<endl;
    }
};



int main(){
    manager m1("hit",30,"24003","HS");
    m1.display();

    cout<<endl;
    
    manager m2("rishit",29,"24001","CPP");
    m2.display();
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// // Base class: Person
// class Person {
// protected:
//     string name;
//     int age;
// public:
//     Person(string n, int a) : name(n), age(a) {}
//     virtual void displayDetails() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// // Intermediate class: Employee
// class Employee : public Person {
// protected:
//     string emp_id;
// public:
//     Employee(string n, int a, string id) : Person(n, a), emp_id(id) {}
    
//     void displayDetails() override {
//         Person::displayDetails();
//         cout << "Employee ID: " << emp_id << endl;
//     }
    
//     string getEmpID() { return emp_id; }
// };

// // Top-level class: Manager
// class Manager : public Employee {
// private:
//     string department;
//     static vector<Manager*> managers;  // Static storage
//     static unordered_map<string, Manager*> managerMap;  // Efficient lookup

// public:
//     Manager(string n, int a, string id, string dept) 
//         : Employee(n, a, id), department(dept) {
//         managers.push_back(this);
//         managerMap[id] = this;
//     }

//     void displayDetails() override {
//         Employee::displayDetails();
//         cout << "Department: " << department << endl;
//     }

//     static void listAllManagers() {
//         cout << "\nList of Managers:\n";
//         for (auto mgr : managers) {
//             mgr->displayDetails();
//         }
//     }

//     static Manager* findManagerByID(string id) {
//         if (managerMap.find(id) != managerMap.end()) {
//             return managerMap[id];
//         }
//         return nullptr;
//     }
// };

// // Initialize static members
// vector<Manager*> Manager::managers;
// unordered_map<string, Manager*> Manager::managerMap;

// // Main function to test the system
// int main() {
//     Manager m1("Alice", 40, "M001", "HR");
//     Manager m2("Bob", 45, "M002", "Finance");

//     m1.displayDetails();
//     m2.displayDetails();

//     // List all managers
//     Manager::listAllManagers();

//     // Find manager by ID
//     string searchID = "M002";
//     Manager* found = Manager::findManagerByID(searchID);
//     if (found) {
//         cout << "\nManager found with ID " << searchID << ":\n";
//         found->displayDetails();
//     } else {
//         cout << "\nManager with ID " << searchID << " not found.\n";
//     }

//     return 0;
// }
