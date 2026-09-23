#include<iostream>
using namespace std;
int do_sum1(int* a,int n){
    
    if(n==0) return 0;
    int sum = 0;
    sum = sum + *a;
    *(a++);
    return do_sum1(&a,n-1);
}
int main(){
    int n,sum1=0,sum2=0;
    cout<<"enter the size of array :- ";
    cin>>n;
    int arr[n];
    cout<<"enter the "<<n<<"elements for tha aray.";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum1 = do_sum1(&arr[0],n);
    cout<<"sum is :- "<<sum1;
    return 0;
}