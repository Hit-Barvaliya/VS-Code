//FULL NAME IS MEMORY ALLOCATION
//ALL MEMORY ALLOCATON FUNCTION  ARE PRESENT IN STDLIB.H LIKE A MALLOC,CALLO, REALLOC, FREE
//ALLOCATE THE MEMORY IN SINGLE BLOCK
//THIS HAS ONE ARRUGUMENT
//BY DEFAULT INITIALIZATION IS GARBEJ VALUE
#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("enter the total number of value : ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    //we also write (int*)malloc(12); but that way is batter
//malloc returns the address in the from of void pointer so we need type casting
    printf("enter the values : ");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("print the values :");
    for(int i=0;i<n;i++){
        printf("\t%d",*(ptr+i));
    }
    free(ptr);
    return 0;
}