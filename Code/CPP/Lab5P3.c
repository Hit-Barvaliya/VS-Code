#include<stdio.h>


int main(){

    printf("Hello");

    int n;
    printf("\n\nEnter the number of intervals :- ");
    scanf("%d",&n);

    int arr[n][2];

    for(int i=0;i<n;i++){
        printf("Enter the first interval :- ");
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
    }

    // sort all the intervals according to earlyEND to lateEND

    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][1] > arr[j][1]){
                int temp = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = temp;
                
                temp = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = temp;
            }
        }
    }
    
    int count = 0;
    int last = 0;
    for(int i=0;i<n;i++){

        if(last <= arr[i][0]){
            count++;
            last = arr[i][1];
        }

    }

    printf("Number of selected intervals is :- %d",count);


    // printf("\n\nAfter sorting the all the intervals ;- \n");

    // for(int i=0;i<n;i++){
    //     printf("( %d,%d) -> ",arr[i][0],arr[i][1]);
    // }

    // Example 1: Input: intervals = [[1,3],[2,4],[3,5],[6,8]]

    return 0;
}