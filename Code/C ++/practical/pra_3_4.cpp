#include<iostream>
#include<string>
template <typename T>
void max(int)
using namespace std;
void make_arr(int* ptr,int x){
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i] = *ptr;
        ptr++;
    }
    int temp=arr[0];
    for(int i=0;i<x;i++){
        if(temp<arr[i])     temp = arr[i];
    }
    cout<<temp<<endl;
    
}
int main(){
    int arr[10] = {0,2,6,8,5,7,4,3,9,1};
    make_arr(&arr[0],10);
    return 0;
}