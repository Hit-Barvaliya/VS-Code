#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    //  we can also write arr directly :- auto b : {1,2,3,4,5}
    for(auto b : arr){
        // auto keyword will choose datatype automaticaly
        cout<<b<<endl;
    }
//this is also use for vector and string
    int sum=0;
    vector<int> num = {9,8,7,6,5};
    for(auto n : num){
        cout<<n<<" ";
        sum += n;
    }
    cout<<sum<<endl;
    for(auto a : "He ll oW or ld"){
        if(a != ' ')
            cout<<a;
    }
    return 0;
}