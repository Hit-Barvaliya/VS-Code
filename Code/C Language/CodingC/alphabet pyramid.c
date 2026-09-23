#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (int i=1;i<=n; i++){
    for ( int j=1;j<=n-i;j++){
    printf(" ");
    }
    int b=65;
    for (int k=1;k<=i;k++){
    char ch = (char)b;
    printf("%c",b);
    b++;
    }
    for (int l=i-1;l>0;l--){
    int a=l+64;
    char ch = (char)a;
    printf("%c",a);
    a++;
    }
    printf("\n");
    }
    return 0;
}