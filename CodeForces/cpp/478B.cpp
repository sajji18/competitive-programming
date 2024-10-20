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
    ll n, m; cin >> n >> m;
    // 6 3 => 2 2 2
    // 5 3 => 2 2 1
    // 7 3 => 2 2 3
    // 8 3 => 2 3 3

    // (n % m == 0) ? cout << (((n / m) * (n / m - 1)) / 2) * m : cout << min(static_cast <ll> ((((((ceil(n * 1.0 / m) * (ceil(n * 1.0 / m) - 1)) / 2) * (m - 1)) + ((n - ceil(n * 1.0 / m) * (m - 1)) * (n - ceil(n * 1.0 / m) * (m - 1) - 1) / 2)))), (((((n / m) * ((n / m) - 1)) / 2) * (m - 1)) + ((n - (n / m) * (m - 1)) * (n - (n / m) * (m - 1) - 1) / 2))) ;
    if (n % m == 0) cout << (((n / m) * (n / m - 1)) / 2) * m;
    else {
        ll ans = 0, ntemp = n, mtemp = m;
        while (ntemp % mtemp != 0) {
            ntemp -= 1;
            mtemp -= 1;
        }
        // 10 6 => 2 2 2 2 1 1
        cout << ans + (((ntemp / mtemp) * (ntemp / mtemp - 1)) / 2) * mtemp;
    }
    cout << " " << ((n - (m - 1)) * (n - (m - 1) - 1)) / 2 << endl;
}