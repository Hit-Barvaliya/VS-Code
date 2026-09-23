#include<iostream>
using namespace std;


// struct Node {
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1,Node* next1){
//         data = data1;
//         next = next1;
//     }
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };

// Node* creatLL(Node* head){

//     if(head == NULL){
//         head = new Node(1);
//     }

//     return head;
// }

int main(){

cout<<"Hello, World!";

    int n;
    cout<<"Enter the number of element in array :-  ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the value of element "<<i+1<<" :-  ";
        cin>>data;
        arr[i] = data;
    }

    int k;
    cout<<"Enter the value of k :-  ";
    cin>>k;

    
    int answer[n];
    for(int i=0;i<n;i++){
        int index = (i+1) % n;
        int sum = 0;
        for(int j=1;j<=k;j++){
          sum += arr[index];
          index = (index+1) % n; 
        }
        answer[i] = sum;
    }

    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }

}