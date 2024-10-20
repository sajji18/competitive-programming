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
    ll n; cin >> n;
    vll a(n);
    FOR(i,0,n) cin >> a[i];
    ll k; cin >> k;
    sort(all(a));
    while (k--) {
        int l, r; cin >> l >> r;
        // 1 3 4 10 10 => (2 9) , 
        ll lower_index = lower_bound(all(a), l) - a.begin();
        // ll lo = 0, hi = n - 1;
        // while (hi - lo > 1) {
        //     ll mid = lo + (hi - lo) / 2;
        //     if (a[mid] > r) {
        //         hi = mid - 1;
        //     }
        //     else {
        //         lo = mid;
        //     }
        // }
        // ll upper_index;
        // if (a[hi] == r) upper_index = hi;
        // else upper_index = lo;

        // if (upper_index >= lower_index) cout << (upper_index - lower_index + 1) << endl;
        // else cout << 0 << endl;
        ll upper_index = upper_bound(all(a), r) - a.begin();
        // if (a[upper_index] > r) upper_index--;
        cout << (upper_index - lower_index) << endl;
    } 
}