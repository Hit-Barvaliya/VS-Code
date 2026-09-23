#include<stdio.h>

int main()
{
    int a,b=3;
    printf("Enter number of students : ");
    scanf("%d",&a);
    int arr[a][b];
    for (int i=0;i<a;i++){
    for (int j=0;j<b;j++){
    scanf("%d",&arr[i][j]);
    }
    }
    printf("\n");
    for (int i=0;i<a;i++){
    for (int j=0;j<b;j++){
    printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    return 0;
}