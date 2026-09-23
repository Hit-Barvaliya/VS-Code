#include<iostream>
using namespace std;
int main(){
    int num,arr[20],count=0,sum=0,o_num;
    cout<<"Enter first number : ";
    cin>>num;
    o_num = num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            num /= i;
            arr[count] = i;
            count++;
            // arr[count] = num;
            // count++;
            num = o_num;
        }
    }
    //arr[0] = 1;
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
        sum += arr[i];
    }
    cout<<"\n"<<sum;
    if(o_num==sum){
        cout<<"\nyour number is perfect :";
    }else{
        cout<<"\nyour number is not perfect :";

    }
    return 0;
}