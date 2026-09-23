#include<iostream>
using namespace std;
int main(){
    int n,sum_x=0,sum_y=0,sum_z=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            if(j==0)    sum_x += arr[i][j];
            if(j==1)    sum_y += arr[i][j];
            if(j==2)    sum_z += arr[i][j];
        }
    }
    if(sum_x==0&&sum_y==0&&sum_z==0)    cout<<"YES";
    else    cout<<"NO";
    return 0;
}