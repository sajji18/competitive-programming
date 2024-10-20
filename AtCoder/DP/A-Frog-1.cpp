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

ll dp[100001];
ll h[100001];

// Top Down Approach 
ll minCost (ll n) {
    if (n == 1) return 0;
    if (n == 2) return abs(h[2] - h[1]);
    if (dp[n] != -1) return dp[n];
    return dp[n] = min((minCost(n-1) + abs(h[n] - h[n-1])), (minCost(n-2) + abs(h[n] - h[n-2])));
}

int main(){
    sajji;
    ll n; cin>>n;
    FOR(i,1,n+1) cin>>h[i];
    memset(dp, -1, sizeof(dp));

    cout << minCost(n) << endl;
    // Bottom Down Approach
    // dp[0] = 0, dp[1] = abs(h[1] - h[0]);
    // FOR(i,2,n) dp[i] = min(abs(h[i] - h[i-1]) + dp[i-1], abs(h[i] - h[i-2]) + dp[i-2]);
    // cout<<dp[n-1]<<endl;
}