#include <bits/stdc++.h>
using namespace std;

//My Attempt -> TC - O(n), SC - O(n)
void zeroToEnd(int arr[], int n){
    int temp[n];
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i=res; i<n; i++){
        temp[i] = 0;
    }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}

//Naive Approach - O(n^2)
void movetoEnd(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            for(int j=i+1; j<n; j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}

//Efficient Solution -> TC - O(n), SC - O(1)
void moveZeroes(int arr[], int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}


int main(){
    int arr[] = {8,5,0,10,0,20};
    zeroToEnd(arr,6);
}