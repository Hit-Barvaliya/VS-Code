#include<stdio.h>
// #include<algorithm>


int main (){

    int n = 0;

    int k = 0;
    printf("Enter the value of target :- ");
    scanf("%d",&k);

    printf("Enter the size of an array :- ");
    scanf("%d",&n);


    int arr[n];
    printf("Enter the values of an array :- ");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // Sort array :------------------

    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d => ",arr[i]);
    }

    printf("\n\n");
    // :-----------------------------

    int sum = 0;
    int I = -1,J = -1;
    for(int i=0,j=0;i<=n && j<=n;){
        
        // printf("\nThe value of sum is :- %d",sum);
        if(sum == k){
            printf("\nThe SUM == K APPLY SUM :- %d",sum);
            if(I-J > i-j || I == -1){
                I = i;
                J = j;
            }
            j++;
            sum = sum - arr[j];
        }
        if(sum > k){
            printf("\nThe SUM > K APPLY SUM :- %d",sum);
            sum = sum - arr[j];
            j++;
        }
        if(sum < k){
            printf("\nThe SUM < K APPLY SUM :- %d",sum);
            sum = sum + arr[i];
            i++;
        }
    }
// sorted array :- 1 => 2 => 2 => 3 => 3 => 4 => 
    printf("\nThe value of I is :- %d",I);
    printf("\nThe value of J is :- %d",J);

    printf("\nThe length is :- %d",I-J);

    

    return 0;
}