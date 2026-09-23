
#include<bits/stdc++.h>

using namespace std;


int main() {

    cout << "Hello"<<endl;

    cout<<endl<<"Enter the number of events :- ";
    int n;
    cin>>n;

      
    int start[n],end[n],cost[n];
    float rp[n];
    cout<<"Enter all the valuse :- "<<endl;
    for(int i=0;i<n;i++){
            cin>>start[i]>>end[i]>>cost[i];
    }
    
    
    // hear we do sroting according to the revenue per hour
    // according to the revenue we also change the start and end array
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){

   
        if(end[i] >= end[j]){
            float temp = start[i];
            start[i] = start[j];
            start[j] = temp;
         
            temp = end[i];
            end[i] = end[j];
            end[j] = temp;
            
            temp = cost[i];
            cost[i] = cost[j];
            cost[j] = temp;
        }

    }
   }


   // hear we select the interval which revenue per hour value is high

   int revenue = 0;
   int last = -1;
   vector<int> st,en;

   for(int i=0;i<n;i++){
    if(last <= start[i]){
        revenue += cost[i];
        last = end[i];
        // selected intervals
        st.push_back(start[i]);
        en.push_back(end[i]);
    }
   }
    
   cout<<"Total generted revenue is :- "<<revenue<<endl;

   for(int i : st){
    cout<<i<<" ";
   }
   cout<<endl;
   for(int i : en){
    cout<<i<<" ";
   }
  
    return 0;
}