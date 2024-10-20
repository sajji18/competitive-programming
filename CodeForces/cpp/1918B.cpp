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

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

// bool cmp (pair <ll, ll> &a, pair <ll, ll> &b) {
//     return a.first < 
// }

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vpll ab(n);
        FOR(i,0,n) cin >> ab[i].first;
        FOR(i,0,n) cin >> ab[i].second;
        sort(all(ab));
        for (auto pair : ab) cout << pair.first << " ";
        cout << endl;
        for (auto pair : ab) cout << pair.second << " ";
        cout << endl;
    }
}