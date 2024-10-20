#include <bits/stdc++.h>
using namespace std;

//My Attempt - O(n*k)
int maxKSum(int arr[], int n, int k){
    int maxSum=0;
    for(int i=0; i<n-k; i++){
        int sum=0;
        for(int j=i; j<i+k ; j++){
            sum += arr[j];
        }
        maxSum = max(maxSum,sum); 
    }
    return maxSum;
}

//Window Sliding efficient solution
int maxkSubArr(int arr[], int n, int k){
    int sum_init = 0, var;
    for(int i=0; i<k; i++){
        sum_init += arr[i];
    }
    var = sum_init;
    for(int i=1; i<n-k+1; i++){
        sum_init = sum_init - arr[i-1] + arr[i+k-1];
        var = max(var, sum_init);
    }
    return var;
}

int main(){
    // let n=6, k=3, arr[]
    int arr[] = {1,8,30,-5,20,7};
    cout<<maxkSubArr(arr,6,4);
}