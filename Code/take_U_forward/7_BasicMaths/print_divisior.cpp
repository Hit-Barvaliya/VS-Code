#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    // for(int i=1;i<=num;i++){
    //     if(num%i==0)    cout<<i<<" ";
    // }
    vector<int> v1;

    //time complexity ia :- O(sqrt(n))
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            // cout<<i<<" "<<(num/i)<<endl;
            v1.push_back(i);
            if(i!=(num/i))  v1.push_back(num/i);
        }
        // if(i >= (num/i))  break;
    }

    //for sorting time complexity is :- O(n log(n)):n is number of factor
    sort(v1.begin(),v1.end());

    //tie complexiti is :- O(number of factor)
    for(auto i : v1){cout<<i<<" ";}

    //accurate time complexity is :- O(sqrt(n)+[no_of_fact*log(nu_of_fact)]+num_of_fact)

    //aproximet time complaexity is :- O(sqrt(n))
    return 0;
}