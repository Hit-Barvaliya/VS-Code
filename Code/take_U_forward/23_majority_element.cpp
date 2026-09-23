// this is for n/2 majority element

#include<iostream>
#include<map>
using namespace std;

void majority1(int arr[],int n){
    //this is for brute solution

    // time-complexity is o[n^2]

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] = arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            cout<<"Your majority element is :- "<<arr[i]<<endl;
            break;
        }
    }
}

void majority2(int arr[],int n){
    // this is better solution

    // time-complexity is O[nlogn] ==> based on the map-type
    // space-complexity is O[n] when we all the element are different

    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    for(auto i : mpp){
        if(i.second > (n/2)){
            cout<<i.first;
            return;
        }
    }
    cout<<"There is no majority element ";

}

void majority3(int arr[],int n){
    // this is optimal solution

    // time-complexity is O[n] + O[n]  but last o[n] is just for verify the answer there is no need
    // spcae-complexity is O[1]

    int count=0,element;
    
    for(int i=0;i<n;i++){
        if(count == 0){
            element = arr[i];
            count++;
        } else if(element == arr[i]){
            count++;
        } else {
            count--;
        }
    }

    // this is to verify the answer
    int count2 = 0;
    for(int i=0;i<n;i++){
        if(element == arr[i])   count2++;
    }
    if(count2 > (n/2)){
        cout<<"Your element is :- "<<element<<endl;
    } else {
        cout<<"There is no majority element in your array :: ";
    }
}


int main(){

    int arr[] = {7,7,5,7,5,5,5,5,5,1,5,7,5,5,7,7};
    // majority1(arr,7);
    // majority2(arr,7);
    majority3(arr,16);

    return 0;
}