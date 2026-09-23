#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    int num=0;
    cin>>n;
    int arr[n];
    int temp[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                temp[num]=arr[i];
                num++;
            }
        }
    }
    
    if(num==0){
        cout<<-1;
    } else {
        for(int i=0;i<num;i++){
        cout<<temp[i]<<" ";
        }
    }
    
    
    return 0;
}