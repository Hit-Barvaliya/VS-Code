#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

ListNode* CreateLL(vector<int> el){

    if(el.empty()){
        return nullptr;
    }

    ListNode* head = new ListNode(el[0]);
    ListNode* current = head;

    for(int i=1;i<el.size();i++){
        current->next = new ListNode(el[i]);
        current = current->next;
    }

    return head;
}

int main(){
    
    int n1 , n2;

    cin >> n1 >> n2;

    vector<int> d1(n1),d2(n2);

    for(int i=0;i<n1;i++){
        cin >> d1[i];
    }

    for(int i=0;i<n2;i++){
        cin >> d2[i];
    }

    ListNode* list1 = CreateLL(d1);
    ListNode* list2 = CreateLL(d2);

    vector<int> vals ;

        while(list1){
            vals.push_back(list1->val);
            list1 = list1->next;
        }
        
        while(list2){
            vals.push_back(list2->val);
            list2 = list2->next;
        }

        sort(vals.begin(),vals.end());

        if (vals.empty()) {
            cout << "Empty list" << endl; 
            return 0;
        }

        int n = vals.size();

        ListNode* ans = new ListNode(vals[0]);
        ListNode* temp = ans;

        for(int i=1;i<n;i++){
            temp->next = new ListNode(vals[i]);
            temp = temp->next;
        }

        while(ans!=nullptr){
            cout << ans->val <<",";
            ans = ans->next;
        }

        return 0;

}
