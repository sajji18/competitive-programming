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
    Find longest common subsequence between two strings X and Y
*/

// Brute force Recursion
int lcs1 (string x, string y, int n, int m) {
    if (n == 0 || m == 0) return 0;
    if (x[n - 1] == y[m - 1]) return 1 + lcs1(x, y, n - 1, m - 1);
    else return max(lcs1(x, y, n, m - 1), lcs1(x, y, n - 1, m));
}

// Memoization
int dp[1001][1001]; // dp[n + 1][m + 1] => all values -1
int lcs2 (string x, string y, int n, int m) {
    if (n == 0 || m == 0) return 0;
    if (dp[n][m] != -1) return dp[n][m];
    if (x[n - 1] == y[m - 1]) return dp[n][m] = 1 + lcs2(x, y, n - 1, m - 1);
    else return dp[n][m] = max(lcs2(x, y, n, m - 1), lcs2(x, y, n - 1, m));
}

// Top Down DP
int lcs3(string s, string t) {
	int m = s.length(), n = t.length();
	int dp[m + 1][n + 1];
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0) dp[i][j] = 0;
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (s[i - 1] == t[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
			else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
		}
	}
	return dp[m][n];
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
