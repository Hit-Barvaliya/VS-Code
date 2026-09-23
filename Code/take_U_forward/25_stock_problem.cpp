#include<iostream>
using namespace std;

// -> this problem is about the buy and sell of stocks
// -> give the price of stocks in array for each day => arr[0] is price of first day, arr[1] is price of second day
// -> when we buy and sell the stocks condition is profit margins must be heighest
// -> we can do buy and sell only one time
// -> minimum profit is must be 0
// -> selling is must be after buying

int main(){

    // time-complexity is O[n] ans space-somplexity is O[1]

    int arr[] = {7,1,6,4,5,3};
    int minimumPrice = arr[0],profit = 0;

    for(int i=1;i<6;i++){
        int cost = arr[i] - minimumPrice;
        profit = max(profit,cost);
        minimumPrice = min(minimumPrice,arr[i]);
    }
    cout<<"Your maximum profit is :- "<<profit;

    return 0;
}