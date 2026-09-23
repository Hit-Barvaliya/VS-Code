// --> to reverse an array
#include<iostream>
#include<vector>
using namespace std;


// void reverse(vector<int> &vec,int x,int y){
//     if(x>y)    return ;
//     swap(vec[x],vec[y]);
//     reverse(vec,x+1,y-1);
// }

void reverse2(int i,int arr[],int n){
    if(i >= n/2)    return ;
    swap(arr[i],arr[n-i-1]);
    reverse2(i+1,arr,n);
}

int main(){

    // vector<int> v1 = {1,2,3,4,5,6,7,8,9};

    // int x = 0;
    // int y = v1.size() - 1;

    // reverse(v1,x,y);

    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }

    int arr[] = {1,2,3,4,5,6,7,8,9};

    // we can find the time-complexity of recursion with this equation :- 
    // TC = total number of ReCall * work in each function

    // int * ptr = arr[0];

    reverse2(0,arr,9);
    for(int i : arr)    cout<<i<<" ";
    return 0;
}


// --> check the string is pelendrom or not

// #include<iostream>
// #include<string.h>
// using namespace std;

// bool check(int i,string &str){
//     if(i>=str.size()/2)  return true;
//     if(str[i]!=str[str.size()-i-1])  return false;
//        check(i+1,str);

//     //    if(i>=s.size()/2)  return true;
//     // if(s[i] == s[s.size() - i - 1])     check(i+1,s);
//     // else return false;

// }

// int main(){

//     string str = "madam";
//     string copy=str;
//     // int x = str.length();
//     // cout<<x;
//     cout<<check(0,str);

//     // if(copy==str)   cout<<"your string is palendrom :";
//     // else    cout<<"your string is not palendrom :";
//     return 0;
// }