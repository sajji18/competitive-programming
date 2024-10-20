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

ll n, c;
ll x[100000];

// 1 2 4 8 9
bool predicate (ll distance) {
    ll num = 1, dist = 0; 
    for (int i=1; i<n; i++) {
        dist = dist + x[i] - x[i - 1];
        if (dist >= distance) {
            num++;
            dist = 0;
        }
    }
    // cout << "Successful " << (num >= c) << endl;
    return num >= c; 
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        cin >> n >> c;
        for (int i = 0; i < n; i++) cin >> x[i];
        sort(x, x + n);
        ll lo = 0, hi = 1000000000;
        while (hi - lo > 1) {
            ll mid = lo + (hi - lo) / 2;
            // cout << "Mid is " << mid << endl;
            // T T T T T T F F F F F
            if (predicate(mid)) {
                lo = mid;
            }
            else {
                hi = mid - 1;
            }
        }

        if (predicate(hi)) cout << hi << endl;
        else cout << lo << endl;
    }
}