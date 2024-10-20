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
ll n, m;
ll heights[1000000];

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

bool predicate (ll height) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] >= height) sum += heights[i] - height;
    }
    return sum >= m;
}

int main(){
    sajji;
    // ll _; cin>>_;
    // while(_--) {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> heights[i];

    sort (heights, heights + n);

    ll lo = 0, hi = 1000000000;
    while (hi - lo > 1) {
        ll mid = lo + (hi - lo) / 2;
        // TTTTTTFFFFF
        if (predicate(mid)) {
            lo = mid;
        }
        else {
            hi = mid - 1;
        }
    }

    // cout << hi << " " << lo << endl; 

    if (predicate(hi)) cout << hi << endl;
    else cout << lo << endl;
    // }
}