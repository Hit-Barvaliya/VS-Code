#include<stdio.h>
int ways(int cr,int cc,int fr,int fc) {
    int downways=0;
    int rightways=0;
    if (cr==fr && cc==fc) return 1;
    if (cr<fr && cc<fc) {
        downways += (cr+1,cc,fr,fc);
        rightways += (cr,cc+1,fr,fc);
    }
    if (cr==fr) {
        rightways += (cr,cc+1,fr,fc);
    }
    if (cc==fc) {
        downways += (cr+1,cc,fr,fc);
    }
    
    int  totalways=rightways+downways;
    return totalways;
}
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int noways=ways(1,1,n,m);
    printf("%d",noways);
    return 0;
}