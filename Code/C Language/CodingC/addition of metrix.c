#include<stdio.h>

int main()
{
    int r=2,c=2,arr[r][c],brr[r][c];
    printf("Enter the Frist metrix");
    printf("\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf ("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Enter the second metrix");
    printf("\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf ("%d",&brr[i][j]);
        }
    }
    printf("\n");
    printf("the addition of these metrix is");
    printf("\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}