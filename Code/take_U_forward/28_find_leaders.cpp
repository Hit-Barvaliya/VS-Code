#include<iostream>
#include<stack>
using namespace std;


void findLeader1(int arr[],int n){
    // this is bruet solution

    // time-complexity is O[n^2] near about
    // space-complexity is O[1]

    for(int i=0;i<n;i++){
        bool leader = true;
        for(int j=i;j<n;j++){
            if(arr[i] < arr[j]){
                leader = false;
                break;
            }
        }

        if(leader){
            cout<<"Your element is leader :- "<<arr[i]<<endl;
        }
    }

}

void findLeader2(int arr[],int n){

    int maxnum = INT16_MIN;

    for(int i=n-1;i>=0;i--){
        if(maxnum < arr[i]){
            maxnum = arr[i];
            cout<<"Youe leader element is :- "<<arr[i]<<endl;
        }
    }
}

int main(){
    
    int arr[] = {10,22,12,3,0,6};

    // findLeader1(arr,6);
    findLeader2(arr,6);

    return 0;
}