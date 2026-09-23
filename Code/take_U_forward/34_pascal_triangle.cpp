#include<iostream>
using namespace std;

int nCr(int n,int r){
    int result = 1;

    for(int i=0;i<(n-r);i++){
        result = result * (n-i) / (i+1);
    }

    return result;
}

void print_Element(int r,int c){
    // time-complexity is O[r-c]
    r -= 1;
    c -= 1;
    cout<<"Answer is :- "<<nCr(r,c);

}

void nth_line1(int r){
    // this is brute solution

    // time-complexity is O[r*(r-c)]
    r -= 1;
    for(int i=0;i<=r;i++){
        cout<<nCr(r,i)<<" ";
    }

}

void nth_line2(int r){
    // this is optimal solution

    // time-complexity is O[r]
    int ans = 1;
        cout<<ans<<" ";
    for(int i=1;i<r;i++){
        ans = ans * (r-i) / i;
        cout<<ans<<" ";
    }

}


void print_triangle1(int n){
    // this is brute solution

    // time-complexity is O[] aproximat
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){

    // cout<<"Enter the number of row and colum to print the element of pascle triangle :- ";
    // int r,c;
    // cin>>r>>c;
    // print_Element(r,c);

    cout<<"Enter the line number which you like to print :- ";
    int row;
    cin>>row;
    // nth_line1(row);
    nth_line2(row);
    
    // cout<<"Enter the height of pascal triangle :- \n";
    // int height;
    // cin>>height;
    // print_triangle1(height);
    
    return 0;
}