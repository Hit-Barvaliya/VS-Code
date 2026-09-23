#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int cycle=0,bus=0,riksha=0,vehical=0,amount=0;
void bus_f(){
    bus++,vehical++,amount += 100;
    printf("your entry was successful");
    getch();
    system("cls");
}
void cycle_f(){
    cycle++,vehical++,amount += 20;
    printf("your entry was successful");
    getch();
    system("cls");
}
void riksha_f(){
    riksha++,vehical++,amount += 50;
    printf("your entry was successful");
    getch();
    system("cls");
}
void delet(){
    bus=0,cycle=0,riksha=0,vehical=0,amount=0;
    printf("all details are deleted\n");
    getch();
    system("cls");
}
void status(){
    printf("\ntotal cycle is :- %d\n",cycle);
    printf("total riksha is :- %d\n",riksha);
    printf("total bus is :- %d\n",bus);
    printf("total number of vehical is :- %d\n",vehical);
    printf("total amount is :- %d\n",amount);
    getch();
    system("cls");
}
int main(){
    int input;
    while(1){
        printf("1. enter bus\n2. enter cycle\n3. enter riksha\n4. show status\n5. delet all data\n6. exit");
        printf("\n\nenter yuor choice :- ");
        scanf("%d",&input);

        if(input==1)    bus_f();
        else if (input==2)     cycle_f();
        else if (input==3)     riksha_f();
        else if (input==4)     status();
        else if (input==5)     delet();
        else if (input==6)     break;
        else{
            printf("enter valid choice.\n");
            getch();
            system("cls");
        }
    }
    return 0;
}