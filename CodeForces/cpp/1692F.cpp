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
        unordered_map <ll, ll> mp;
        vll a;
        FOR(i,0,n) {
            ll x; cin >> x;
            x %= 10;
            mp[x]++;
            if (mp[x] <= 3) a.push_back(x);
        }
        // Brute
        ll sz = a.size();
        ll count = 0;
        for (int i=0; i<sz-2; i++) {
            for (int j=i+1; j<sz-1; j++) {
                for (int k=j+1; k<sz; k++) {
                    if ((a[i] + a[j] + a[k]) % 10 == 3) count++;
                }
            }
        }
        if (count) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}