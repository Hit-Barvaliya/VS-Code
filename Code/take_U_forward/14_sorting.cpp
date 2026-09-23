#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    // in this sorting we find the smallest value from the array in put at start

    // time complexity of selection sort is O[n^2] for all the cases
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
                min = j;
        }
        swap(arr[i],arr[min]);
    }
}

void bubble_sort(int arr[], int n){
    // -> The word 'Bubble' comes from how this algorithm works, it makes the highest values 'bubble up'

    // -> in this sorting we take two value step-by-step and ckeck value is big or not and if value is big then do swap
    //          at this way we put the biggest at the end of the array

    // ==> in this code do reverse logic 

    // time-complexity of bubble_sort is O[n^2] for wost case and average case but for best case is O[n]
    
    // for(int i=n-1;i>0;i--){
    //     int didswap = 0;
    //     for(int j=0;j<i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //             didswap = 1;
    //         }
    //     }
    //     if(didswap == 0)    
    //         break;
    //     cout<<"Run :- \n";
    // }

    for(int i=0;i<n;i++){
        int didswap = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap++;
            }
        }
        if(didswap == 0){
            break;
        }
    }


}


void insertation_sort(int arr[],int n){


    // time-complexity is O[n^2] for worst case and average case but for the best case is O[n]{same as bubble sort}
    // example for best case of insertation & bubble sort  :- 1,2,3,4,5,6 ==> which was alreasdy sorted
    
        // this is also work :- 
            // if(arr[i]<arr[i-1]){
            //     swap(arr[i],arr[i-1]);
            //     for(int j=i-1;j>0;j--){
            //         if(arr[j]<arr[j-1])
            //             swap(arr[j],arr[j-1]);
            //     }
            // }
            
    for(int i=1;i<n;i++){

        for(int j=i
            ;j>0;j--){
            
                if(arr[j]<arr[j-1])
                    swap(arr[j],arr[j-1]);
        }
    }
        


// this is from chat-gpt

//     for (int i = 1; i < n; i++) { 
//     int key = arr[i]; 
//     int j = i - 1; 
//     while (j >= 0 && arr[j] < key) { 
//         arr[j + 1] = arr[j]; 
//         j--; 
//     } 
//     arr[j + 1] = key; // ✅ Fix: should be j + 1
// }

}


int main(){

    // int n;
    // cout<<"Enter the array the size of an array :- ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    int arr[] = {5,4,3,2,1};


    // selection_sort(arr,n);
    // bubble_sort(arr,5);
    insertation_sort(arr,5);

    for(int i : arr)
        cout<<i<<" ";




    return 0;
}