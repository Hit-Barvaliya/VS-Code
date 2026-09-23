#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<n; i++) {
        for (int j=0,k=n-1; j<k; j++,k--) {
            int temp=arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
    printf("\n\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}