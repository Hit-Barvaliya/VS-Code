#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    complex(){}
    complex (int r,int i){
        real = r;
        imaginary = i;
    }
    
    friend void sum(complex ,complex);
    friend void substraction(complex ,complex);
};

void sum(complex c1,complex c2){
    cout<<"sum of two number is :- "
        <<c1.real+c2.real<<" + i"<<c1.imaginary+c2.imaginary<<endl;
}

void substraction(complex c1,complex c2){
    cout<<"difference between two numbwr is :- "
        <<c1.real-c2.real<<" + i"<<c1.imaginary-c2.imaginary<<endl;
}

int main(){

    complex c1,c2;
    int r,i;
    cout<<"this is for first number -=>\n"
        <<"enter the real part :- ";
    cin>>r;
    cout<<"enter the imaginary part :- ";
    cin>>i;
    c1 = complex(r,i);

    cout<<"this is for second number -=>\n"
        <<"enter the real part :- ";
    cin>>r;
    cout<<"enter the imaginary part :- ";
    cin>>i;
    c2 = complex(r,i);

    sum(c1,c2);
    substraction(c1,c2);
    return 0;
}









// #include <iostream>
// #include <vector>
// using namespace std;

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     // Constructors
//     Complex() : real(0), imag(0) {}
//     Complex(double r, double i) : real(r), imag(i) {}

//     // Overload + operator
//     Complex operator+(const Complex& other) const {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     // Overload - operator
//     Complex operator-(const Complex& other) const {
//         return Complex(real - other.real, imag - other.imag);
//     }

//     // Overload >> operator for input
//     friend istream& operator>>(istream& in, Complex& c) {
//         cout << "Enter real part: ";
//         in >> c.real;
//         cout << "Enter imaginary part: ";
//         in >> c.imag;
//         return in;
//     }

//     // Overload << operator for output
//     friend ostream& operator<<(ostream& out, const Complex& c) {
//         out << c.real;
//         if (c.imag >= 0)
//             out << " + " << c.imag << "i";
//         else
//             out << " - " << -c.imag << "i";
//         return out;
//     }
// };
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // class Complex {
// // private:
// //     double real;
// //     double imag;

// // public:
// //     // Constructors
// //     Complex() : real(0), imag(0) {}
// //     Complex(double r, double i) : real(r), imag(i) {}

// //     // Overload + operator
// //     Complex operator+(const Complex& other) const {
// //         return Complex(real + other.real, imag + other.imag);
// //     }

// //     // Overload - operator
// //     Complex operator-(const Complex& other) const {
// //         return Complex(real - other.real, imag - other.imag);
// //     }

// //     // Overload >> operator for input
// //     friend istream& operator>>(istream& in, Complex& c) {
// //         cout << "Enter real part: ";
// //         in >> c.real;
// //         cout << "Enter imaginary part: ";
// //         in >> c.imag;
// //         return in;
// //     }

// //     // Overload << operator for output
// //     friend ostream& operator<<(ostream& out, const Complex& c) {
// //         out << c.real;
// //         if (c.imag >= 0)
// //             out << " + " << c.imag << "i";
// //         else
// //             out << " - " << -c.imag << "i";
// //         return out;
// //     }
// // };
// // int main() {
// //     Complex c1, c2;
// //     cout << "Enter first complex number:\n";
// //     cin >> c1;
// //     cout << "Enter second complex number:\n";
// //     cin >> c2;

// //     Complex sum = c1 + c2;
// //     Complex diff = c1 - c2;

// //     cout << "\nFirst Complex Number: " << c1 << endl;
// //     cout << "Second Complex Number: " << c2 << endl;
// //     cout << "Sum: " << sum << endl;
// //     cout << "Difference: " << diff << endl;

// //     return 0;
// // }
// // void batchAdd(const vector<Complex>& vec) {
// //     Complex result;
// //     for (const auto& c : vec) {
// //         result = result + c;
// //     }
// //     cout << "Batch Sum: " << result << endl;
// // }

// int main() {
//     vector<Complex> numbers;
//     int n;
//     cout << "How many complex numbers? ";
//     cin >> n;

//     for (int i = 0; i < n; ++i) {
//         Complex temp;
//         cout << "Enter complex number " << i + 1 << ":\n";
//         cin >> temp;
//         numbers.push_back(temp);
//     }

//     batchAdd(numbers);

//     return 0;
// }
