#include <bits/stdc++.h>
using namespace std;

//My Attempt -> TC - O(n^2)
int maxDifference(int arr[], int n){
    int k,df;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            df = arr[j] - arr[i];
        }
        k = max(k,df);
    }
    return k;
}

//Efficient Solution -> TC - O(n)
int mDif(int arr[], int n){
    //Initialization
    int res = arr[1] - arr[0], minVal = arr[0]; 
    for(int j=1; j<n; j++){
        //check if res > new diff
        res = max(res, arr[j]-minVal);
        //check current min element with current traversed element
        minVal = min(arr[j], minVal);
    }
    return res;
}

int main(){
    int arr[] = {2,3,10,6,4,8,1};
    cout<<maxDifference(arr,7);
}