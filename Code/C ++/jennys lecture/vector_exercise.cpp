#include<iostream>
#include<vector>
#include<algorithm>            // for shorting
void swap(int* x,int*y){
    int z = *x;
    *x = *y;
    *y = z;
}
using namespace std;
int main (){
//[1]----------
    // vector<int> vat={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<vat.size();i++){
    //     if(vat[i]%2==0)     vat.erase(vat.begin()+i);
    // }

    // for(int i=0;i<vat.size();i++){
    //     cout<<vat[i]<<" ";
    // }
//[2]----------
//WE HAVE FUNCTION FOR SWAP
    // vec1.swap(vec2);
    //vector<int> vec1={1,2,3,4,5};
    // vector<int> vec2={11,12,13,14,15};
    // int a,b,x;
    // for(int i=0;i<5;i++){
    //     x = vec1[i];
    //     vec1[i] = vec2[i];
    //     vec2[i] = x;
    // }

    // for(int i=0;i<5;i++){
    //     cout<<vec1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<vec2[i]<<" ";
    // }
//[3]---------
//WE HAVE FUNCTION FOR SHORTING 
    //sort(vec1.begin(),vec1.end());

    vector<int> vec1={10,2,-1,4,79,60};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(vec1[i]>vec1[j]) swap(&vec1[i],&vec1[j]);
        }
    }
    
    // for(int i=0;i<6;i++){
    //     cout<<vec1[i]<<" ";
    // }

    for(auto n:vec1){
        cout<<n<<" ";
    }
    return 0;
}