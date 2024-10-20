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
        vll a(n), copy;
        FOR(i,0,n) cin >> a[i];

        unordered_map <int, int> mp;
        FOR(i,0,n) {
            int mask;
            for (mask = 1; mask < a[i]; (mask <<= 1)) {
                continue;
            }
            if (mask == a[i]) mp[mask]++;
            else {
                mask >>= 1;
                mp[mask]++;
            }
        }

        ll ans = 0;
        for (auto val : mp) {
            ans += ((val.second) * 1LL * (val.second - 1)) / 2;
        }

        cout << ans << endl;

        // copy = a;
        // ll pairs = 0, possible = n * (n - 1) / 2, stk = 1;

        // sort(all(copy));

        // FOR(i,1,n) {
        //     if (copy[i-1] & copy[i] == 0) possible--; 
        //     if (copy[i - 1] == copy[i]) {
        //         if (i == n - 1) {
        //             pairs += stk * (stk - 1) / 2;
        //             possible -= stk * (stk - 1) / 2;
        //             stk = 1;
        //         }
        //         else {
        //             stk++;
        //         }
        //     }
        //     else if (copy[i - 1] != copy[i]) {
        //         pairs += stk * (stk - 1) / 2;
        //         possible -= stk * (stk - 1) / 2;;
        //         stk = 1;
        //     }
        // }

        // cout << possible << " " << pairs << endl;
    }
}