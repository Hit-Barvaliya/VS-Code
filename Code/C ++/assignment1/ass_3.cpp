// #include <iostream>
// #include <cmath>
// using namespace std;
// class Shape
// {
// public:
//     virtual double area() = 0;
// };
// class Circle : public Shape
// {
//     double radius;

// public:
//     Circle(double r) : radius(r) {}
//     double area()
//     {
//         return M_PI * radius * radius;
//     }
// };
// class Rectangle : public Shape
// {
//     double length, width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}
//     double area()
//     {
//         return length * width;
//     }
// };
// class Triangle : public Shape
// {
//     double base, height;

// public:
//     Triangle(double b, double h) : base(b), height(h) {}
//     double area()
//     {
//         return 0.5 * base * height;
//     }
// };
// int main()
// {
//     Circle circle(5);
//     Rectangle rectangle(4, 6);
//     Triangle triangle(4, 5);
//     cout << "Area of Circle: " << circle.area() << endl;
//     cout << "Area of Rectangle: " << rectangle.area() << endl;
//     cout << "Area of Triangle: " << triangle.area() << endl;
//     return 0;
// }

//(assignmen 2)
#include<iostream>
using namespace std;
class circle{
    public:
    float r;
    circle(float n){
        r = n;
    }
    float area(){
        return (22/7)*r*r;
    }
};
class rectangle{
    public:
    float l,w;
    rectangle(float a,float b){
        l = a; w = b;
    }
    float area(){
        return l*w;
    }
};
class trinagle{
    public:
    float h,b;
    trinagle(float x,float y){
        h = x; b = y; 
    }
    float area(){
        return 0.5*h*b;
    }
};
int main(){
    circle c1(20.5);
    cout<<"area of circle with 4 redius :- "<<c1.area()<<endl;
    rectangle r1(20,30.5);
    cout<<"area of rectangle with 20 by 30.5 :- "<<r1.area()<<endl;
    trinagle t1(10,40.2);
    cout<<"area of triangle with 10 height & 40.2 base :- "<<t1.area()<<endl;
    return 0;
}