#include<stdio.h>

int main(){
    // printf("Hello");
    
    int n = 0;

    scanf("%d",&n);

    int temp = n;

    int count = 0;
    printf("number is :- %d",temp);
    
    for(int i=5;i<=temp;i*=5){

        while(n>0){
                n = n / i;
                count = count + n;
        }
        temp = n;

    }

    printf("number of trailing number is  :- %d",count);

    return 0;
}
