#include <bits/stdc++.h>
using namespace std;

int recursiveBSearch(int arr[], int low, int high, int x){
    if(low > high) return -1;

    int mid = (low + high)/2;
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] > x){
        recursiveBSearch(arr, low, mid - 1, x);
    }
    else if(arr[mid] < x){
        recursiveBSearch(arr, mid + 1, high, x);
    }      
}

int main(){
    int arr[] = {1, 2, 4, 4, 6, 8, 14};
    cout<<recursiveBSearch(arr, 0, 6, 6);
}