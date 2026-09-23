#include<iostream>
#include<map>
// #include<bits/stdc++.h>
using namespace std;

void longestSubArrayWithSumOfnumber(int arr[],int n){
    // this is the worst case

    // time-complexity is O[n^2] ==> this near about not excatly
    int sum=3,length=0,total=0;
    cout<<"Enter the sum :- ";
    cin>>sum;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                total += arr[j];
                if(total == sum){
                    length = max(length,j-i+1);
                    total = 0;
                    break;
                } else if(total > sum){
                    total = 0;
                    break; 
                }
        }
    }

    cout<<"The longest subarray is :- "<<length<<endl;
}

void longestSubArrayWithSumOfnumber2(int arr[],int n){
    // this is a better solution

    /*
     * -> if we use orderMap :- O[nlogn] => hear logn is for finding
     * -> if we use unorderMap :- O[n*1], but for the worst case it it :- O[n*n] => hear logn is for finding
    */
   // space-complexity is :- O[n]

    int k,maxLength=0;
    cout<<"Enter the sun :- ";
    cin>>k;

    map<int,int> preSumMap;

    int sum = 0;
    for(int i=0;i<n;i++){

        sum += arr[i];
        if(sum == k){
            maxLength = max(maxLength,i+1);
        }
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int length = i - preSumMap[rem];
            maxLength = max(maxLength,length); 
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
        
    }

    cout<<"The longest subarray is :- "<<maxLength<<endl;   
}

void longestSubArrayWithSumOfnumber3(int arr[],int n){
    int k;
    cout<<"Enter the sum :- ";
    cin>>k;

    int right=0,left=0,sum=0,maxLength=0;
    while(right<n){
        sum += arr[right];
        while(left<=right && sum>k){
            sum -= arr[left];
            left++;
        }
        if(right<n) right++;
        if(sum == k){
            maxLength = max(maxLength,right - left);
        }
    }
    cout<<"longest subarray is :- "<<maxLength<<endl;
}


int main(){

    int arr[] = {1,2,3,1,1,1,1,4,2,3};

    // longestSubArrayWithSumOfnumber(arr,10);
    // longestSubArrayWithSumOfnumber2(arr,10);
    longestSubArrayWithSumOfnumber3(arr,10);

    return 0;
}