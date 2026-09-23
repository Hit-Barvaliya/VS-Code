#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x) , next(nullptr){};
    ListNode(int x, ListNode *next) : val(x) , next(next) {};
};

ListNode* createLL(vector<int> v){

    ListNode *head = new ListNode(v[0]);
    ListNode *temp = head;

    for(int i=1;i<v.size();i++){
        ListNode *newNode = new ListNode(v[i]);
        temp->next = newNode;
        temp = temp->next;
    }

    return head;
}

ListNode* insertAtEnd(ListNode *e, int val){

    if(e == nullptr){
        ListNode *newNode = new ListNode(val);
        return newNode;
    }

    ListNode *newNode = new ListNode(val);
    ListNode *mover = e;
    
    while(mover->next != nullptr){
        mover = mover->next;
    }

    mover->next = newNode;

    return e;

}

int main(){

    cout << "Hello World!" << endl;

    int n1 , n2;

    cout<<"enter the value of n1 and n2"<<endl;
    cin >> n1 >> n2;

    vector<int> v1(n1), v2(n2);

    cout<<"Enter the values of vector n1"<<endl;
    for(int i = 0; i < n1; i++){
        cin >> v1[i];
    }

    cout<<"Enter the values of vector n2"<<endl;
    for(int i = 0; i < n2; i++){
        cin >> v2[i];
    }

    ListNode *head1 = createLL(v1);
    ListNode *head2 = createLL(v2);

    ListNode *temp = head1;

    while(temp != nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

    temp = head2;
    while(temp != nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

    // from hear we start to  merge to linklist 


    ListNode *ans = nullptr;
    ListNode *mover = nullptr;

    ListNode *temp1 = head1;
    ListNode *temp2 = head2;


    while(temp1 != nullptr && temp2 != nullptr) {
        // cout<<"First loop"<<endl;
        if(temp1->val < temp2->val){
            ans = insertAtEnd(ans,temp1->val);
            temp1 = temp1->next;
        } else {
            ans = insertAtEnd(ans,temp2->val);
            temp2 = temp2->next;
        }
        
    }
    
    while(temp1 != nullptr){
        // cout<<"temp1 loop"<<endl;
        ans = insertAtEnd(ans,temp1->val);
        temp1 = temp1->next;
        
    }
    
    
    while(temp2 != nullptr){
        // cout<<"temp2 loop"<<endl;
        ans = insertAtEnd(ans,temp2->val);
        temp2 = temp2->next;
    }

    mover = ans;
    
    while(mover){
        cout << mover->val << " ";
        mover = mover->next;
    }



    return 0;
}