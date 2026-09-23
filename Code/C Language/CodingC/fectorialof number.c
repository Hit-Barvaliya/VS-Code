#include<stdio.h>

int main()
{
    int n;
    int a=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    a = a * i;
    }
    printf("%d",a);
    return 0;
}