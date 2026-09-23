#include<stdio.h>
void revarse(int arr[]){
//int i=0,j=6,temp;
//while(i<j){
for (int i=0,j=6;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
//i++; j--;
}
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    revarse(arr);
    for (int i=0;i<7;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}