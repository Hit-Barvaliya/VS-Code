#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

    int data;

    struct Node* next;
}Node;


int main(){

    Node* head;

    
    struct Node* first;
    struct Node* second;

    // allocate the memory in the linklist in the heap
    head = (struct Node*)malloc(sizeof(struct Node));

    first = (struct Node*)malloc(sizeof(struct Node*));
    second = (struct Node*)malloc(sizeof(struct Node*));

    Node* head2;
    Node* first2;
    Node* second2;

    head2 = (Node*)malloc(sizeof(Node));
    first2 = (Node*)malloc(sizeof(Node));
    second2 = (Node*)malloc(sizeof(Node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next =  second;

    second->data = 4;
    second->next = NULL;


    head2->data = 1;
    head2->next = first2;

    first2->data = 3;
    first2->next = second2;

    second2->data = 4;
    second2->next = NULL;


    Node* ans = NULL;

    Node* temp1 = head;
    Node* temp2 = head2;
//---------------------------------------------------
Node dummy;
dummy.next = NULL;

Node *mover = &dummy;

while (temp1 != NULL && temp2 != NULL)
{
    if (temp1->data <= temp2->data)
    {
        mover->next = temp1;
        temp1 = temp1->next;
    }
    else
    {
        mover->next = temp2;
        temp2 = temp2->next;
    }
    
    mover = mover->next;
}

if (temp1 != NULL)
mover->next = temp1;

if (temp2 != NULL)
mover->next = temp2;

Node *ans = dummy.next;

mover = ans;

while(mover!=NULL){
    printf("%d ",mover->data);
    mover = mover->next;
}


//---------------------------------------------------


    return 0;
}