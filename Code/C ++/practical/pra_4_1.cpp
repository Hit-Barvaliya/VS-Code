#include<iostream>
using namespace std;
class shape{
    protected:
    virtual float area()=0;
};

class circle : public shape{
    float radius;
    public:
    circle(float n){
        radius = n;
    }
    float area(){
        float A;
        A = (22/7.0)*radius*radius;
        return A;
    }
};
int main(){
    circle c1(12.2);
    c1 = circle(12.2);
    cout<<"area of first circle is :- "<<c1.area()<<endl;

    circle c2(1.32);
    cout<<"area of second circle is :- "<<c2.area()<<endl;

    circle c3(123.4);
    cout<<"the area of third circle is :- "<<c3.area()<<endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Base class for a generic shape
class Shape {
protected:
    double radius;
public:
    Shape(double r) : radius(r) {}
    double getRadius() const { return radius; }
};

// Derived class for circles
class Circle : public Shape {
public:
    Circle(double r) : Shape(r) {}
    
    double calculateArea() const {
        return M_PI * radius * radius;
    }

    void display() const {
        cout << "Circle with radius " << radius 
             << " has area: " << calculateArea() << endl;
    }
};

// Approach 1: Dynamic handling using vector
class CircleManagerDynamic {
private:
    vector<Circle> circles;
public:
    void addCircle(double radius) {
        circles.emplace_back(radius);
    }

    void displayAll() const {
        for (const auto& circle : circles) {
            circle.display();
        }
    }
};

// Approach 2: Static handling using fixed array
class CircleManagerStatic {
private:
    static const int MAX_CIRCLES = 5;
    Circle* circles[MAX_CIRCLES];
    int count;
public:
    CircleManagerStatic() : count(0) {}

    void addCircle(double radius) {
        if (count < MAX_CIRCLES) {
            circles[count++] = new Circle(radius);
        } else {
            cout << "Max limit reached!" << endl;
        }
    }

    void displayAll() const {
        for (int i = 0; i < count; ++i) {
            circles[i]->display();
        }
    }

    ~CircleManagerStatic() {
        for (int i = 0; i < count; ++i) {
            delete circles[i];
        }
    }
};

int main() {
    // Dynamic Approach
    cout << "Using Dynamic Approach:\n";
    CircleManagerDynamic dynamicManager;
    dynamicManager.addCircle(3.5);
    dynamicManager.addCircle(4.2);
    dynamicManager.displayAll();

    // Static Approach
    cout << "\nUsing Static Approach:\n";
    CircleManagerStatic staticManager;
    staticManager.addCircle(3.5);
    staticManager.addCircle(4.2);
    staticManager.displayAll();

    return 0;
}
*/