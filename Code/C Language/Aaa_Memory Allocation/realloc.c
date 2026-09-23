//REALLOCATION OR RESIZE(increase/decrease) THE MEMORY
//IF WE NOT ALLOCATE THE MEMORY THIS SHOWE UNDEFINED BEHAVIOUR
// TWO ARRUGUMENT
/*IF WE INCREASE THE MEMORYBLOCK OF BLOCK, BLOCK WILL BECOME BIG BUT IF IT IS NOT
POSSIABLE IT WAS CREAT  NEW BLOCK AND COPY ALL THE DATA FROM OLD BLOCK TO NEW BLOCK
AND RETURN THE ADDRES OF NEW BLOCK*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the total number value : ");
    scanf("%d",&n);
    int *ptr;
    printf("enter the value : ");
    ptr = (int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    int *ptr2,m;
    printf("enter the new size : ");
    scanf("%d",&m);
    ptr2 = (int*)realloc(ptr,m*sizeof(int));
    printf("old pointer %p <-> new address %p\nthe value of new : ",ptr,ptr2);
    for(int i=0;i<m;i++){
        printf("%d ",*(ptr2+i));
    }

    return 0;
}