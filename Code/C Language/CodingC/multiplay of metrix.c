#include<stdio.h>

int main()
{
    int m,n,p,q;
    int arr[2][3];
    int brr[3][4];
    int res[2][4];
    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
        res[i][j]=0;
            for (int k=0; k<3; k++) {
            res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
        printf("%d ",res[i][j]);
        }
        printf("\n");
        }
    return 0;
}