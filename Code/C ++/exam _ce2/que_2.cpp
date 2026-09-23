// #include<iostream>
// #include<vector>
// using namespace std;
// class task;
// vector<task> t1;
// class task{
//     int task_id;
//     string task_name;
//     string dedline;
//     string priority;
//     bool complate = 0;
//     public:
//     task(){}
//     task(int i,string n,string d,string p){
//         task_id = i;
//         task_name = n;
//         dedline = d;
//         priority = p;

//     }
//     void addtask(task T){
//         t1.push_back(T);
//     }
//     void complete_task(){
//         complate = 1;
//     }
//     void displaytask(task T){
//     cout<<"the id of task is :- "<<T.task_id<<endl
//         <<"name of task is :- "<<T.task_name<<endl
//         <<"dadeline of task is :- "<<T.dedline<<endl
//         <<"priority of task is :- "<<T.priority<<endl;
//         if(T.complate)  cout<<"task is completed\n";
//         else cout<<"task is not completed\n";                
//     }
// };
// class taskmanager : public task{
    
//     public:
//     void addtask(int i,string n,string d,string p){
//         t1.push_back(task(i,n,d,p));
//     }
//     void viewtask(){
//         for(int i=0;i<t1.size();i++){
//             t1[i].displaytask();
//         }
//     }
// };
// int main(){
//     taskmanager m;

//     m.addtask(12,"rdxtfc","12-43-4343","high");
//     m.viewtask();
//     return 0;
// }

