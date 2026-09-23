#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct box {
    int height;
    int length;
    int width;
}box;

void check (box* b){

    if(b->height < MAX_HEIGHT){
        printf("%d\n",(b->height)*(b->width)*(b->length));
    }   
}

int main(){
    int n;
    scanf("%d",&n);
    box b[n];
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&b[i].length,&b[i].width,&b[i].height);
    }
    for(int i=0;i<n;i++){
        check(&b[i]);
    }
    
    return 0;
}

