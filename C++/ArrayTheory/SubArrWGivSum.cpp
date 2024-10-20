#include <bits/stdc++.h>
using namespace std;

bool checkSum(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        int curr_sum = 0;
        for(int j=i; j<n; j++){
            curr_sum += arr[j];
            if(curr_sum == sum){
                return true;
            }
        }
    }
    return false;
}

bool isSubSum(int arr[], int n, int sum){
    int s = 0, curr = 0;
    for(int i=0; i<n; i++){
        curr += arr[i];
        while(sum < curr){
            curr -= arr[s];
            s++;
        }
        if(curr==sum){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,4};
    cout<<checkSum(arr,2,3);
}