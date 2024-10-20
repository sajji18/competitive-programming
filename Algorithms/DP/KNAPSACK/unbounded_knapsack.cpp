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
    Unbounded KNAPSACKkkkkkkkkkkkk
*/

// Brute Force Recursion
int unbounded_knapsack (int wt[], int val[], int w, int n) {
    if (n == 0 || w == 0) return 0;
    // even when an item is selected, call recursion for (n) nor (n - 1) since it can be selected again
    if (wt[n - 1] <= w) return max(val[n - 1] + unbounded_knapsack(wt, val, w - wt[n - 1], n), unbounded_knapsack(wt, val, w, n - 1));
    else return unbounded_knapsack(wt, val, w, n - 1);
}

// Memoization
int dp[1001][1001]; // all values -1 initially
int unbounded_knapSack (int wt[], int val[], int w, int n) {
    if (n == 0 || w == 0) return 0;
    if (dp[n][w] != -1) return dp[n][w];
    // even when an item is selected, call recursion for (n) nor (n - 1) since it can be selected again
    if (wt[n - 1] <= w) return dp[n][w] = max(val[n - 1] + unbounded_knapSack(wt, val, w - wt[n - 1], n), unbounded_knapSack(wt, val, w, n - 1));
    else return dp[n][w] = unbounded_knapSack(wt, val, w, n - 1);
}

void solve() {
    // Top down
    int wt[] = {};
    int val[] = {};
    int dp[101][101];
    // Initialization
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
        }
    }
    // Top down
    for (int i = 1; i < 101; i++) {
        for (int j = 1; j < 101; j++) {
            // change i - 1 in knapsack to i in unbounded for when an item is selected
            if (wt[i - 1] <= j) dp[i][j] = max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
            else dp[i][j] = dp[i - 1][j];
        }
    }
}

signed main() {
    zeus;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}