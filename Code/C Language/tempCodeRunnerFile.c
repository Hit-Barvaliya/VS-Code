#include<stdio.h>
void swap(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        arr[i]++;
    }
}
int main(){
    int a;
    printf("how much number you want to enter :- ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    // int z=arr[0];

    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]>arr[j]) swap(&arr[i],&arr[j]);  
        }
    }

    printf("after shorting :- \n");

    display(arr,a);
    printf("increment :- \n");

    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}