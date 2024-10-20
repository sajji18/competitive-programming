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

ll M = 1e9 + 7;



int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n, m, k; cin >> n >> m >> k;
        vll a(n), b(m);
        FOR (i,0,n) cin >> a[i];
        FOR (i,0,m) cin >> b[i];
        ll x = 0, y = 0, z = 0;
        unordered_map <ll, ll> count1, count2;
        for (int i=0; i<n; i++) {
            if (a[i] <= k) {
                count1[a[i]]++;
                // x++;
            }
        }

        for (int i=0; i<m; i++) {
            if (b[i] <= k) {
                count2[b[i]]++;
                // y++;
            }
        }

        for (int i=1; i<=k; i++) {
            if (count1[i] != 0 and count2[i] != 0) {
                z++;
            }
            else if (count1[i] != 0 and count2[i] == 0) {
                x++;
            }
            else if (count1[i] == 0 and count2[i] != 0) {
                y++;
            }
        }

        // cout << x << " " << y << " " << z << endl;

        if ((x > k / 2) or (y > k / 2) or ((x + y + z) < k)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}