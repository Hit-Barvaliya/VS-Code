#include<stdio.h>
#include<stdlib.h>

// here we use a typedef keyword before 'struct Node'
struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;

    // allocate the memory in the linklist in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //link head to the first
    head->data = 10;
    head->next = first;

    // link first to the second
    first->data = 20;
    first->next = second;

    // link second to the third
    second->data = 30;
    second->next = third;

    // third is last so it null
    third->data = 40;
    third-> next = NULL;
    printf("%d\n",head->data);
    printf("%d\n",first->data);
    printf("%d\n",second->data);
    printf("%d\n",third->data);

    return 0;
}