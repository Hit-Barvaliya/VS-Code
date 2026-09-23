#include<iostream>
#include<vector>
// #include<bits\stdc++.h>
using namespace std;

void rearrange1(int arr[],int n){
    // this is brute solution

    // time-complexity is O[n] + O[n/2] + O[n/2]= O[2n]
    // space-complexity is O[n]

    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i] >= 0) 
            pos.push_back(arr[i]);
        if(arr[i] < 0) 
            neg.push_back(arr[i]);
    }
    for(int i=0;i<n/2;i++){
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }

    cout<<"Your answer is :- ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void rearrange2(int arr[],int n){
    // this is optimal then brute

    int pos=0,neg=1,ans[n] = {0};
    for(int i=0;i<n;i++){
        if(arr[i]>=0)   {ans[pos] = arr[i];    pos += 2;}
        else    {ans[neg] = arr[i];      neg += 2;}
    }
    cout<<"Your answer is :- ";
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
}


void rearrange3(int arr[], int n) {
    // this is a best case

    // space-complexity is O[n]
    /* time-complexity is dived in three part
     * 1) O[n]
     * 2) O[min(pos,neg)] :- worst case : O[0] best case : O[n/2]
     * 3) O[remain]       :- worst case : O[n] best case : O[0]
     *  total ==> worst case : O[2n] best case : O[n+(n/2)]
    */

    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            negative.push_back(arr[i]);
        else
            positive.push_back(arr[i]);
    }

    int i=0;
    for(;i<negative.size() && i<positive.size();i++){
        arr[i] = positive[i];
        arr[i+1] = negative[i];
    }

    for(int j=i;j<positive.size();j++){
        arr[i] = positive[i];
    }
    
    for(int j=i;j<negative.size();j++){
        arr[i] = negative[i];
    }
    
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}



int main(){

    // we will arrage this array in positive and negative number 
    int arr[] = {3,1,-2,-5,2,-4,5};
    // ans :- 3,-2,1,-5,2,-4

    // rearrange1(arr,6);
    // rearrange2 (arr,6);
    rearrange3(arr,7);


    return 0;
}