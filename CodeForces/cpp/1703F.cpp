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
        vll a(n+1), dp(n+1), ans;
        FOR(i,1,n+1) cin >> a[i];
        FOR(i,1,n+1) dp[i] = a[i] - i;

        for (int i=1; i<=n; i++) {
            if (dp[i] < 0) ans.push_back(dp[i]);
        }

        for (int i=0; i<ans.size(); i++) {
            
        }
    }
}