#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter rows : ");
    scanf("%d",&m);
    printf("Enter colum : ");
    scanf("%d",&n);
    int arr[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<3;i++) {
        if (i%2==0) {
            for (int j=0; j<3; j++) {
                printf("%d ",arr[i][j]);
            }
        }
        else {
            for (int j=2; j>=0; j--) {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}