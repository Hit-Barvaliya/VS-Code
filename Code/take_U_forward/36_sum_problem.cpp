/* Rulse of triplets
 * arr[i] + arr[j] + arr[k] = 0
 * i!= j != k   ==> meaning of this we can not take the same element more then one times
 * duplicate triplets are not allowed
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_all_triplate1(int arr[],int n){
// this is brute solution

// time-complexity is O[n^3]*O[number of unique triplate]   ==> sorting time is not consider because of sorting of only three element
// space-complexity is 2*O[number of unique triplate]

    set<vector<int>> ss;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    ss.insert(temp);
                }
            }
        }
    }


    vector<vector<int>> answer(ss.begin(),ss.end());
    /* <== both are throw an error ==>
    vector<vector<int>> answer = (ss.begin(),ss.end());
    vector<vector<int>> answer (ss.begin(),ss.end());
    */
    

    // this is only print answer
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }

}

void print_all_triplate2(int arr[],int n){
    // this is better solution

    // time-complexity is O[n^2]*O[log m] (m=>size of set)
// space-complexity is O[n] + 2*O[number of unique triplate] => O[n] because in the first term we use n-1 size set

    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hasset;
        for(int j=i+1;j<n;j++){
            int third = -(arr[i]+arr[j]);
            if(hasset.find(third) != hasset.end()){
                vector<int> temp = {arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hasset.insert(arr[j]);
        }
    }



    vector<vector<int>> answer(st.begin(),st.end());
    // this is only print answer
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }

}

void print_all_triplate3(int arr[],int n){
// this is optimal solution

// time-complexity is O[n*logn] + O[n^2]
// space-complexity is O[num. of uni. ele.] => this is return the answer

    // we need to provide sorted array for this function
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[n-1])   continue;
        int j = i+1;
        int k = n-1;
        // this is three pointer approch
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum < 0){
                j++;
                while(arr[j] == arr[j-1])   j++;
            } else if(sum > 0){
                k--;
                while(arr[k] == arr[k+1])   k--;
            } else {
                vector<int> temp = {arr[i],arr[j],arr[k]};
                st.insert(temp);
                j++;
                k--;
                while(arr[j] == arr[j-1])   j++;
                while(arr[k] == arr[k+1])   k--;
            }
        }
    }


    vector<vector<int>> answer(st.begin(),st.end());
    // this is only print answer
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    } 


}
 

int main(){
// -1,0,1,2,-1,-4
    int arr[] = {-4,-1,-1,0,2,4};
    // print_all_triplate1(arr,6);
    print_all_triplate2(arr,6);
    int arr2[] = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    print_all_triplate3(arr,6);
    // print_all_triplate3(arr2,10);


    return 0;
}




// #include <iostream>
// #include <chrono>
// using namespace std;
using namespace std::chrono;

// int main() {
//     // Start time
//     auto start = high_resolution_clock::now();

//     // Code to measure
   
//     int arr[] = {-1,0,1,2,-1,-4};
//     print_all_triplate2(arr,6);
    

//     // End time
//     auto end = high_resolution_clock::now();

//     // Calculate duration
//     auto duration = duration_cast<microseconds>(end - start);

//     // cout << "Sum = " << sum << endl;
//     cout << "Execution time: " << duration.count() << " microsecond" << endl;

//     return 0;
// }
