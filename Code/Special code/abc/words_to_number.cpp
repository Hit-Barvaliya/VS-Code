// check for this :- one milloin two hundred ninteen

#include<iostream>
using namespace std;
int main(){
    string input;
    int number = 0;
    int ext = 0;
    cout<<"Enter the number in words :- ";
    getline(cin,input);
    
    string str = "";
    
    for(int i=0;i<=input.length();i++){

        
        if(i == input.length() || input[i] == ' '){
            if(str == "one"){
                    str = "";
                    ext += 1;
                    number += 1;
            }
            else if(str == "two"){
                   str = "";
                   ext += 2;
                   number += 2;
            }
            else if(str == "three"){
                   str = "";
                   ext += 3;
                   number += 3;
            }
            else if(str == "four"){
                   str = "";
                   ext += 4;
                   number += 4;
            }
            else if(str == "five"){
                   str = "";
                   ext += 5;
                   number += 5;
            }
            else if(str == "six"){
                   str = "";
                   ext += 6;
                   number += 6;
            }
            else if(str == "seven"){
                   str = "";
                   ext += 7;
                   number += 7;
            }
            else if(str == "eight"){
                   str = "";
                   ext += 8;
                   number += 8;
            }
            else if(str == "nine"){
                   str = "";
                   ext += 9;
                   number += 9;
            }
            else if(str == "ten"){
                   str = "";
                   ext += 10;
                   number += 10;
            }

//-----------------------------------
            
            else if(str == "eleven"){
                   str = "";
                   ext += 11;
                   number += 11;
            }
            else if(str == "twelve"){
                   str = "";
                   ext += 12;
                   number += 12;
            }
            else if(str == "thirteen"){
                   str = "";
                   ext += 13;
                   number += 13;
            }
            else if(str == "forteen"){
                   str = "";
                   ext += 14;
                   number += 14;
            }
            else if(str == "fifteen"){
                   str = "";
                   ext += 15;
                   number += 15;
            }
            else if(str == "sixteen"){
                   str = "";
                   ext += 16;
                   number += 16;
            }
            else if(str == "seventeen"){
                   str = "";
                   ext += 17;
                   number += 17;
            }
            else if(str == "eighteen"){
                   str = "";
                   ext += 18;
                   number += 18;
            }
            else if(str == "ninteen"){
                   str = "";
                   ext += 19;
                   number += 19;
            }

//------------------------------------

            else if(str == "twenty"){
                   str = "";
                   ext += 20;
                   number = 20;
            }
            else if(str == "thirty"){
                   str = "";
                   ext += 30;
                   number += 30;
            }
            else if(str == "forty"){
                   str = "";
                   ext += 40;
                   number += 40;
            }
            else if(str == "fifty"){
                   str = "";
                   ext += 50;
                   number += 50;
            }
            else if(str == "sixty"){
                   str = "";
                   ext += 60;
                   number += 60;
            }
            else if(str == "seventy"){
                   str = "";
                   ext += 70;
                   number += 70;
            }
            else if(str == "eighty"){
                   str = "";
                   ext += 80;
                   number += 80;
            }
            else if(str == "ninety"){
                   str = "";
                   ext += 90;
                   number += 90;
            }

//-------------------------------

            else if(str == "hundred"){
                   number -= ext;
                   ext *= 100;  str = "";
                   number += ext;
                   ext = 0;

             }
            else if(str == "thousand"){
                     number -= ext;
                   ext *= 1000;  str = "";
                   number += ext;
                   ext = 0;
            }
            else if(str == "million"){
              number -= ext;
                   ext *= 1000000;  str = "";
                //    number = ext;
                   number += ext;
                   ext = 0;
            }
        } else 
            str.push_back(input[i]);
        

    }

    cout<<"your number is :- "<<number;
    
    
    return 0;
}