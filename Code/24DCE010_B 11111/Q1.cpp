#include<bits/stdc++.h>

using namespace std;


int main() {

    cout << "Hello"<<endl;

    int n, k;

    cout<<"Enter the value of n :- ";
    cin>>n;
    cout<<"Enter the value of k :- ";
    cin>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    int count = 0;

    for(int i=0;i<n;i++){

        int j = (i+1) % n;

        if(!(arr[i] < arr[j])){
            count++;
        }

    }

    cout<<"Total count :- "<<count<<endl;

    return 0;
}