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

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

bool cmp (pair <ll, ll> &a, pair <ll, ll> &b) {
    return a.first + a.second > b.first + b.second;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vpll pairs;
        vll a(n), b(n);
        FOR(i,0,n) cin >> a[i];
        FOR(i,0,n) cin >> b[i];

        for (int i=0; i<n; i++) {
            pairs.push_back(make_pair(a[i], b[i]));
        }

        // Both want to remove each others max marble color
        ll alice = 0, bob = 0;
        sort(all(pairs), cmp);

        for (int i=0; i<pairs.size(); i++) {
            if (i % 2 == 0) alice += pairs[i].first - 1;
            else bob += pairs[i].second - 1;
        }

        cout << alice - bob << endl;
    }
}