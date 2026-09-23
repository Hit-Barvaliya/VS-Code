//FULL NAME IS CONTIGUOES ALLOCATION
//USED TO ALLOCATE THE MEMORY IN MULTIPAL BLOCKS OF MEMORY & EACH BLOCK HAS SAME SIZE
//THIS HAS TWO ARRUGUMENT
//BY DEFALUT INITALIZATION IS '0'
#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("enter the total number of value : ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));

    printf("enter the values : ");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("print the values :");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
        printf("%d\n",(ptr+i));
    }
    free(ptr);
    return 0;
}

/*-----programme for int and float-------
#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<5;i++){
        printf("%d  ",*(ptr+i));
    }
    free(ptr);

    float *ptr2;
    ptr2 = (float*)malloc(10*sizeof(float));
    for(int i=0;i<10;i++){
        scanf("%f",(ptr2+i));
    }

    for(int i=0;i<10;i++){
        printf("%f  ",*(ptr2+i));
    }
    free(ptr2);
    return 0;
}

*/