#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of an array :- ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the valus of K :- ");
    scanf("%d",&k);

    int i=0;

    int ans[n];

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=1;j<=k;j++){
            int ind = (i+j)%n;
            sum += arr[ind];
        }
        ans[i] = sum;

    }

    for(int i=0;i<n;i++){
        printf("%d => ",ans[i]);
    }



    return 0;
}