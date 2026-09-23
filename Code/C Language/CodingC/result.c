#include<stdio.h>

int main()
{
    float m, p, c, e, comp, cp, pp, compp, pr;
    printf("enter maths marks : ");
    scanf("%f",&m);
    printf("enter physics marks : ");
    scanf("%f",&p);
    printf("enter chemistry marks : ");
    scanf("%f",&c);
    printf("enter english marks : ");
    scanf("%f",&e);
    printf("enter computer marks : ");
    scanf("%f",&comp);
    printf("enter physics particle marks : ");
    scanf("%f",&pp);
    printf("enter chemistry particle marks : ");
    scanf("%f",&cp);
    printf("enter computer pritacle marks : ");
    scanf("%f",&compp);
    p = (m + p + c + e + c + pp + cp + compp)*100/650;
    printf("percentage of exam : %f",p);
    return 0;
}