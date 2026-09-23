// this is for n/3 majority element

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_majority_element1(int arr[],int n){
    // this is brute solution
    
    // time-complexity is O[n^2]
    // space-complexity is O[1] ==> O[2] near about
    set<int> ans;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count > (n/3) && ans.count(arr[i])==0)
            ans.insert(arr[i]);
    }

    for(auto i : ans)
        cout<<i<<" ";

}

void print_majority_element2(int arr[],int n){
// this is second solution

// time-complexity is near about O[n^2]
// space-complexity is same as above
    set<int> ss;
    for(int i=0;i<n;i++){
        if(ss.count(arr[i])==0){
            int count = 0;
            for(int j=0;j<n;j++){
                if(arr[i] == arr[j])
                    count++;
            }
            if(count>n/3)
                ss.emplace(arr[i]);
        }
        if(ss.size() == (n/3))  break;
    }
    for(auto i : ss)
        cout<<i<<" ";
}

void print_majority_element3(int arr[],int n){
// this is better solution

// time-complexity is O[n] * (O[n] / O[long] => based on type of map)
// space-complexity is O[n] for the worst case

    map<int,int> mpp;
    vector<int> ans;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        // cout<<"=>"<<arr[i];
        if(mpp[arr[i]] > (n/3)){
            ans.push_back(arr[i]);
        }
        if(ans.size() > (n/3))
            break;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}

void print_majority_element4(int arr[],int n){
    // this is optimal solution

    // time-complexity is O[2n]
    // space-complexity is O[1]

    // this is solution is similar to the 23_majority_element's optimal solution
    // this will work if an only if we have less then 9 element
    int count1 = 0,count2 = 0,element1 = 0,element2 = 0;
    for(int i=0;i<n;i++){
        if(count1 == 0 && element2 != arr[i]){
            element1 = arr[i];
            count1++;
        } else if (count2 == 0 && element1 != arr[i]){
            element2 = arr[i];
            count2++;
        } else if (element1 == arr[i]){
            count1++;
        } else if (element2 == arr[i]){
            count2++;
        } else {
            count1--;
            count2--;
        }
    }

    vector<int> ans;
    count1 = 0,count2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==element1)    count1++;
        if(arr[i]==element2)    count2++;
    }
    if(count1 > (n/3))  ans.push_back(element1);
    if(count2 > (n/3))  ans.push_back(element2);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

int main (){

    int arr[] = {1,1,1,3,3,2,2,2};

    // print_majority_element1(arr,8);
    // print_majority_element2(arr,8);
    // print_majority_element3(arr,8);
    print_majority_element4(arr,8);


    return 0;
}