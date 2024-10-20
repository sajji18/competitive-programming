#include <bits/stdc++.h>
using namespace std;

// Naive Solution - TC -> O(d) => d are number of bits
int CntSetBits(int n){
    int res = 0;
    while(n > 0){
        if(n & 1 != 0){
            res++;
        }
        n /= 2;
    }
    return res;
}

int main(){
    int n; cin>>n;
    cout<<CntSetBits(n);
}