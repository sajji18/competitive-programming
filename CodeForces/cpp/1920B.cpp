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

// 8
// 1 1 1
// 1
// 4 1 1
// 3 1 2 4
// 6 6 3
// 1 4 3 2 5 6
// 6 6 1
// 3 7 3 3 32 15
// 8 5 3
// 5 5 3 3 3 2 9 9
// 10 6 4
// 1 8 2 9 3 3 4 5 3 200
// 2 2 1
// 4 3
// 2 1 2
// 1 3

// 0
// 2
// 0
// 3
// -5
// -9
// 0
// -1

int main(){
    sajji;
    ll _; cin >> _;
    while(_--) {
        ll n, k, x;
        cin >> n >> k >> x;
        vll a(n);
        FOR(i,0,n) cin>>a[i];

        // 1 2 3 4 5 6 => k - 6, x - 3
        sort(all(a));
        ll sum = accumulate(all(a), 0LL);

        ll temp = sum;
        for(int i = n - 1; i >= n - x; i--) {
            temp -= 2 * a[i];
        }

        vll dp(k + 1, 0);
        dp[0] = temp;
        for(int i = 1; i <= k; i++) {
            if (n - x - i >= 0){
                dp[i] = dp[i - 1] + a[n - i] - 2*(a[n - x - i]);
            }
            else {
                dp[i] = dp[i - 1] + a[n - i];
            }
        }
        ll maximum = *max_element(all(dp));
        cout<<maximum<<endl;
    }
}