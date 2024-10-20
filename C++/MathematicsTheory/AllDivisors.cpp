#include <bits/stdc++.h>
using namespace std;

// Naive Solution -> TC - O(n)
void allDivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

// Optimal Solution - 1
void allDiv(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}

//Optimal Solution - 2
void allDivis(int n){
    int i=1;
    for(; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(; i>=1; i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    int x; cin>>x;
    allDivis(x);
}