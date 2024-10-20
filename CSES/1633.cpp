#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpi vector<pair<int,int>>
# define vpll vector <pair<long long, long long>>
# define mapi map<int,int>
# define mapll map<ll,ll>
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"
# define zeus ios_base::sync_with_stdio(false); cin.tie(nullptr);

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

void solve() {
    int w; cin >> w;
    int wt[] = {1, 2, 3, 4, 5, 6};
    vector <vector<int>> dp(6 + 1, vector <int> (w + 1, 0));

    FOR (i, 0, 6 + 1) {
        FOR (j, 0, w + 1) {
            if (i == 0) dp[i][j] = 0;
            if (j == 0) dp[i][j] = 1;
        }
    }

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= w; j++) {
            if (wt[i - 1] <= j) dp[i][j] = dp[i][j - wt[i - 1]] + dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[6][w] << endl;
}

signed main() {
    zeus;
    int t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}