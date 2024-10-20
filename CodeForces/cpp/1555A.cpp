#include <bits/stdc++.h>
using namespace std;

int main(){
    int tsc; cin>>tsc;
    while(tsc--) {
        long long n; cin>>n;
        if (n <= 6) {
            cout<<15<<endl;
            continue;
        }
        if (n % 2 == 1) {
            long long ans = 20*1LL + 5*(n-7)/2;
            cout<<ans<<endl;
        }
        else {
            long long num = n - 1;
            long long ans = 20*1LL + 5*(num-7)/2;
            cout<<ans<<endl;
        }
    }
}