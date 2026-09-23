#include<iostream>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second)   return true;
    if(p1.second > p2.second)   return false;
    //if both condition are false both of them are same

    if(p1.first > p2.first)     return true;
    else return false;
}

int main(){
    


    int arr[] = {1,5,3,6,9,3,8,4};

    int* a = &arr[0];
    cout<<"before shorting :- ";
    for(int i : arr){
        cout<<i<<" ";
    }

    // sort(a,a+8);
    // cout<<"\nafter sorting :- ";
    // for(int i : arr){
    //     cout<<i<<" ";
    // }

    //we can also sort the continers like vector, map, etc.
    // for continers :- sort(v.begin(),v.end());

    // sort(a+2,a+7);
    // cout<<"\nsorting of a+2 to a+7 :- ";
    // for(int i : arr){
    //     cout<<i<<" ";
    // }

    sort(a, a+8, greater<int>());
    cout<<"\nsorting in greater :- ";
    for(int i : arr){
        cout<<i<<" ";
    }

    pair<int,int> aaa[] = {{1,2},{2,1},{4,1}};
    //sort it to according to second element
    //if second element is same then sort it 
    //according to first element in but in descending

    auto ptr = &aaa[0];

    sort(aaa,aaa+3,comp);

    cout<<"\nafter shorting in my way :- ";
    for(auto i : aaa){
        cout<<i.first<<" "<<i.second<<endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num);
    //it will return the number of '1' in binary form , example given below
    //it will return number of set bits [for 7 output is :- 3,for 6 output is :- 2]
    cout<<"for __builtin_popcount :- "<<cnt<<endl;

    long long num2 = 12345678;
    int cnt2 = __builtin_popcountll(num2);
    cout<<"for __builtin_popcountll :- "<<cnt2<<endl;

    string str = "213";
    cout<<"for permutation of string {123} :- ";
//this function will work in dictonary aplabetial order 
//so for all the combination we nedd to store all element of string in alphabetical order

    //this line is to store all element of string in alphabetical order
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
    //when all combination will printed this functon wil return false
    //after print all the combinition main string will remain same 
    int max = *max_element(a,a+8);
    cout<<"max element is :- "<<max<<endl;

    int min = *min_element(a,a+8);
    cout<<"min element is :- "<<min<<endl;
    return 0;
}