
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n,count=0;
    cin>>n;
    int arr[n];
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(i == arr[j]){
                temp=1;
                break;
            }
        }
        if(temp==0){
            ans[count] = i;
            count++;
        }        
    }
    
    if(count==0){
        cout<<-1;
    } else {
        for(int i=0;i<count;i++){
        cout<<ans[i]<<" ";
     }
    }
    
    return 0;
}