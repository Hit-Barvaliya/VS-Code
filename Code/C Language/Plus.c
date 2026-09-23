#include<stdio.h>
int main(){
    int n=5;
  
    for(int i=1;i<=n;i++){
        
        if(i==n/2+1){
            for(int j=1;j<=n;j++){
                printf("* ");
            }
        }
        else{
            for(int j=1;j<=n/2;j++){
            printf("  ");
        }

        printf("* ");

        }
        printf("\n");
    }
    return 0;
}