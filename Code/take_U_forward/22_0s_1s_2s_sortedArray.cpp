#include<iostream>
#include<algorithm>
using namespace std;

// brute solution is use any sorting algorithm

void sorting1(int arr[],int n){
    // this is for better solution

    // time-complexity is O[2n]
    // space-complexity is O[1]
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)   count0++;
        else if (arr[i]==1)     count1++;
        else    count2++;
    }
    for(int i=0;i<count0;i++)       cout<<0<<" ";
    for(int i=0;i<count1;i++)       cout<<1<<" ";
    for(int i=0;i<count2;i++)       cout<<2<<" ";
}

void sorting2(int arr[],int n){

    // this is Dutch National Flag algorithm

    // this is the optimal solution
     
    // tiem complexity is O[n]
    // space complexity is O[1]

    // to understad the whole logic, take a photo as a reference
    
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        } else if(arr[mid]==1){
            mid++;
        } else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    // for printing the whole array
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}

int main(){

    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    // sorting1(arr,12);
    sorting2(arr,12);


    return 0;
}