#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* creatLL(int arr[],int n){
    Node* head;
    head = (Node*)malloc(sizeof(Node));
    head->data = arr[0];
    struct Node* mover = head;

    for(int i=1;i<n;i++){
        Node* temp;
        temp = (Node*)malloc(sizeof(Node));
        temp->data = arr[i];
        mover->next = temp;
        mover = temp;
    }
    mover->next = NULL;
    return head;
}

void displayLL(Node* head){
    while(head){
        printf("%d ",head->data);
        head = head->next;
    }
}

int lengthOfLL(Node* mover){
    int count=0;
    while(mover){
        count++;
        mover = mover->next;
    }
    return count;
}

bool elementIsPresentOrNot(Node* mover,int target){
    while(mover){
        if(target==mover->data)
            return true;
        mover = mover->next;
    }
    return false;
}

int main (){

    // struct Node = head;

    int arr[] = {1,2,3,4,5};

    struct Node* head;
    head = (Node*)malloc(sizeof(Node));

    head = creatLL(arr,5);

    displayLL(head);

    printf("\nThe length of Link List is :- %d",lengthOfLL(head));

    printf("\nthis is element is present or not :- %d",elementIsPresentOrNot(head,40));

    return 0;
}