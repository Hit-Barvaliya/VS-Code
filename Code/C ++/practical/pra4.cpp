#include<iostream>
using namespace std;
int main(){
    int LCM;
    int num1,num2,arr1[20],arr2[20],count1=0,count2=0;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    LCM = num1*num2;
// two loop for first number
    for(int i=2;num1!=1;i++){
        if(num1%i==0){
            num1 /= i;
            arr1[count1] = i;
            i--,count1++;
        }
    }

    for(int i=0;i<count1;i++){
        cout<<arr1[i]<<" ";
    }
cout<<"\n";
//this two loop fro second number
        for(int i=2;num2!=1;i++){
        if(num2%i==0){
            num2 /= i;
            arr2[count2] = i;
            i--,count2++;
        }
    }

    for(int i=0;i<count2;i++){
        cout<<arr2[i]<<" ";
    }
// for answer of LCM-----------------------------------

    int ans_arr[20],count=0,HCM=1;
    // if(count1>count2)   count = count2;
    // else count = count1;

    for(int i=0;i<count1;i++){
        for(int j=i;j<count2;j++){
            if(arr1[i]==arr2[j]){
                ans_arr[count]=arr1[i];
                count++,i++;
            }
        }
    }
cout<<endl;
   for(int i=0;i<count;i++){
        cout<<ans_arr[i]<<" ";
    }
// for multiplication
   for(int i=0;i<count;i++){
        HCM *= ans_arr[i];
    }
    cout<<"\n ANSWER OF LCM IS "<<HCM<<endl<<"ANSWER OF LCM IS "<<LCM/HCM;


    return 0;
}