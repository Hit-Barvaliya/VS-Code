// binary search algorithm

#include<iostream>
#include<vector>
using namespace std;

// this is recursive approch of binary search

void binary1(vector<int> arr,int target,int low,int high){
      //   int mid = (low+high)/2;
      int mid = low + (high-low) / 2;
       
        if(low <= high){
            if(arr[mid] < target)
                binary1(arr, target, mid+1, high);
            else if(arr[mid] > target)
                binary1(arr, target, low, mid-1);
            else if (arr[mid] == target)
               //  System.out.println("Your answer is at index :- "+mid);
               cout<<"Your answer is at index :- "<<mid;
        }

}

int binarySearch(vector<int> v1,int target){
   int start = 0;
   int end = v1.size()-1;
   int mid;

   while(start<=end){
      mid = (start + end) / 2;

      if(v1[mid]<target){
         start = 1 + mid;
      } else if (v1[mid]>target){
         end = mid - 1;
      } else {
         return mid;
      }
   }

   return -1;
}

int main(){

   vector<int> v1 = {1,2,3,4,5,6,7,8,9};
   int tar1 = 8;

   vector<int> v2 = {1,2,3,4,5,6,7,8};
   int tar2 = 2;

   int ans1 = binarySearch(v1,tar1);
   cout<<ans1<<endl;

   int ans2 = binarySearch(v2,tar2);
   cout<<ans2<<endl;

   binary1(v2,tar2,0,v2.size()-1);


   return 0;
}
