#include <bits/stdc++.h>
using namespace std;

//My Attempt - O(n^2)
// void removeDuplicates(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         if(arr[i]==arr[i+1]){
//             for(int j=i+1; j<=n-1; j++){
//                 if(j==n-1){
//                     arr[j] = 0;
//                 }
//                 else{
//                 arr[j]=arr[j+1];
//                 }
//             }
//         }
//     }
// }

//Naive Approach - Both TC and SC = theta(n)
int remDups(int arr[], int n){
    int temp[n];
    temp[0] = arr[0];
    int res = 1;

    for(int i=1; i<n; i++){
        if(temp[res-1]!=arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }

    for(int i=0; i<res; i++){
        arr[i] = temp[i];
    }
    return res;
}

//Efficient Approach -> TC - O(n), SC - O(1) 
int remDup(int arr[], int n){
    int res = 1;
    for(int i=1; i<n; i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}


int main(){
    int arr[] = {10,20,20,30,30,30,30};
    cout<<remDups(arr, 7)<<endl;
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl<<sizeof(arr)/sizeof(arr[0]);
}