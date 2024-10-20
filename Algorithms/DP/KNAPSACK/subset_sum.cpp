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
    Check if any subset with a given sum exists in the array
*/

// Iterative Code (Similar to Knapsack)
bool subset_sum(int n, int k, vector<int> &arr) {
    bool dp[n + 1][k + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (i == 0) dp[i][j] = 0;
            if (j == 0) dp[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] | dp[i - 1][j];
            }
            else dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][k];
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
