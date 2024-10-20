#include <bits/stdc++.h>
using namespace std;

//My Attempt - O(n)
bool isSorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

//Naive Approach O(n^2)
bool isSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int arr[] = {8,10,10,12};
    cout<<isSorted(arr,4);
}