#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

bool cmp(ll a, ll b ){
    return a > b;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n; cin>>n;
        vll a(n);
        FOR(i,0,n) cin>>a[i];
        sort(a.begin(), a.end(), cmp);
        ll alice = 0, bob = 0;
        FOR(i,0,n) {
            if (i % 2 == 0) {
                if (a[i] % 2 == 0) {
                    alice += a[i];
                }
                else continue;
            }
            else {
                if (a[i] % 2 == 1) {
                    bob += a[i];
                }
                else continue;
            }
        }
        if (alice > bob) cout<<"Alice"<<endl;
        else if (alice < bob) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
}