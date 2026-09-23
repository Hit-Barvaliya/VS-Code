#include<iostream>
#include<iomanip>
using namespace std;

void patern1(int n){

    int count = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<setw(4)<<"  ";
        }
        int arr[n];
        for(int j=0;j<n;j++){
            arr[j] = count;
            count++;
        }

        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout<<setw(4)<<arr[j]<<" ";
            }
        } else {
            for(int j=n-1;j>=0;j--){
                cout<<setw(4)<<arr[j]<<" ";
            }
        }

        cout<<endl;
    }
}

void patern2(int n){

    cout<<"1"<<endl;
    for(int i=2;i<=n;i++){
            int newI = i;

        // this is an array
            int arr[i] = {0};
            arr[0] = i;

            for(int j=1;j<i;j++){
                newI += (n-j);
                arr[j] = newI;
            }
            for(int j=i-1;j>=0;j--){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
    }
    
}

// void patern3(string str){
//     int count = 0;
//     for(int i=0;i<str.length();i++){
//         if(str[i] == '[')    count++;
//     }
//     // for(int i=0;i<count;i++){
//     for(int i=0;i<str.length();i++){
//         char ch = str[i];
//         if((int)ch>=48 && (int)ch<=57){
//             int val = (int)ch-48;
//             string ext = "";
//             int j=i+1;
//             while(j<str.length()){
//                 ext += str[j];
//                 j++;
//             }
//             for(int j=1;j<=val;j++){
//                 cout<<"Your string is :- "<<ext<<endl;
//                 patern3(ext.substr(1,ext.length()-2));
//             }
//         }
//     }
// }
 
// void patern3(string str,int n){
    
//     for(int i=n;i>=0;i--){
        
//         int index  = 0;
//         index = str.find('[',i);
//         if(index>=0){
//             string ext = "";
//             for(int ind = index+1;str[ind]!=']';ind++){
//                 ext += str[ind];
//             }
//             // int end_index = str.find(']',index);
            
//             cout<<"Your string is :- "<<ext<<endl;


//             // int number = 1;
//             // for(int i=0;i<number;i++){
//             //     cout<<"Your string is :- "<<ext<<endl;
//             // }
//         }
        
        
//     }

// }

void playboy(string str,int n){
    for(int i=0;i<n;i++){
        cout<<str;
    }
}
void patern3(string str,int n){
    
    string newstr = "";
    int number=0;

    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            // playboy(newstr,number);
            number = (int)str[i] - 48;
            // newstr = "";
            // number = 0;
        } else {
            newstr += str[i]; 
            if(i<n-1){
                if(isdigit(str[i+1])){
                    playboy(newstr,number);
                    newstr = "";
                    number = 0;
                }
            }           
        }
    }
    
        playboy(newstr,number);

}
void trypatern3(){

    // string str = "3[a2[c]]";     ==> this is not working for this type of example
    string str = "3[a]2[bc]";
    string newstr = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!='[' && str[i]!=']'){
            newstr += str[i];
        }
    }    
    patern3(newstr,newstr.length());
}






int main(){
    
    int input1=7;

    // cout<<"Enter the number :- ";
    // cin>>input;

    // patern1(input1);

    // patern2(input1);

    trypatern3();

    return 0;
}