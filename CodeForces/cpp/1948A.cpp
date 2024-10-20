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
    // AA => n = 2
    // AABAA => n = 4
    // AABAABAA => n = 6
    // AABAABAABAA => n = 8
    string s = "";
    if (n & 1 == 1) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        ll b = n / 2 - 1;
        for (int i = 1; i <= n / 2; i++) {
            s += "AA";
            if (b) {
                s += "B";
                b--;
            }
        }
        cout << s << endl;
    }
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}