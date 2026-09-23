#include<stdio.h>
int main(){
int n;
printf("Enter any number : ");
scanf("%d",&n);
int sum = 0, ld;
while(n!=0){
ld = n % 10;
sum = sum + ld;
n = n / 10;
}
printf("%d",sum);
return 0;
}