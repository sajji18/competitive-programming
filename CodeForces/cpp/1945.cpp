#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define zeus ios_base::sync_with_stdio(false); cin.tie(NULL);

ll M = 1e9 + 7;

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll m, n; cin >> m >> n;
    vll a(n), b(n);
    FOR (i, 0, n) cin >> a[i];
    FOR (i, 0, n) cin >> b[i];
    // vll sfx(n);
    // sfx[n - 1] = b[n - 1];
    // for (int i = n - 2; i >= 0; i--) {
    //     sfx[i] = sfx[i + 1] + b[i];
    // }
    ll ans = a[m - 1];
    bool flag = true;
    for (int i = m; i < n; i++) {
        if (b[i] < a[i] and flag) {
            ans += b[i];
            flag = false;
        }
        else {
            ans += a[i];
            flag = true;
        }
    }

    cout << ans << endl;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}