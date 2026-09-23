#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s1 = "";
    string s2 = "";
    
    cin >> s1;
    cin >> s2;

    int n1 = stoi(s1);
    int n2 = stoi(s2);

    int ans = n1 * n2;

    string s = to_string(ans);

    cout << s ;

    return 0;
}