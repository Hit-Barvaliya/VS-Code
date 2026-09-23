#include<iostream>
#include<algorithm>
using namespace std;

void maximumSubArray1(int arr[],int n){
    // this is brute solution

    // time-complexity is near about O[n^3]
    //space-somplexity is O[1]
    int maxsum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            int sum = 0;
            for(int k=i;k<j;k++){
                sum += arr[k];
            }
            maxsum = max(maxsum,sum);
        }
    }

    cout<<"Your maximum sum is :- "<<maxsum;
}

void maximumSubArray2(int arr[],int n){
    // this is better solution

    // time-complexity is near about O[n^2]
    // space-complexity is O[1]
    int maxsum = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
        }
        maxsum = max(maxsum,sum);
    }
}

void maximumSubArray3(int arr[],int n){
    
    int maximum = INT32_MIN;
    int sum = 0,ans_start=-1,ans_end=-1,start;
    for(int i=0;i<n;i++){
        if(sum == 0)    start = i; 
        sum += arr[i];
        if(maximum < sum){
            maximum = sum;
            ans_start = start;
            ans_end = i;
        }
        if(sum < 0)     sum = 0;
    }

    // cout<<"Your largest sum :- "<<maximum;
    if(ans_start!=-1 && ans_end!=-1){
        cout<<maximum<<endl;
        // hear ansedn is index number so we need to put '<=' condition
        for(int i=ans_start;i<=ans_end;i++){
            cout<<arr[i]<< " ";
        }
    } else {
        cout<<"INVALID";
    }

}

int main(){


    int arr[] = {-2,3,-2,4,-1,-2,1,-1,-1,5,-3};
    // maximumSubArray1(arr,8);
    // maximumSubArray2(arr,8);
    maximumSubArray3(arr,11);




    return 0;
}