#include<stdio.h>

int main() {
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    //printf("Ented the number of colum : ");
    //scanf("%d",&m);
    for (int i=1;i<=n;i++){
    for (int j=1;j<=n-i;j++){
    printf(" ");
    }
    int a=1;
    for (int k=1;k<=2*i-1; k++){
    printf("%d",a);
    a++;
    }
    printf("\n");
    }
    return 0;
}