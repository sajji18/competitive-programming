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
    ll n, x, count = 0; 
    cin >> n >> x;

    vll a(n), pfx(n), sfx(n);
    FOR(i,0,n) {
        cin >> a[i];
        count += (a[i] == x);
    }

    pfx[0] = a[0];
    FOR(i,1,n) pfx[i] = pfx[i - 1] + a[i];

    sfx[n-1] = a[n-1];
    RFOR(i, n-2, 0) sfx[i] = sfx[i + 1] + a[i];

    FOR (i,0,n) {
        if (sfx[i] == x) count++;
        if (pfx[i] == x) count++;
    }

    cout << count << endl;
}