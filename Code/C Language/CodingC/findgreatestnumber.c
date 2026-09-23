#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter 1st number : ");
scanf("%d",&a);
printf("Enter 2nd number : ");
scanf("%d",&b);
printf("Enter 3rd number : ");
scanf("%d",&c);
printf("Enter 4th number : ");
scanf("%d",&d);
if(a>b && a>c && a>d){
printf("%d is greatest number",a);
}
if(b>c && b>d && b>a){
printf("%d is greatest number",b);
}
if(c>d && c>a && c>b){
printf("%d is greatest number",c);
}
if(d>a && d>b && d>c){
printf("%d is greateat number",d);
}
return 0;
}