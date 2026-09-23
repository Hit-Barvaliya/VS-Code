#include<stdio.h>

int main()
{
    int n,temp;
    printf("Enter number of rows/colums");
    scanf("%d",&n);
    printf("Enter the Frist metrix");
    int arr[n][n];
    printf("\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf ("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}