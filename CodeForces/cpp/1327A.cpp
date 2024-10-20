#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        long long n, k; cin>>n>>k;
        long long sum = 0;
        sum = k*k;
        if (n % 2 == 0 and k % 2 == 0 and n >= sum) {cout<<"YES"<<endl; continue;}
        else if (n % 2 == 1 and k % 2 == 1 and n >= sum) {cout<<"YES"<<endl; continue;}
        else {cout <<"NO"<<endl;}
        
    }
}