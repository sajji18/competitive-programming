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

int main(){
    sajji;
    ll n, k; cin>>n>>k;

    vll h(n);
    FOR(i,0,n) cin>>h[i];

    vll dp(n); // cost, cost function = |h[i] - h[j]| => C(i,j)
    dp[0] = 0, dp[1] = abs(h[1] - h[0]); 
    FOR(i,2,n) {
        ll res = INT_MAX;
        if (i < k - 1) {
            FOR(j,0,i) {
                ll cost = dp[j] + abs(h[i] - h[j]);
                res = min(res, cost);
            }
            dp[i] = res;
        }
        else {
            FOR(j,i-k,i) {
                ll cost = dp[j] + abs(h[i] - h[j]);
                res = min(res, cost);
            }
            dp[i] = res;
        }
    }

    // FOR(i,k,n) {
    //     ll res = INT_MAX;
    //     FOR(j,i-k,i) {
    //         ll cost = dp[j] + abs(h[i] - h[j]);
    //         res = min(res, cost);
    //     }
    //     dp[i] = res;
    // }

    cout<<dp[n-1]<<endl;
}