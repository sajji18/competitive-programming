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
    ll n; cin >> n;
    ll res = n;
    for (int c1 = 0; c1 <= 2; c1++) {
        for (int c3 = 0; c3 <= 1; c3++) {
            for (int c6 = 0; c6 <= 4; c6++) {
                for (int c10 = 0; c10 <= 2; c10++) {
                    ll c15 = n - c1 * 1 - c3 * 3 - c6 * 6 - c10 * 10;
                    if (c15 % 15 == 0 and c15 >= 0) {
                        res = min(res, c1 + c3 + c6 + c10 + c15 / 15);
                    }
                    else continue;
                }
            }
        }
    }
    cout << res << endl;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}