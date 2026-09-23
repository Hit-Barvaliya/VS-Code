#include<stdio.h>   
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *ptr = &arr[0];
    int *ptr2 = &arr[5];
    int temp;
    for(int i=0,j=5;i<j;i++,j--){
        temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;
        ptr++;
        ptr2--;
    }
    

    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}