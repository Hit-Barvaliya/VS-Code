#include<stdio.h>

int main()
{
    int n;
    int a=1,b=1,sum = 1;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n>=1)
      { printf("The 1st number is : 1\n");}
    if(n>=2)
      {printf("The 2nd number is : 1\n");}
    for(int i=1;i<=n-2;i++){
    sum = a + b;
    a=b;
    b=sum;
    i = i + 2;
    printf("the %dth number is : %d \n",i,sum);
    i = i - 2;
    }
    return 0;
}