#include<iostream>
#include<map>
using namespace std;

int hashing(int target,int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        if(target==arr[i])
            ans++;
    }
    return ans;

}

//in globle declaration max size of array is 10000000(10e7)
    // int arr2[10000000];
// in globle declaration of an array it was initialized by '0' by-default

int main(){

// inside the main function max size of array is 1000000(10e6)
    // int arr[1000000];
// in this system both are 100000000(10e8)


    // cout<<"This is to find the frequency from the array :- \n";
    // int n;
    // cout<<"size of an array :- ";
    // cin>>n;
    // int arr1[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr1[i];
    // }

    // int count,m;
    // cout<<"number of element which would you like to find :- ";
    // cin>>count;
    // int arr2[count];
    // for(int i=0;i<count;i++){
    //     cin>>m;
    //     arr2[i] = hashing(m,arr1,n);;
    // }    
    // cout<<"\nYour anser is :- ";
    // for(int i=0;i<count;i++){
    //     cout<<arr2[i]<<" ";
    // }

// <-----------------here we have second method to do that------------------------->

    // int n;
    // cout<<"Enter the size of an array :- ";
    // cin>>n;
    // int arr1[n];
    // cout<<"Enter all the element of an array :- ";
    // for(int i=0;i<n;i++){
    //     cin>>arr1[i];
    // }

    
    // cout<<"you can fine any number from 1 to 12.\n ";
    // int hash[13] = {0};

    // for(int i=0;i<n;i++){
    //     hash[arr1[i]]++;
    // }


    // cout<<"how many number would you like to find :- ";
    // int m;
    // cin>>m;
    
    // while(m--){
    //     int number;
    //     cin>>number;
    //     cout<<"in the array, there are "<<hash[number]<<" time. \n";
    // }

// <-----------------this is for character array------------------------->

//     string str;
//     cout<<"Enter the string in lower case :- ";
//     cin>>str;

//     // 'a' to 'z' is '97' to '122'
//     // total aplhabet is 26

//     int hash[26] = {0};

//     for(int i=0;i<str.length();i++){
//         char ch = str.at(i);
//         int x = (int)ch - 97;
//         hash[x]++;

//         // hash[str.at(i) - 'a'];
//     }

//     int x;
//     cout<<"How many latter would you like to find :- ";
//     cin>>x;
//     while(x--){
//         char ch;
//         cin>>ch;
//         int m = (int)ch - 97;
//         cout<<"There are "<<hash[m]<<" "<<ch<<" in the string\n";
// // second logic is not working
//         // cout<<"There are "<<hash[ch - 'a']<<" "<<ch<<" in the string\n";
//     }

// <----------------third way to solve this with map-------------------------->

// this method is also used in the character hashing

    int n;
    cout<<"Enter the size of an array :- ";
    cin>>n;
    map<int,int> mpp;
    int arr1[n];
    cout<<"Enter all the element of an array :- ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        mpp[arr1[i]]++;
    }

// this is may be seprate and we can also wrtie this in top
    // map<int, int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr1[i]]++;
    // }
    

    cout<<"how many number would you like to find :- ";
    int m;
    cin>>m;
    
    while(m--){
        int number;
        cin>>number;
        cout<<"in the array, there are "<<mpp[number]<<" time. \n";
    }
    /*
    * time-complexuty of map is O(logn) in all the cases while we we use unorder_map 
        it's time-complexity is O(1) in best case and average case and O(n) in worst case 
    * so most of the cases we use unorder_map but it takes much time at that time we use 
            we prefered map
    * in map we can store pair as key while unorder can not do this
    */

    /* here we havr three type of hashing
    * 1) Division Hashing   ==> this method is important and rest of two is not important
    * 2) Foldinh Method
    * 3) Mid squre Method
    */


    return 0;
}

// find the heighest and lowest frequency from the array