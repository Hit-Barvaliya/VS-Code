#include <iostream>
using namespace std;
/*function prototyoe
    type function_name(argument)
    int  sum_number(int a,int b)
*/
int sum_number(int, int);
// int sum_number(int a,int b);--->this is also right way
void hello(void);
// void helo()-----> also this valid
int main()
{
    int a, b;
    cin >> a >> b;
    // a and b are actual perameters
    cout << "sum of these number is :- " << sum_number(a, b);
    hello();
    return 0;
}
int sum_number(int c, int d)
{
    // formal parameters c and d taking values from actual parameters a and b
    return c + d;
}
void hello()
{
    cout << "\nHello World";
}