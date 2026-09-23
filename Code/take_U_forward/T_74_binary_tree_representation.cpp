#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int main(){
    
    cout<<"Hello";

    struct Node* root = new Node(10);

    root->right = new Node(5);
    root->left = new Node(20);

    root->left->right = new Node(7);

    cout<<"Level 1 :- "<<root->data<<endl
        <<"Level 2 :- "<<root->left->data<<" "<<root->right->data<<endl
        <<"Level 3 :- "<<root->left->right->data;

}

// we have also tree representation  java ut that is not written in code.

