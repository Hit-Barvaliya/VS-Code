#include<stdio.h>
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
int main(){
    int n,x;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i>n)     x = min(2*n-i,j);
            else if(j>n)        x = min(i,2*n-j);
            else        x = min(i,j);
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}