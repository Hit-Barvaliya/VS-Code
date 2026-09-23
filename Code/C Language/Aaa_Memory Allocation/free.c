/*AFTER THE USE FREE FUCTION IF WE TYRY TO WRITE AGAING THAT POINTER IT GIVES ANY GARBEJ
VALUE OR MAY YOUR PROGRAMME WILL CLOSE OR SHUT DOWN THE SYSTEM*/
//WE CAN USE MANY TIMES THIS FUNCTION
#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    int *ptr;
    ptr = (int*)malloc(3*sizeof(int));
    printf("\n enter the value : ");
    for(int i=0;i<3;i++){
        scanf("%d",(ptr+i));
    }
    free(ptr);
    printf("\n enterd valuses are : ");
    for(int i=0;i<3;i++){
        printf("%d  ",*(ptr+i));
    }
    //free(ptr);
    return 0;
}