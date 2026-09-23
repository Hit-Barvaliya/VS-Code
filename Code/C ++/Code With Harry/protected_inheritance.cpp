#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};

/*
	                        Public Derivation      	Private Derivation    	Protected Derivation
1. Private members           	Not Inherited       	Not Inherited              	Not Inherited              
2. Protected members           	Protected              	Private                     Protected                    
3. Public members           	Public	                Private                     Protected                    

*/

class derived : protected base{

};
int main (){
    base b;
    derived d;
    // cout<<b.a;  // both are not access because 
    // cout<<d.a;  // both are protected in both class (base and derived)

    return 0;
}