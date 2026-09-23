// according to the lecture
#include<iostream>
#include<algorithm>
using namespace std;

void counting_sort(int a[],int n){

    int count[11] = {0},b[11] = {0};

    for(int i=0;i<n;i++){
        count[a[i]]++;
    }

    for(int i=1;i<=10;i++){
        count[i] = count[i] + count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        b[--count[a[i]]] = a[i];
    }
    for(int i=0;i<n;i++){
        a[i] = b[i];
    }

    for(int i=0;i<10;i++)   cout<<a[i]<<"->";

}

// according to me
void counting_sort2(int arr[],int n){

    int max = INT16_MIN;
    for(int i=0;i<n;i++){
        if(max < i)
            max = i;
    }    

    int count[max+1] = {0};

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    int temp = 0;
    for(int i=0;i<max+1;i++){
        if(count[i] != 0){
            for(int j=0;j<count[i];j++){
                arr[temp] = i;
                temp++;
            }
        }
    }

    for(int i=0;i<10;i++)   cout<<arr[i]<<"->";

}


int main (){

    int arr[] = {0,1,3,0,4,3,2,5,9,5};

    // cout<<"Enter the element :- ";
    // int target = 4;
    // cin>>target;

    counting_sort2(arr,10);

    // for(int i : arr)
        // cout<<i<<" ";

    return 0;
}