#include<iostream>
#include<map>
using namespace std;

void MissingNumber(int arr[],int n){
// this is brute solution

// time complexity is O[n^2] for the worst case
// spcae-complexity is O[1]

for(int i=1;i<=n;i++){
        int flag = 0;
        for(int j=0;j<n;j++){
            if(i == arr[j]){
                flag =1;
                break;
            }
        }
        if(flag == 0){
            cout<<"Your missing from 1 to "<<n+1<<" is element is :- "<<i<<endl;
        }
    }    

}

void MissingNumber2(int arr[],int n){
    // this is beter then brute

    // time-complexity is O[n] + O[n] = O[2n] for the worst case
    // space complexity is O[n+1] for all the cases

    int hash[n+1] = {0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i] == 0){
            cout<<"Your missing element from 1 to "<<n+1<<" is :- "<<i<<endl;
        }
    }

}

void MissingNumber3(int arr[],int n){
    // this is first optimal solution

    // time complexity is O[n] for all the cases
    // spcae complexity is O[1]
    int sum = 0;
    int check = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    if(sum != check){
        cout<<"Your missing number from 1 to "<<n+1<<" is :- "<<check-sum<<endl;
    }

}

void MissingNumber4(int arr[],int n){
    // this is second optimal solution

    // time-complexity is O[n] and space-complexity is O[1]

    /*
     * this solution is better then third solution(Solution with 'sum') becaue when we have 10^5 
        number that time we can not store the sum in the integar data-type so we must use 'long'
        data-type which is consume some more memory then integar data-type.
    */
    int xor1 = 0,xor2 = 0;
    // for(int i=1;i<=n+1;i++){
    //     xor1 = xor1 ^ i;
    // }
    // for(int i=0;i<n;i++){
    //     xor2 = xor2 ^ arr[i];
    // }

    // second option
    for(int i=0;i<n;i++){
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i+1);
    }
    xor2 = xor2 ^ (n+1);

    if(xor1^xor2){
        cout<<"Your missing element from 1 to "<<n+1<<" is :- "<<(xor1^xor2)<<endl;
    }
}


void MinimumConstant1(int arr[],int n){
    int count = 0,max = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
             count++;
             if(max<count)      max = count;
            
        } else{ 
                count = 0;
        }
    }
    // if(max<count)   max = count;

    cout<<"Your anwer is :- "<<max<<endl;   
}


void AppearOnceInArray(int arr[],int n){
    /* -> for the brute case we use nested loop to solve this problem
    * time-complexity is O[n^2] and space-complexity is based in array element
    */

    /* -> for the better case we use hash array.
    * time-complexity is O[3n]. First O[n] is to find the maximum element form the array. Second O[n] is to increase the value of hash arra. Third O[n] is to find the which hash-element has only one count
    * space complexity is O[max_element] is based on the value of an array
    */
   /* -> in the batte solution we can also use map(order or unorder)
    * space complexity is based on the value of an array (how many unique element we have)
    * time-complexity is depend on the type of map
        ==> for order map :- O[nlogm] O[n] is to run the loop and O[logm] is to creat an map
        ==> for unorder map :- O[n*m] O[n] is to run the loop and O[m] is to creat an map
   */

   map<int,int> m1;
   for(int i=0;i<n;i++){
    // m1.insert(arr[i]);
    m1[arr[i]]++;
   }
   for(auto it : m1){
    if(it.second == 1){
        cout<<"Your answer is :- "<<it.first<<endl;
    }
   }

}





int main(){

    int arr1[] = {1,2,4,5,6};
// in all these case we give array which have only on number is missing.
    // MissingNumber(arr,5);

    // MissingNumber2(arr,5);

    // MissingNumber3(arr,5);

    // MissingNumber4(arr1,5);


    int arr2[] = {1,1,0,1,1,1,0,1,1};
// in this case we give only '1 or '0' in the array
    MinimumConstant1(arr2,9);

    
    int arr3[] = {1,1,2,3,3,4,4,5,5};
    AppearOnceInArray(arr3,9);







   

    return 0;
}