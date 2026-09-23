#include<stdio.h>

int solve(int i, int j){
    
    if(i<0 || j<0 || i<j) return 0;

    if(i==0 && j==0) return 1;

    return i + j;
}

int main(){

    printf("Hello World\n");


    return 0;
}