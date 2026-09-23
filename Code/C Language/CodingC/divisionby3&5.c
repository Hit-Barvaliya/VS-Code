#include<stdio.h>
int main(){
int a;
printf("Enter the number");
scanf("%d",&a);
if(a%5==0 && a%3==0){
printf("This number is divisible by 5 & 3");
}
else{
printf("This number is not divisible by 5 & 3");
}
return 0;
}