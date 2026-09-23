#include<stdio.h>

int main()
{
    int n,nsp,nst;
    printf("Enter any number : ");
    scanf("%d",&n);
    nsp=n/2;
    nst=1;
    for (int i=1;i<=n;i++){
    for (int j=1;j<=nsp;j++){
    printf(" ");
    }
   // if(i<(n+1)/2)  nsp--;
   // else nsp++;
    for (int k=1;k<=nst;k++){
    printf("*");
    }
    if(i<(n+1)/2) { nst+=2; nsp--;}
    else { nst-=2; nsp++;}
    printf("\n");
    }
    return 0;
}