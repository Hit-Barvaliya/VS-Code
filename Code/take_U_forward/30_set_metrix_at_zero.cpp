#include<iostream>
#include<vector>
// #include<bits\stdc++.h>
using namespace std;

void setrow(int arr[4][4],int row){
    for(int i=0;i<4;i++){
        if(arr[row][i] != 0)
            arr[row][i] = -1;
    }
}
void setcolum(int arr[4][4],int colum){
    for(int i=0;i<4;i++){
        if(arr[i][colum] != 0)
            arr[i][colum] = -1;
    }
}

void set_zero_metrix1(int arr[4][4]){
    // time complexity is O[n*m] + O[n+m] + O[n*m] so near about O[n^3]

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == 0){
                setrow(arr,i);
                setcolum(arr,j);
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == -1)
                arr[i][j] = 0;
        }
    }


}

void set_zero_metrix2(int arr[4][4]){
    // this is better colution

    // time-complexity is O[2*n^2]
    // space-complexiyt is O[n] + O[m]


    cout<<"Hello Hello"<<endl;
    int row[4] = {0},colum[4] = {0};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                colum[j] = 1;
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(row[i] == 1 || colum[j] == 1)
                arr[i][j] = 0;
            
        }
    }

}

void set_zero_metrix3(int arr[4][4]){

    /* ->> according to video
     * row[n] = row[..][0]
     * colum[n] = colum[0][..]
    */

    // row[n] ->> row[0][..]
    // colum[n] ->> colum[..][0]
    int col0 = 1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == 0){
                // this is for row
                arr[i][0] = 0;
                // this is for colum
                if(j != 0){
                    arr[0][j] = 0;
                } else {
                        col0 = 0;
                }
            }
        }
    }

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            if(arr[i][j] != 0){
                if(arr[0][j]==0 || arr[i][0]==0){
                    arr[i][j] = 0;
                }
            }
        }
    }

    if(arr[0][0] == 0)
        for(int i=0;i<4;i++)    arr[0][i] = 0;
        
    if(col0 == 0)
        for(int i=0;i<4;i++)    arr[i][0] = 0;

}

int main(){
    
    // int arr[4][4] = {{1,1,1,1},
    //                  {1,0,0,1},
    //                  {1,1,0,1},
    //                  {1,1,1,1}};

    // int arr[4][4] = {{1,1,1,1},
    //                  {1,0,1,1},
    //                  {1,1,0,1},
    //                  {1,0,0,1}};

    int arr[4][4] = {{1,1,1,1},
                     {1,0,1,1},
                     {1,1,0,1},
                     {0,1,1,1}};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Your output is :- "<<endl;
    // set_zero_metrix1(arr);
    // set_zero_metrix2(arr);
    set_zero_metrix3(arr);



    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}