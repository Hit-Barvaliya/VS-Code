#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void marge(int arr[],int low,int mid,int high){

    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] >= arr[right]){
            temp.push_back(arr[right]);
            right++;
        } else {
            temp.push_back(arr[left]);
            left++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}


void mS(int arr[],int low,int high){

    int mid = (low + high) / 2;

    if(low >= high)     return ;

    mS(arr,low,mid);            // 1
    mS(arr,mid+1,high);         // 2
    marge(arr,low,mid,high);    // 3

}

void mergesort(int arr[],int n){
    mS(arr,0,n-1);
}


int main(){

    // time-complexity of marge-sort is O[nlogn-base 2] for all the cases.
    // space complexity of an this code is O[n].
    
    int n;
    cout<<"Enter the number of element if an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter all the element of an array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergesort(arr,n);
    
    cout<<"Your answer is :-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


/* This is java

import java.util.Vector;

public class demo {

    public static void margeArray(int arr[],int low, int mid, int high){

        Vector vs = new Vector<>();
        
        int i = low;
        int j = mid+1;

        while(i<=mid && j<=high){
            if(arr[i] <= arr[j]){
                vs.add(arr[i]);
                i++;
            } else {
                vs.add(arr[j]);
                j++;
            }
        }

        while(i<=mid){
            vs.add(arr[i]);
            i++;
        }
        while(j<=high){
            vs.add(arr[j]);
            j++;
        }

        for(int k=low;k<=high;k++){
            arr[k] = (int)vs.get(k-low);
        }


    }

    public static void margeSort(int arr[], int low, int high){

        int mid = (low + high) / 2;

        if(low >= high) return;

        margeSort(arr, low, mid);
        margeSort(arr, mid+1, high);
        margeArray(arr,low,mid,high);

    }

    public static void main(String string[]){

        int arr[] = {38, 27, 43, 3, 9, 82, 10};


        margeSort(arr,0,6);

        for(int i : arr)
            System.out.print(i+"=>");

    }
}


*/