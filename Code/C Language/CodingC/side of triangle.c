#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the length of 1st side");
scanf("%d",&a);
printf("Enter the length of 2nd side");
scanf("%d",&b);
printf("Enter the length of 3rd side");
scanf("%d",&c);
if(a+b>c && a+c>b && b+c>a){
printf("this is the three sides of triangle");
}
else{
printf("no triangle is possible in this size");
}
return 0;
}