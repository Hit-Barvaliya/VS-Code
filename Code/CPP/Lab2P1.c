#include<stdio.h>

int main(){


    int n;
    printf("Enter the size of an array :- ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter all the elements of an array :- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sum = 0;

    int max = 0;
    int min = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];

        if(max < arr[i])
            max = arr[i];

        if(min > arr[i]){
            min = arr[i];
        }

    }

    int target = max*(max+1)/2;

    int ans = target - sum;

    printf("Missing Number is :- %d",ans);

    

    return 0;
}