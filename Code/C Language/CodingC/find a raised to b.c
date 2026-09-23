#include<stdio.h>

int main()
{
    int a,b,power;
    printf("Enter aadhar : ");
    scanf("%d",&a);
    printf("Enter ghat : ");
    scanf("%d",&b);
    power = 1;
    for(int i=1;i<=b-1;i++){
    power = power * a;
    }
    printf("tne number is : %d",power);
    return 0;
}