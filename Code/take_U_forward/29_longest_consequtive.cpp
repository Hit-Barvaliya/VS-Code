#include<iostream>
#include<bits\stdc++.h>
using namespace std;

bool leanersearch(vector<int> arr,int target){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] == target)
            return true;
    }

    return false;
}

int longest_consequtive_subarray1(vector<int> arr){
// this is bruet solution 

// time-complexity is O[n^2] near about
// space-complexity is O[1] fr the worst case

    int maxlength = 1;

    int n = arr.size();
    for(int i=0;i<n;i++){
        int n = arr[i];
        int length = 1;
        while(leanersearch(arr,n+1) == true){
            n = n + 1;
            length ++;
        }
        maxlength = max(maxlength,length);
    }

    return maxlength;
}

int longest_consequtive_subarray2(vector<int> arr){
    // this is better solution

    // we need sorted array for this
    sort(arr.begin(),arr.end());

    int count = 0,longest = INT16_MIN,prenum = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]-1 == prenum){
            count++;
            prenum = arr[i];
        } else if (arr[i] != prenum){
            count = 1;
            prenum = arr[i];
        }
        longest = max(longest,count);
    }
    
    return longest;
}

int longest_consequtive_subarray3(vector<int> arr){
    // this is optimal solution

    // time-complexity is O[3n] :- explination give below
    // space-complexity is O[n] for the worst case

    int n = arr.size();
    if (n == 0) return 0;
    int longest = INT16_MIN;

    unordered_set<int> sc;
    // time-complexity is O[n] hear
    for(int i : arr)
        sc.insert(i);

    // time-complexity is O[n] hear
    for(auto it : sc){
        if(sc.find(it-1) == sc.end()){
            int count = 1;
            int x = it;
            // -> time-complexity is O[n] for all the while loop because this loop will run when 
            //          it was the first element of the sequence. it will not every time.
            while(sc.find(x+1) != sc.end()){
                count++;
                x++;
            }
            longest = max(longest,count);
        }
    }
    return longest;
}

int main(){
    
    vector<int> v1;
    v1.push_back(102);
    v1.push_back(4);
    v1.push_back(100);
    v1.push_back(101);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(5);

    // cout<<longest_consequtive_subarray1(v1);
    // cout<<longest_consequtive_subarray2(v1);
    cout<<longest_consequtive_subarray3(v1);
    
    return 0;
}