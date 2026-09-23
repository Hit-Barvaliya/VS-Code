#include<stdio.h>

int main()
{
    int m,n,toe,count,maxr,maxc,minr,minc;
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
    toe=m*n;
    minr=0;minc=0;maxr=m-1;maxc=n-1;
    printf("\n");
    while (count<toe){
    for(int j=minc;j<=maxc && count<toe;j++){
    printf("%d ",arr[minr][j]);
    count++;
    }
    minr++;
    for(int i=minr;i<=maxr && count<toe;i++){
    printf("%d ",arr[i][maxc]);
    count++;
    }
    maxc--;
    for(int j=maxc;j>=minc && count<toe;j--){
    printf("%d ",arr[maxr][j]);
    count++;
    }
    maxr--;
    for(int i=maxr;i>=minr && count<toe;i--){
    printf("%d ",arr[i][minc]);
    count++;
    }
    minc++;
    }
    printf("\n");
    
    return 0;
}