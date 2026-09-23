// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void leftRotationOfAnArray(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void leftRotationOfAnArrayDthTime1(int arr[],int n){
    /* -> time-complexity is O[n] + O[n-d] + O[d] = O[n+d]
       -> space-complexity is O[d]
    */
    int d;
    cout<<"Enter the number of rotation :- ";
    cin>>d;
    d = d % n;
    int temp[d];

    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i] = temp[i];
    }
// second option :- 
    // for(int i=n-d;i<n;i++){
    //     arr[i] = temp[i-(n-d)];
    // }
}

void leftRotationOfAnArrayDthTime2(int arr[],int n){
    int d;
    cout<<"Enter the number of rotation :- ";
    cin>>d;
    d = d % n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    
}


void rightRotationOfAnArray(int arr[],int n){
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void rightRotationOfAnArrayDthTime1(int arr[],int n){
    // this is not working
    cout<<"Enter the number of Rotation :- ";
    int d;
    cin>>d;
    d = d % n;

    int temp[d] = {0};
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=0;i<d;i++){
        arr[i] = arr[n-d+i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i+1] = temp[i];
    }    
}


void AllThe0ofArrayAtLast(int arr[],int n){
    // this is brute case (first thought which is comeing in our mind when we solve this proble first time)
    
    // time complexity is :- O[n] + O[v1.size] + O[n-v1.size] = O[2n]
    // space complexity is :- O[n] ==> for the worst case
    
    vector<int> v1;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            v1.push_back(arr[i]);
        }
    }
    for(int i=0;i<v1.size();i++){
        arr[i] = v1[i];
    }
    for(int i=v1.size();i<n;i++){
        arr[i] = 0;
    }
}

void AllThe0ofArrayAtLast2(int arr[],int n){
    // this is optimal solution
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }            
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}


void UnionOfTwoArray(int arr1[],int n1,int arr2[],int n2){
    // this is brute solution 

    // time-complexity is O[n1+n2] and 
    // space-complexity for the worst case is :- O[n1+n2] only for the logic, we have O[n1+n2] space to return the array
    set<int> s1;
    for(int i=0;i<n1;i++){
        s1.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s1.insert(arr2[i]);
    }
    cout<<"Your answer of thwo Union is :- ";
    for(int i : s1) 
        cout<<i<<" ";
    cout<<endl;
}

void UnionOfTwoArray2(int arr1[],int n1,int arr2[],int n2){
    // this is optimal solution

    // time-complexity is same as above O[n1+n2] but
    // space-complexity is O[1] for the logic , we have O[n1+n2] space to return the array
    vector<int> v1;

    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(v1.size() == 0 || v1.back() != arr1[i]){
                v1.push_back(arr1[i]);
            }
            i++;
        } else {
            if(v1.size() == 0 || v1.back() != arr2[j]){
                v1.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(v1.size() == 0 || v1.back() != arr1[i]){
                v1.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n2){
        if(v1.size() == 0 || v1.back() != arr2[j]){
                    v1.push_back(arr2[j]);
            }
            j++;   
    }

    for(int i : v1){
        cout<<i<<" ";
    }


}


void IntersactionOfTwoArray(int arr1[],int n1,int arr2[],int n2){
    // this is brust solution
    
    // time-complexity is O[n1*n2] 
    // space-complexity is O[n2] ==> this is dependetn of 'vis[]' vector ==> we can chose anyone both of them
    int vis[n2] = {0};
    
    vector<int> answer;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i] == arr2[j] && vis[j] == 0){
                answer.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if(arr1[i] < arr2[j]){
                break;
            }
        }
    }

    for(int i : answer)
        cout<<i<<" ";


}

void IntersactionOfTwoArray2(int arr1[],int n1,int arr2[],int n2){
    // this is optimal solution

    int i=0,j=0;
    vector<int> v1;
    while(i<n1 && j<n2){
        if(arr1[i] == arr2[j]){
            v1.push_back(arr1[i]);
            i++;    // hear 'j++;' is also working 
        } else if(arr1[i]<arr2[j]) {
            i++;
        } else {
            j++;
        }

    }
    for(int i : v1)
        cout<<i<<" ";

}

int main(){

    int n;
    cout<<"Enter the number of size of an array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter all the element of an array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // leftRotationOfAnArray(arr,n);

    // leftRotationOfAnArrayDthTime1(arr,n);

    // leftRotationOfAnArrayDthTime2(arr,n);

    // rightRotationOfAnArray(arr,n);

    // rightRotationOfAnArrayDthTime1(arr,n);

    // AllThe0ofArrayAtLast(arr,n);

    // AllThe0ofArrayAtLast2(arr,n);

    
    
    cout<<"\nYour answer is :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"from hear answer is for two different array which not taken by the user :- ";

    int arr1[]={1,1,2,3,4,5};
    int arr2[]={2,3,4,4,5,6};
    // UnionOfTwoArray(arr1,6,arr2,6);
    // UnionOfTwoArray2(arr1,6,arr2,6);

    // IntersactionOfTwoArray(arr1,6,arr2,6);
    IntersactionOfTwoArray2(arr1,6,arr2,6);
    

    return 0;
}