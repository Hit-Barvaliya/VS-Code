#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin>>n;

    int arr[n];
    pair<int,int> p1[n];
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p1[i].first = i+1;
    }

    for(int i=1;i<n;i++){
        int temp = 0;
        for(int j=0;j<n;j++){
            if(i == arr[j]){
                temp++;
            }
        }
        p1[i-1].second = temp;
    }
    
    for(int i=0;i<n;i++){
        if(p1[i].second == 1){
            cout<<p1[i].first<< " ";
        }
    }   
    
    return 0;
}
