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

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        ll n, k; cin >> n >> k;
        vll a(n);
        FOR(i,0,n) cin >> a[i];
        ll div = 1;
        FOR(i,0,n) div = div * a[i] % k;
        // cout << "DIV " << div << endl;
        if (div == 0) {
            cout << 0 << endl;
            continue;
        }
        else {
            if (k == 4) {
                ll odd_cnt = 0, even_count = 0;
                FOR(i,0,n) {
                    if (a[i] % 2 == 1) odd_cnt++;
                    else if ((a[i] % 2) == 0) even_count++;
                }
                if (even_count != 0 and odd_cnt != 0) {
                    cout << 1 << endl;
                    continue;
                }
                else if (odd_cnt >= 2) {
                    ll f = INT_MAX;
                    FOR(i,0,n) {
                        f = min(f, k - a[i] % k);
                    }
                    cout << min(f, 2LL) << endl;
                    continue;
                }
            }
            ll f = INT_MAX;
            FOR(i,0,n) {
                f = min(f, k - a[i] % k);
            }
            cout << f << endl;
        }
    }
}