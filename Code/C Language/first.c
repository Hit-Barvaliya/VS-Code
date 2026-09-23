#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    
    int *ptr;
    
    ptr = (int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    printf("%d ",(ptr+i));
    
    
    ptr = (int*)malloc(6*sizeof(int));
    printf("\n\n");


    for(int i=0;i<6;i++)
        printf("%d ",(ptr+i));

    return 0;
}