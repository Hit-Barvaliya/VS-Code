#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node*));
    head->data = 10;

    printf("%d",head->data);

    return 0;
}