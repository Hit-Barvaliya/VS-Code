#include<iostream>
#include<algorithm>
using namespace std;

void rotat_metrix1(int arr[4][4]){
// this is bruet solution

// time-complexity is O[n^2]
// space-complexity is O[n^2]

    int temp[4][4] = {0};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            temp[j][4-1-i] = arr[i][j];
            // cout<<temp[i][j]<<" ";
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

}

void rotat_metrix2(int arr[4][4]){
    // this is optimal solution

    // total timepcomlexity is O[n/2 * n/2 + n * n/2]
    // space complexity is O[1]
    
    // time-complexity is O[n/2 * n/2]
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // time-complexity is O[n * n/2]
    for(int i=0;i<4;i++){
        for(int j=0;j<(4/2);j++){
            swap(arr[i][j],arr[i][3-j]);
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}

int main (){
    cout<<"Hello"<<endl;

    int arr[4][4] ={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {12,13,14,15}};

    // rotat_metrix1(arr);
    rotat_metrix2(arr);



    return 0;
}