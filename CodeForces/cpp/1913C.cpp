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
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

bool cmp (pair <ll, ll> &a, pair <ll, ll> &b) {
    return a.first + a.second > b.first + b.second;
}

int main(){
    sajji;
    ll m; cin >> m;
    vll arr(30);
    while (m--) {
        multiset <ll> s;
        ll t, v; cin >> t >> v;
        if (t == 1) {
            arr[v++];
            s.insert(binpow(2, v));
        }
        else {
            
        }
    }
}