#include<stdio.h>
int main(){
    int n,hig,ind;
    printf("enter the number of players :");
    scanf("%d",&n);
    struct cricket{
    char player[n][20];
    char team[20];
    int run[n];
    }t1;

    printf("enter the team name : ");
    scanf("%s",t1.team);
    printf("enter the name of all player and his run : \n");
    for(int i=0;i<n;i++){
        scanf("%s",t1.player[i]);
        scanf("%d",&t1.run[i]);
    }
    hig = t1.run[0];
    for(int i=0;i<n;i++){
        if(hig<t1.run[i]){
            hig = t1.run[i];
            ind = i;
        }
    }  
    
    printf("\n-----\nthe heighest run from all the players name is  : %s\n",t1.player[ind]);
    printf("run is %d",t1.run[ind]);
    
    return 0;
}