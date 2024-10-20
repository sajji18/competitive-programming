#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    // 5
    // 2 7 3 4 9
    // 3
    // 1 25 11

    sajji;

    ll n; cin>>n;
    vll a(n);
    FOR(i,0,n) cin>>a[i];
    
    vll pfx(n); 
    pfx[0] = a[0];

    FOR(i,1,n) pfx[i] = pfx[i-1] + a[i];

    int m; cin>>m;
    while(m--) {
        ll q; cin>>q;
        auto it = lower_bound(pfx.begin(), pfx.end(), q);
        if (it == pfx.end()) it--;
        ll ans = distance(pfx.begin(), it);
        cout<<ans+1<<endl;
    }
}