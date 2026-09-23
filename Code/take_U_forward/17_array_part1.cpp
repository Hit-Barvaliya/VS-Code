#include<iostream>
using namespace std;

int findLargest(int arr[],int n){
    /* ->we can also do this thing with the help of sorting but that's time-complexity
     O[nlogn] while this logic has O[n] time-complexity so we preferd this
     -> when array is sorting our last element is our answer */
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(largest<arr[i])
            largest = arr[i];
    }
    return largest;
}
int secondLargest(int arr[],int n){
    /* same reason as which is on above code
    in this code we can't say our second last element is answer while array is sorting
    */

    // int largest=arr[0];
    // for(int i=1;i<n;i++){
    //     if(largest<arr[i])
    //         largest = arr[i];
    // }
    // int largest2 = arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]==largest)
    //         continue;
    //     else if(largest2<arr[i])
    //         largest2 = arr[i];
    // }

    int largest=arr[0];
    int Slargest = -1;
    for(int i=1;i<n;i++){
        if(largest<arr[i]){
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>Slargest && arr[i]<largest) 
            Slargest = arr[i];
    } 
    return Slargest;
}
int secondSmallest(int arr[],int n){
    /* same reason as which is on above code
    in this code we can't say our second last element is answer while array is sorting
    */

    int smallest=arr[0];
    int Ssmallest = -1;
    for(int i=1;i<n;i++){
        if(smallest>arr[i]){
            Ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<Ssmallest && arr[i]>smallest) 
            Ssmallest = arr[i];
    } 
    return Ssmallest;
}



bool sortedOrNot(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1])
            return false;
    }
    return true;
}



void removeDuplicate(int arr[],int n){
/* -> we can solve this method with the help of set but it's time-complexity
     is O[nlogn+n] and sapce complexity is O[n].
    -> time complexity :- O[logn] is for insert the element in set and this is done in loop
                        which was run n time so O[nlogn] and after this all this element is 
                        stored in the array so O[n] total-complexity is :- O[nlogn+n]
    -> space-complexity :- O[n] we need an set which has same size as array for the worst case
*/

    // here we use two-pointer mathod
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    // return (i+1);

    for(int j=0;j<=i;j++)
        cout<<arr[j]<<" ";
}

int main(){

    int n;
    cout<<"Enter the size of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter all the element of an array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int ans = findLargest(arr,n);
    // cout<<"Your largest element is :- "<<ans;



    // int ans = secondLargest(arr,n);
    // cout<<"Yoour second largest element is :- "<<ans<<endl;

    // ans = secondSmallest(arr,n);
    // cout<<"Your secod Smallest element is :- "<<ans<<endl;


    
    // if(sortedOrNot(arr,n))    
    //     cout<<"Your array is sorted. \n";
    // else 
    //     cout<<"Your array is not sorted. \n";


    // this is working well when array is sorted
    cout<<"Your array without duplicate is :- ";
    removeDuplicate(arr,n);



    return 0;
}