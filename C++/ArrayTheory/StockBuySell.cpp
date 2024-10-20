#include <bits/stdc++.h>
using namespace std;

// My Attempt
// int maxStockPrice(int arr[], int n) {
//     int mdf = arr[1] - arr[0], maxEl, minEl;
//     int price = 0;
//     if(arr[1]>arr[0]){
//         maxEl = arr[1];
//         minEl = arr[0];
//     }
//     else{
//         maxEl = arr[0];
//         minEl = arr[1];
//     }
//     for(int i=2; i<n; i++) {
//         if(arr[i]>maxEl){
//             maxEl = arr[i];
//             mdf = max(arr[i]-minEl, mdf);
//         }
//         else if(arr[i]<=maxEl){
//             price += mdf;
//         }     
//     }
// }

//Naive Approach -> TC - O(n^2)
int maxPrice(int price[], int start, int end){
    if(end<=start){
        //profit cannot be made
        return 0;
    }
    int profit = 0, current_max;
    //Logic
    for(int i=start; i<end; i++){
        for(int j=i+1; j<end; j++){
            if(price[i]<price[j]){
                current_max = price[j] - price[i] + maxPrice(price, start,i-1) + maxPrice(price, j+1, end);
            }
        }
        profit = max(profit, current_max);
    }
    return profit;
}

//Efficient Approach -> TC - O(n)
int maxProfit(int price[], int n){
    int profit = 0;
    for(int i=1; i<n; i++){
        if(price[i]>price[i-1]){
            profit += (price[i] - price[i-1]);
        }
    }
    return profit;
}

int main(){

}