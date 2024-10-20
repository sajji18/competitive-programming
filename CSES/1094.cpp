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
    ll n; cin >> n;
    vll a(n);
    FOR(i,0,n) cin >> a[i];

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    // 3 2 5 1 7
    for (int i=1; i<n; i++) {
        if (a[i] >= a[i-1]) continue;
        else {
            ans += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << ans << endl;
}