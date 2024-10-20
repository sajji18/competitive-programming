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

bool cmp (pair <ll, ll> &a, pair <ll, ll> &b) {
    // return (a.first + a.second) < (b.first + b.second);
    return a.second > b.second;
}

// min  secondmin
//   5          7
//   6          8
//   2          9


int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vector <vll> list, copy;
        vpll minimumList;
        FOR(i,0,n) {
            ll m; cin >> m;
            vll l;
            FOR(j,0,m) {
                ll x; cin >> x;
                l.push_back(x);
            }
            list.push_back(l);
        }

        copy = list;

        FOR(i,0,n) {
            sort(all(copy[i]), greater <ll> ());
            minimumList.push_back(make_pair(copy[i][copy[i].size() - 1], copy[i][copy[i].size() - 2]));
        }
        sort(all(minimumList), cmp);

        ll sum = 0;
        ll res = INT_MAX;
        for (int i=0; i<minimumList.size(); i++) {
            res = min(res, min(minimumList[i].first, minimumList[i].second));
        }
        sum += res;

        FOR(i,0,minimumList.size() - 1) {
            sum += max(minimumList[i].first, minimumList[i].second);
        }

        cout << sum << endl;

    }
}