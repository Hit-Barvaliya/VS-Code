#include<stdio.h>


int main(){

    printf("Hello");

    int n;

    printf("Enter the size of an array :- ");
    scanf("%d", &n);


    int arr[n];
    printf("Enter all the elements of an array :- ");

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    


    return 0;
}