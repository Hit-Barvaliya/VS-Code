#include<stdio.h>


int main(){

    printf("Helo");

    int n;
    printf("Enter the size of an array :- ");
    scanf("%d",&n);

    int arr[n];
    printf("Insert all the element of an array :- ");
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        arr[i] = temp;
    }

    printf("Enter the limit :- ");
    int limit;
    scanf("%d",&limit);

    // sorting of array :- ---------------------
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum >= limit){
            sum -= limit;
            count++;
        }
    }

    if(sum > 0){
        count++;
    }

    printf("Total number of boats required is :- %d",count);

    
    return 0;
}