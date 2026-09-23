#include<iostream>
#include<map>
using namespace std;

void number_of_subarray1(int arr[],int n,int target){
    // time-complexity is O[n^3] near about not excatly

    // space-complexity is O[1]
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            if(sum == target){
                count++;
            }
        }
    }

    cout<<"The number of subarray is :- "<<count<<endl;
}

void number_of_subarray2(int arr[],int n,int target){
// time-complexity is O[n^2]
// sapce complexity is O[1]
    int count = 0;
    // 1,2,3,-3,1,1,1,4,2,-3
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            
            if(sum == target){
                count++;
            }
        }
    }
    cout<<"The number os subarray is :- "<<count<<endl;

}

void number_of_subarray3(int arr[],int n,int k){
    // time-complexity is O[n logn]
    // space-complexity is O[1]
    map<int,int> mpp;
    mpp[0] = 1;
    int count = 0,presum = 0;
    for(int i=0;i<n;i++){
        
        presum += arr[i];
        int remove = presum - k;
        count += mpp[remove];
        mpp[presum] += 1;
    }

    cout<<"The number os subarray is :- "<<count<<endl;
}

int main(){

    int arr[] = {1,2,3,-3,1,1,1,4,2,-3};
    int sum = 3;
    // cin>>sum;
    number_of_subarray1(arr,10,sum);
    number_of_subarray2(arr,10,sum);
    number_of_subarray3(arr,10,sum);


    
    return 0;
}