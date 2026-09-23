#include<stdio.h>

int main() {
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Ented the number of colum : ");
    scanf("%d",&m);
    for (int i=1; i<=n; i++) {
        for (int a=1; a<=m; a++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}