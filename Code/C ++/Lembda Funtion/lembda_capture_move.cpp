#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v1 = {10,20,30,40,50,60,70,80};
//->when we move the ownership to the lembda functon after that 
//  we can not access that vector after the range of that lembda function
    auto lembda = [num = move(v1)](){

        for(int elem : num){
            cout<<elem<<" ";
        }
        /*
        for(int i=0;i<num.size();i++){
            cout<<num.at(i)<<" ";
        }
        */
        cout<<endl;
        cout<<"size of vetor is (in lembda function) :- "<<num.size()<<endl;
    };

    lembda();

    cout<<"size of vetor is (after lembda function) :- "<<v1.size()<<endl;
    return 0;
}