#include<stdio.h>

int x, y;

int findGCD(int amax,int bmin){



    if(bmin == 0){
        x = 1;
        y = 0;
        return amax;
    }

    int gcd = findGCD(bmin,amax % bmin);

    int temp = x;
    x = y;
    y = temp - (amax/bmin)*y;

    return gcd;

}


int main(){

    printf("240, 46 :- %d",findGCD(240,46));

    int a1,b1,gcd;

    printf("Enter the value of a is :- ");
    scanf("%d",&a1);

    printf("Enter the vaue of bvis :- ");
    scanf("%d",&b1);

    if(a1>b1){
        gcd = findGCD(a1,b1);
    } else {
        gcd = findGCD(b1,a1);
    }

    printf("The GCD of %d and %d is :- %d",a1,b1,gcd);

   printf("\nX :- %d",x);

   
   printf("\nY :- %d",y);

    return 0;
}