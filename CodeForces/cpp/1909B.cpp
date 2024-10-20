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
        ll n; cin >> n;
        ll odd = 0, even = 0;
        vll a(n);
        FOR(i,0,n) {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }
        sort(all(a));
        ll ans = a[1] - a[0];
        
        for(int i=2; i<n; i++) ans = __gcd(ans, a[i] - a[i-1]);
        
        ans *= 2;
        cout << ans << endl;
        // if (n == 2) {
        //     cout << 1e18 << endl;
        //     continue;
        // }

        // if (even and odd) cout << 2 << endl;
        // else {
        //     if (odd) cout << 4 << endl;
        //     else cout << 
        // }

        // ll ans = 1e18;
        // unordered_map <ll, ll> mp;
        // for (int i=0; i<n; i++) {
        //     // ll gcd = 0;
        //     for (int j=0; j<n; j++) {
        //         if (i == j) continue;
        //         // gcd = __gcd(gcd, abs(a[i] - a[j]));
        //         // cout << gcd << " " << abs(a[i] - a[j]) << endl;
        //         mp[abs(a[i] - a[j])]++;
        //     }
        // }
    
        // for (auto val : mp) {
        //     vll temp = a;
        //     for (int i=0; i<n; i++) {
        //         temp[i] = temp[i] % val.first;
        //     }
        //     sort(all(temp));
        //     ll distinct = 1;
        //     for (int i=1; i<n; i++) {
        //         if (temp[i] != temp[i-1]) distinct++;
        //     }
        //     if (distinct == 2) ans = val.first;
        // }

        // cout << ans << endl;
    }
}