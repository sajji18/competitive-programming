#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll M = 1e9 + 7;

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vll a(n), pfx(n), sfx(n);

        FOR(i,0,n) cin >> a[i];
        ll m; cin >> m;

        // store a[i] and index of closest a[j]
        vpll closest;
        closest.push_back({ a[0], 1 });
        for (int i=1; i<n-1; i++) {
            ll close = (abs(a[i+1] - a[i]) > abs(a[i] - a[i-1])) ? i - 1 : i + 1;
            closest.push_back({ a[i], close });
        }
        closest.push_back({ a[n-1], n-2 });

        pfx[0] = 0;
        for (int i=1; i<n; i++) {
            if (closest[i-1].second == i) pfx[i] = pfx[i-1] + 1;
            else pfx[i] = pfx[i-1] + abs(a[i] - a[i-1]);
            // cout << pfx[i] << " ";
        }
        // cout << endl;

        sfx[n-1] = 0;
        for (int i=n-2; i>=0; i--) {
            if (closest[i+1].second == i) sfx[i] = sfx[i+1] + 1;
            else sfx[i] = sfx[i+1] + abs(a[i+1] - a[i]);
            // cout << sfx[i] << " ";
        }
        // cout << endl;
        
        while (m--) {
            ll l, r; cin >> l >> r;
            // ll cost = 0;
            // if (l <= r) {
            //     for (int i=l; i<=r-1; i++) {
            //         if (closest[i].second == i + 1) cost++;
            //         else cost += a[i+1] - a[i];
            //     }
            //     cout << cost << endl;
            // }
            // else {
            //     for (int i=l; i>=r+1; i--) {
            //         if (closest[i].second == i - 1) cost++;
            //         else cost += abs(a[i] - a[i-1]);
            //     }
            //     cout << cost << endl;
            // }
            if (l < r) cout << pfx[r-1] - pfx[l-1] << endl;
            else cout << sfx[r-1] - sfx[l-1] << endl;
        }
    }
}