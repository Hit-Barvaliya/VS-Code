#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// we have also inbuilt function for this only in 'C++'

vector<char> next_permutation_number(vector<char> num){

    int ind = -1;
    int n = num.size();
    for(int i=n-2;i>=0;i--){
        if(num[i] < num[i+1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){
        reverse(num.begin(),num.end());
        return num;
    }

    for(int i=n-1;i>ind;i--){
        if(num[i] > num[ind]){
            swap(num[i],num[ind]);
            break;
        }
    }

    reverse(num.begin() + ind + 1,num.end());
    return num;
}


int main(){

    // int a = 2154300;
    vector<char> number;
    // number.push_back(2);
    // number.push_back(1);
    // number.push_back(5);
    // number.push_back(4);
    // number.push_back(3);
    // number.push_back(0);
    // number.push_back(0);

    number.push_back('h');
    number.push_back('i');
    number.push_back('r');
    number.push_back('o');
    number.push_back('s');
    number.push_back('i');
    number.push_back('m');
    number.push_back('a');


    for(int i=0;i<5;i++){
        number = next_permutation_number(number);
        for(char i : number) cout<<i;
        cout<<endl;
    }

    return 0;
}