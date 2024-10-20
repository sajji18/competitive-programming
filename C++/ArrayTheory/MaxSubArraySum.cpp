#include <bits/stdc++.h>
using namespace std;

//Naive Solution
int maxSubArraySum(int arr[], int n){
    //Cannot initialize res as 0, otherwise all negative cases will fail
    int res=arr[0];
    //Logic
    for(int i=0; i<n; i++){
        int sumCount = 0;
        for(int j=i; j<n; j++){
            sumCount += arr[j];
            res = max(res, sumCount);
        }
    }
    return res;
}

//Efficient Approach
int maxSubSum(int arr[], int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}



int main(){
    int arr[] = {-6,-1,-8};
    cout<<maxSubArraySum(arr,3);
}