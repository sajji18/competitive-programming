#include <bits/stdc++.h>
using namespace std;

// My Attempt -> TC - O(1)
void checkSet(int num, int k){
    // int num = numToBinary(n);
    int temp = (1 << (k-1));
    if(num & temp){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
}

// Naive Solution
// Pseudo -> Use for loop to get a num x = 2^(k-1), then take num & x;

int main(){
    int n,k; cin>>n>>k;
    checkSet(n,k);
}