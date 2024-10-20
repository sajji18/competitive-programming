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
        vll a(n);
        FOR(i,0,n) cin >> a[i];
        ll sum = accumulate(all(a), 0LL);
        // 7
        // 2 4 8 1 9 3 4 => mod1 = 3, mod2 = 2, mod0 = 2
        // 2
        // 4 10
        if (sum % 3 == 0) cout << 0 << endl;
        else {
            if (sum % 3 == 1) {
                ll mod1 = 0, mod2 = 0;
                FOR(i,0,n) {
                    if (a[i] % 3 == 1) mod1++;
                    else if (a[i] % 3 == 2) mod2++;
                }
                // cout << mod1 << " " << mod2 << endl;
                if (mod1 != 0 or ((3 - sum % 3) == 1)) cout << 1 << endl;
                else if (mod2 >= 2) cout << 2 << endl;
                else cout << a.size() << endl;
            }
            else {
                ll mod1 = 0, mod2 = 0;
                FOR(i,0,n) {
                    if (a[i] % 3 == 1) mod1++;
                    else if (a[i] % 3 == 2) mod2++;
                }
                if (mod2 != 0 or ((3 - sum % 3) == 1)) cout << 1 << endl;
                else if (mod1 >= 2) cout << 2 << endl;
                else cout << a.size() << endl;
            }
        }
    }
}