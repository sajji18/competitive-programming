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
    ll n, pairs = 0; cin >> n;
    vll a(n);
    unordered_map <ll, ll> mp;
    FOR(i,0,n) {
        cin >> a[i];
        a[i] = a[i] - i;
        // pairs += mp[a[i]];
        mp[a[i]]++;
    }

    for (auto &val : mp) {
        pairs += (val.second * 1LL * (val.second - 1)) / 2;
    }

    cout << pairs << endl;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}