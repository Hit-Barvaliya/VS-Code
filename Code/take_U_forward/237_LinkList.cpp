#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertarray2LL(vector<int> &arr){

    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void displayLL(Node* mover){

    while(mover){
        cout<<mover->data<<" ";
        mover = mover->next;
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
        if(mover->data==target)
            return true;
        mover = mover->next;
    }
    return false;
}

int main(){

    vector<int> v1 = {2,5,8,7};
    // Node* n = new Node(v1[0],nullptr);
    // cout<<n->data;

    Node* head = convertarray2LL(v1);
    cout<<head->data;

    cout<<"\nYour Link List is :- ";
    displayLL(head);

    cout<<"\nLength of Link List is :- "<<lengthOfLL(head);

    cout<<"\nIf element is present return 1 else return 0 :- "<<elementIsPresentOrNot(head,8);



    return 0;
}
