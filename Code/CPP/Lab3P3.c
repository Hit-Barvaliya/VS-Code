#include<stdio.h>

int main(){

    int n,m,a;

    printf("Enter value of A :-");
    scanf("%d",&a);

    printf("Enter the value of N :- ");
    scanf("%d",&n);

    printf("Enter the value of M :- ");
    scanf("%d",&m);

    int ans = 1;

    for(int i=1;i<=n;i++){
        ans = ans*a;
    }
        printf("The result is::::::::: %d", ans);


    if(m != 0){
        ans = ans % m;
    }

    printf("The result is: %d", ans);

    return 0;
}