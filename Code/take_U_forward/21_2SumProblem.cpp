#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

void findSumOfGivenSum(int arr[],int n){
    // this is worst case

    // time complexity is slightly leser then O[n^2]
    int sum;
    cout<<"Enter your target sum :- ";
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == sum){
                cout<<"Your index :- "<<i<<" "<<j<<endl;
            }
        }
    }
}

void findSumOfGivenSum2(int arr[],int n){
    // this is for the better solution

    // time-complexity is O[nlogn] for map ==> same as above example
    // space complexity is O[n]

    int sum;
    cout<<"Enter the sum :- ";
    cin>>sum;

    map<int,int> mpp;

    for(int i=0;i<n;i++){
        // int num = arr[i];
        int more = sum - arr[i];
        if(mpp.find(more) != mpp.end()){
            cout<<mpp[more]<<" -> "<<i<<endl;
            return;
        }
        mpp[arr[i]] = i;
    }
    cout<<"Your sum is not found :: ";

}

void findSumOfGivenSum3(int arr[],int n){

    int sum;
    cout<<"Enter your sum :- ";
    cin>>sum;

    sort(arr,arr+n);
    
    int right=0,left=n-1,temp;
    while(right<=left){
        temp = arr[right] + arr[left];
        if(temp == sum){
            cout<<"Your index is :- "<<arr[right]<<" -> "<<arr[left]<<endl;

            // hear index will change because will sort the array
            return;
        } else if(temp < sum){
            right++;
        } else {
            left--;
        }
    }
    cout<<"Your sum is not found ::";

}


int main(){


    int arr[] = {2,6,5,8,11};
// there is only one set of sum in the array

    // findSumOfGivenSum(arr,5);
    findSumOfGivenSum2(arr,5);
    // findSumOfGivenSum3(arr,5);




    return 0;
}