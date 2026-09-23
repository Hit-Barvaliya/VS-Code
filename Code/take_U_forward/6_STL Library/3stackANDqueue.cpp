// #include<iostream>
// #include<stack>
#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int>   sta;
// to add new element in stack form
    sta.push(1);
    sta.push(2);
    sta.push(3);
    sta.push(4);
    sta.push(5);
    sta.push(6);
// it will store like this way in container
//follow the LIFO rule(last in first out)
/*
    |   6   |
    |   5   |
    |   4   |
    |   3   |
    |   2   |
    |   1   |
    ---------

*/
    cout<<sta.top();    //6

    sta.pop(); //{5,4,3,2,1}
    //to delet top element form the continer

    cout<<sta.top();    //5
    //to asscess the top element from the continer

    cout<<sta.empty();  //false so it will return 0
    //check stack is empty or not

    cout<<"print\n";
    // for(int i=0;i<5;i++){
    //     cout<<sta.top()<<" ";
    //     sta.pop();
    // }
    stack<int> sta1;
    sta1.push(1);
    // stack<int> sta1. sta2;
    sta1.swap(sta);

    cout<<"after swapping :- ";
    for(int i=0;i<sta.size();i++){
        cout<<sta.top()<<" ";
        sta.pop();
    }

    cout<<"\n<----------------------->\nFOR EXPLAIN QUEUE\n<------------------------------->\n";
//quque is working on FIFO(First In First Out)
    queue<int> q1;
    q1.push(1);     //{1}
    q1.push(2);     //{2,1}
    q1.push(3);     //{3,2,1}
    q1.push(4);     //{4,3,2,1}
    q1.push(5);     //{5,4,3,2,1}

    q1.back() += 4;     //5+4
    cout<<q1.back()<<endl;    //print 9
    
    cout<<q1.front()<<endl;     //print 1

    q1.pop();

    cout<<"after pop in satck :- "<<q1.front()<<endl;

    cout<<"\n<----------------------->\nFOR EXPLAIN PRIORITY QUEUE\n<------------------------------->\n";

    priority_queue<int> pq;
    pq.push(2);
    pq.push(5);
    pq.push(8);
    pq.emplace(10);     //{10,8,5,2}
    
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<"after pop :- "<<pq.top();

    priority_queue<int, vector<int>, greater<int>> ppp;

    ppp.push(2);    //{2}
    ppp.push(5);    //{2,5}
    ppp.push(8);    //{2,5,8}
    ppp.push(10);   //{2,5,8,10}

    cout<<ppp.top()<<endl;

    return 0;
}