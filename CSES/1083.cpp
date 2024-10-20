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

ll dp[200001];

int main(){
    sajji;
    ll n, ans; cin >> n;
    vll a;

    for (int i = 1; i <= n - 1; i++) {
        ll x; cin >> x;
        dp[x]++;
    }

    FOR(i,1,n+1) {
        if (dp[i] == 0) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    // 1 2 3 5
}