// perameterised recursion

// #include<iostream>
// using namespace std;
// void printsum(int i,int sum){
//     if(i==0){
//         cout<<"your sum is :- "<<sum<<endl;
//         return;
//     }
//     printsum(i-1,sum+i);
// }
// int main(){
//     printsum(5,0);
//     return 0;
// }


// functional recaursion

// #include<iostream>
// using namespace std;
// int printsum(int n){
//     if(n==0)    return 0;
//     return n + printsum(n-1);
// }
// int main(){

//     int x = printsum(5);
//     cout<<"sum is :- "<<x;
//     return 0;
// }


// exercise

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1)    return 1;
    return n * factorial(n-1);
}
int main(){
    int x = factorial(5);
    cout<<"factorial is :- "<<x;
    return 0;
}

/*
| Feature                        | **Head Recursion**             | **Tail Recursion**           |
| :----------------------------- | :----------------------------- | :--------------------------- |
| **Position of recursive call** | Before any processing          | After all processing         |
| **Work done**                  | After returning from recursion | Before making recursive call |
| **Execution order**            | Bottom-up                      | Top-down                     |
| **Backtracking required?**     | Yes                            | No                           |
| **Space usage**                | More (stack grows deep)        | Less (can be optimized)      |
| **Conversion to loop**         | Hard                           | Easy                         |
| **Example output (for n=3)**   | `1 2 3`                        | `3 2 1`                      |


In tail recursion, the recursive call is the last statement in the function — after making the call, the function has nothing else left to do.
void fun(int n) {
    if (n > 0) {
        cout << n << " ";  // processing before recursion
        fun(n - 1);        // recursive call last (tail)
    }
}

In head recursion, the recursive call happens before any other processing (i.e., before executing the rest of the code in the function).
void fun(int n) {
    if (n > 0) {
        fun(n - 1);     // recursive call first (head)
        cout << n << " ";  // processing after recursion
    }
}


*/