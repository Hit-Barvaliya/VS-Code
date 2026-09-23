#include<stdio.h>

int main(){
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
   for (int i=a;i<=(a*10);i=i+a){
   printf("%d ",i);
   }
    return 0;
}