#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        vector<long long> vi(n);
        for(long long i=0; i<n; i++) {
            cin>>vi[i];
        }
        long long sum = accumulate(vi.begin(), vi.end(), 0LL);
        long long sqr = sqrt(sum);
        if (sqr*sqr == sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}