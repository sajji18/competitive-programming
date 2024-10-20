#include <bits/stdc++.h>
using namespace std;

//My Attempt 
void leftRotate(int arr[], int n){
    int temp = *arr;
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    leftRotate(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}