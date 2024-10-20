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
    ll n, k; cin >> n >> k;
    vll a(n);
    FOR(i,0,n) cin >> a[i];
    while (k--) {
        int x; cin >> x;
        // auto it = find(all(a), x);
        // if (it != a.end()) cout << "YES" << endl;
        // else cout << "NO" << endl;
        ll lo = 0, hi = n - 1;
        while (hi - lo > 1) {
            ll mid = lo + (hi - lo) / 2;
            if (a[mid] > x) {
                hi = mid - 1;
            }
            else {
                lo = mid;
            }
        }
        if (a[lo] > x) {
            cout << 0 << endl;
        }
        else if (a[hi] <= x) cout << hi + 1 << endl;
        else if (a[lo] <= x and a[hi] > x) {
            cout << lo + 1 << endl;
        }
    } 
}