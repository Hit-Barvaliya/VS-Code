#include<stdio.h>
#include<unistd.h>      // for sleep(),usleep()
#include<windows.h>     // for Sleep()->{hear 'S' is capital}

int main(){

    printf("for second :- ");
    for(int i=0;i<=10;i++){
        printf("%d ",i);
        sleep(1);   //this is used for number of second
    }
    
    printf("for microsecond :- ");
    for(int i=0;i<=10;i++){
        printf("%d ",i);
        usleep(50000);   //this is used for number of micro-second
    }

    printf("for milisecond :- ");
    for(int i=0;i<=10;i++){
        printf("%d ",i);
        Sleep(600);   //this is used for number of mili-second
    }
    return  0;
}