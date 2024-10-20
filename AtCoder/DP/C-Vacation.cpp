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
    ll n; cin>>n;
    ll a[n+1][4];
    FOR(i,1,n+1) {
        FOR(j,1,4) {
            cin>>a[i][j];
        }
    }
    ll dp[n+1][4];
    dp[1][1] = a[1][1];
    dp[1][2] = a[1][2];
    dp[1][3] = a[1][3];

    FOR(i,2,n+1) {
        dp[i][1] = a[i][1] + max(dp[i-1][2], dp[i-1][3]);
        dp[i][2] = a[i][2] + max(dp[i-1][1], dp[i-1][3]);
        dp[i][3] = a[i][3] + max(dp[i-1][1], dp[i-1][2]);
    }
    
    cout<<max({dp[n][1], dp[n][2], dp[n][3]})<<endl;
}