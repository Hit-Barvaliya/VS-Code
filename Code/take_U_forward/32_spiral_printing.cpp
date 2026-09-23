#include<iostream>
#include<vector>
using namespace std;

void spiral_print(vector<vector<int>> &arr){
// hear is only one solution for this

// time-complexity is O[n*m]
// space-complexity is O[n*m] to return all the element after store in new vector
    int n = arr.size();
    int m = arr[0].size();

    int top=0,right=m-1,bottom=n-1,left=0;

    while(left<=right && top<= bottom){
        
        for(int i=top;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;

        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        // this both if...else... condition is not nedd for the squre matrix
        if(top <= bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left <= right){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }

}

int main(){

    // int arr[6][6] = {
    //     {1 ,2 ,3 ,4 ,5 ,6},
    //     {20,21,22,23,24,7},
    //     {19,32,33,34,25,8},
    //     {18,31,36,35,26,9},
    //     {17,30,29,28,27,10},
    //     {16,15,14,13,12,11},
    // };

    vector<vector<int>> arr = {
        {1 ,2 ,3 ,4 ,5 ,6},
        {20,21,22,23,24,7},
        {19,32,33,34,25,8},
        {18,31,36,35,26,9},
        {17,30,29,28,27,10},
        {16,15,14,13,12,11},
    };

    spiral_print(arr);
    return 0;
}