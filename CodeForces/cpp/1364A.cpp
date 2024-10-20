#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll result(vll a, vll b, int x) {
    ll res = -1;
    FOR(i,0,a.size()) {
        ll len = i+1;
        if (a[i] % x != 0) {
            res = max(res, len);
        }
    }
    RFOR(i,b.size()-1,0) {
        ll len = b.size() - i;
        if (b[i] % x != 0) {
            res = max(res, len);
        }
    }
    return res;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n, x; cin>>n>>x;
        vll a(n), pfx(n), sfx(n);
        FOR(i,0,n) cin>>a[i];

        pfx[0] = a[0];
        sfx[n-1] = a[n-1];
        FOR(i,1,n) pfx[i] = pfx[i-1] + a[i];
        RFOR(i,n-1,1) sfx[i-1] = sfx[i] + a[i-1];
        
        ll ans = result(pfx, sfx, x);
        cout<<ans<<endl;
    }
}