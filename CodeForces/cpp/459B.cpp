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
    vll b(n);
    FOR(i,0,n) cin >> b[i];
    sort(all(b));
    ll ans1 = b[n - 1] - b[0], ans2 = 0;
    ll lower = 0, upper = 0;
    for (int i=0; i<n; i++) {
        if (b[i] == b[0]) lower++;
        if (b[i] == b[n-1]) upper++;
    }

    if (b[0] == b[n - 1]) {
        ans2 = lower * (lower - 1) / 2;
    }
    else {
        ans2 = lower * upper;
    }

    cout << ans1 << " " << ans2 << endl;
}