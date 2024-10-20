#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define zeus ios_base::sync_with_stdio(false); cin.tie(NULL);

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

bool cmp(pair <ll, ll> &a, pair <ll, ll> &b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else return a.first > b.first;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        ll n, k; cin >> n >> k;
        vpll dragons;
        FOR(i,0,n) {
            ll x; cin >> x;
            x = x % k;
            dragons.push_back(make_pair(x, i + 1));
        }

        sort(all(dragons), cmp);
        // vll a(n);
        // FOR(i,0,n) cin >> a[i];
        // FOR(i,0,n) a[i] = a[i] % k;
        // vll ans;
        // FOR(i,0,n) {
        //     if (a[i] == 0) ans.push_back(i + 1);
        // } 
        
        FOR(i,0,n) {
            if (dragons[i].first == 0) cout << dragons[i].second << " ";
        }
        FOR(i,0,n) {
            if (dragons[i].first != 0) cout << dragons[i].second << " ";
        }
        cout << endl;
    }
}