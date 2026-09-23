// first is leaner search so it was not written
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,target;
     cin>>n;
    int arr1[n],arr2[n];
    
   
    
    for(int i=0;i<n;i++){
        cin>>arr1[i]>>arr2[i];
    }
    cin>>target;
    
    
    int right =n-1,left = 0,mid = 0;
    while(left<=right){
        
        mid = (left+right)/2;
        
        if(arr1[mid]==target){
            cout<<arr2[mid];
            break;
        } else if(arr1[mid]<target) {
            left = mid+1;
        } else {
            right = mid - 1;
        }      
        
    }
    
    if(left>right) {
        cout<<"Not submitted";
    }
    
    
    
    return 0;
}
