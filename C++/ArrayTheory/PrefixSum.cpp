#include <bits/stdc++.h>
using namespace std;

//Q1 Naive Solution
int getSum(int arr[], int l, int r){
    int res= 0;
    for(int i=l; i<=r; i++)
        res+= arr[i];
    return res;
}


//Exercise Naive Solution
int getSum(int arr[], int n, int l, int r){
    int req_sum = 0;
    for(int i=l; i<=r; i++){
        req_sum += (i-l+1)*arr[i];
    }
    return req_sum;
}

int main(){
    //Exercise Problem
    int arr[] = {2,3,5,4,6,1};
    //Solution 
    int pf1[6], pf2[6];
    pf1[0] = 0, pf2[0] = arr[0];


    //prefix sum computation technique
    for(int i=1; i<6; i++){
        pf1[i] = i*arr[i] + pf1[i-1];
        pf2[i] = arr[i] + pf2[i-1];
    }


    // Handling l==0 cases, important
    int l,r; cin>>l>>r;
    if(l>0){
    cout<< pf1[r] - pf1[l-1] - (l-1)*(pf2[r] - pf2[l-1]);
    }
    else{
    cout<< pf1[r] - (l-1)*(pf2[r]);
    }
}