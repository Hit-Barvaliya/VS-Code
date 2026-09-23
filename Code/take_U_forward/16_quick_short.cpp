#include<iostream>
using namespace std;

int partation(int arr[],int low,int high){
    int pivot = arr[low];
    int i=low,j=high;
    while(i<j){
        // while(arr[i]>=pivot && i<=high-1)    ==> this condition for desending order
        while(arr[i]>=pivot && i<=high-1)
                i++;

        // while(arr[j]<=pivot && j>=low+1) ==> this condition for desending order
        while(arr[j]<=pivot && j>=low+1)
                j--;

        if(i<j)     swap(arr[i],arr[j]);

    }

    swap(arr[j],arr[low]);
    return j;

}


void qs(int arr[],int low,int high){

    int i = low;int j = high;
    if(i<j){
        int pIndex = partation(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }   
}



void quickshort(int arr[],int n){
    qs(arr,0,n-1);
}


int main(){

// the time-complexity of quick short is O[nlogn-base 2] for all the cases like a merge-sort
// space complexity is O[1] because no space is occupied in the rucersive call
    int n;
    cout<<"Enter the size of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the all the elemenet of an array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickshort(arr,n);

    cout<<"Your answer is :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*  This is in java

public class demo{

    public static int pivotIndex(int arr[], int low, int high){

        int povitElement = arr[low];

        int i = low+1;
        int j = high;

        while (i<=j) {
    
            while(i <= high && arr[i] < povitElement){
                i++;
            }
            
            while(j >= low && arr[j] > povitElement){
                j--;
            }
            
            if(i < j){
                // swap(arr[i],arr[j])
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
            
            // i++;j--;     //=> this is required when all element of array are same

        }

        // swap(arr[low],arr[j])
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;

        return j;

    }

    public static void quickSort(int arr[], int low, int high){

        if(low < high ) {    
            int pivot = pivotIndex(arr,low,high); 
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }

    }

    public static void main(String string[]){

        int arr[] = {4,4,4,4,4,4,4,4};

        quickSort(arr, 0 , arr.length-1);

        for (int i : arr)

            System.out.print(i+"=>");

    }
}

*/