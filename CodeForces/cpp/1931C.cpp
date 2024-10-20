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

ll binpow (ll a, ll b) {
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
        vll a(n);
        FOR(i,0,n) cin >> a[i];
        ll ls = 0, rs = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == a[0]) ls++;
            else break;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == a[n - 1]) rs++;
            else break;
        }

        ll ans;
        if (a[0] == a[n - 1]) ans = ls + rs;
        else ans = max(ls, rs);

        if (ans > n) ans = n;

        cout << n - ans << endl;
    }
}