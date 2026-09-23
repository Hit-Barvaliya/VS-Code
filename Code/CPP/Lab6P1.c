#include<stdio.h>

int main(){
    
    int n;

    printf("Enter the size of array :- ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the value of array :- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    printf("[], ");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            // print sub-array :- 
            printf("[");
            for(int k=i;k<=j;k++){
                printf("%d ",arr[k]);
            }
            printf("],");

        }
    }

    return 0;
}