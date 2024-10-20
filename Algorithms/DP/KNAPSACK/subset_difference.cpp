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

/*
    Problem Statement:
    Break the array into 2 subsets s.t S1 U S2 = Array, and S1 - S2 - d. Find number of such subsets
*/

int countPartitions(int n, int d, vector<int> &arr) {
    // Array Sum
    int sum = 0;
    for (auto val : arr) sum += val;

    // S1 will have sum as a whole, not fraction
    if ((d + sum) % 2 != 0) return 0;

    // Subset 1 sum calculation
    // Proof:
    // S1 - S2 = d
    // S1 + S2 = sum
    // S1 = (d + sum) / 2 => cannot be a fraction
    int res = (d + sum) / 2;

    // Equivalent to dp[n + 1][res + 1] as in knapsack
    vector<vector<int>> dp(n + 1, vector <int> (res + 1, 0));

    // Knapsack Code, there we take dp[n + 1][W + 1], here W ==> res
    // int dp[n + 1][res + 1];
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= res; j++) {
    //         dp[i][j] = 0;
    //     }
    // }

    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= res;  j++) {
            // knapsack code begins
            if (arr[i - 1] <= j) {
                // in knapsack, we take max, here we add
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - arr[i - 1]]) % 1000000007;
            }
            else {
                // in knapsack, if not possible to include this element
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][res];
}

void solve() {
    
}

signed main() {
    zeus;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}