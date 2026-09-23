
#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    // for(int i=1;i<=n;i++){
    //     for(int j=n;j>=i;j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1;i<=n;i++){
        // for(int j=n;j>=i;j--){
        //     cout<<"  ";
        // }
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        // for(int j=i;j<=(2*n)-i;j++){
        //     cout<<"* ";
        // }
        for(int j=1;j<=(2*n)-(2*i)+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern9(int n){
   pattern7(n);
   pattern8(n);
}

void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        // if(i<=n){
        //     for(int j=1;j<=i;j++){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // } else {
        //     for(int j=1;j<=2*n-i;j++){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // }

        int a = i;
        if(i>n)   a = 2*n-i;

        for(int j=1;j<=a;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    for(int i=1;i<=n;i++){
        int a=1;
        if(i%2==0)  a=0;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            // if(a==1)    a=0;
            // else    a=1;

            a = 1 - a;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=(2*n)-(2*i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int a = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=n;i>=1;i--){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}

void pattern17(int n){
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            cout<<ch<<" ";
            if(j>=i) ch--;
            else    ch++;
        }
        cout<<endl;
    }
}

void pattern18(int n){
    // char ch = 'A' + n;
    for(int i=1;i<=n;i++){
        char ch = 'A' + n - i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }
        for(int j=1;j<=2*(i-1);j++){
            cout<<"  ";
        }
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern20(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        //  int j=1;j<=n-i;j++
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        for(int j=1;j<=2*i;j++){
            cout<<"  ";
        }
        //  int j=1;j<=n-i;j++
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n)  cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void pattern22(int n){
   for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int top = i;
            int botom = (2*n) - i;
            int right = j;
            int left = (2*n) - j;
            cout<<(n+1-(min(min(top,botom),min(right,left))))<<" ";
        }
        cout<<endl;
   }

//other solution is in c language :- Round_of_numbers.c
}


int main(){

    cout<<"enter a number :- ";
    int n=5;
    // cin>>n;

    pattern1(n);
    cout<<endl;

    cout<<endl;
    pattern2(n);
    cout<<endl;

    cout<<endl;
    pattern3(n);
    cout<<endl;

    cout<<endl;
    pattern4(n);
    cout<<endl;

    cout<<endl;
    pattern5(n);
    cout<<endl;

    cout<<endl;
    pattern6(n);
    cout<<endl;

    cout<<endl;
    pattern7(n);
    cout<<endl;

    cout<<endl;
    pattern8(n);
    cout<<endl;

    cout<<endl;
    pattern9(n);
    cout<<endl;

    pattern10(n);
    cout<<endl;

    pattern11(n);
    cout<<endl;

    pattern12(n);
    cout<<endl;

    pattern13(n);
    cout<<endl;

    pattern14(n);
    cout<<endl;

    pattern15(n);
    cout<<endl;

    pattern16(n);
    cout<<endl;

    pattern17(n);
    cout<<endl;

    pattern18(n);
    cout<<endl;

    pattern19(n);
    cout<<endl;

    pattern20(n);
    cout<<endl;

    pattern21(n);
    cout<<endl;

    pattern22(n);
    cout<<endl;

    return 0;
}