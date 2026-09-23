#include<stdio.h>

int main()
{
   int x1,y1,x2,y2,x3,y3;
   printf("Enter 1st dot's x1 : ");
   scanf("%d",&x1);
   printf("Enter 1st dot's y1 : ");
   scanf("%d",&y1);
   printf("Enter 2nd dot's x2 : ");
   scanf("%d",&x2);
   printf("Enter 2nd dot's y2 : ");
   scanf("%d",&y2);
   printf("Enter 3rd dot's x3 : ");
   scanf("%d",&x3);
   printf("Enter 3rd dot's y3 : ");
   scanf("%d",&y3);
   int m1 = (y2 - y1)/(x2 - x1), m2 = (x3 - x2)/(y3 - y2);
   if(m1==m2){
   printf("Dots are in a line");
   }
   else{
   printf("Dot's are not in a line");
   }
    return 0;
}