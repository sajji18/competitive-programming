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

        //   1 20  1 20
        // 100 15 10 20
        // sort(all(a), greater <ll> ());
        // sort(all(b), greater <ll> ());

        // for (int i=0; i<pairs.size(); i++) {
        //     if (i % 2 == 0) {
        //         // alice turn
        //         ll bob_max = INT_MIN;
        //         for (int j=0; j<pairs.size(); j++) {
        //             if (pairs[j].first != 0) {
        //                 bob_max = max(bob_max, pairs[j].second);
        //             }
        //         }
        //         for (auto pair : pairs) {
        //             if (pair.second == bob_max) {
        //                 if (pair.first and pair.second) {
        //                     pair.first--;
        //                     pair.second = 0;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        //     else {
        //         // bob turn
        //         ll alice_max = INT_MIN;
        //         for (int j=0; j<pairs.size(); j++) {
        //             if (pairs[j].second != 0) {
        //                 alice_max = max(alice_max, pairs[j].first);
        //             }
        //         }
        //         for (auto pair : pairs) {
        //             if (pair.first == alice_max) {
        //                 if (pair.first and pair.second) {
        //                     pair.second--;
        //                     pair.first = 0;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        ll alice = 0, bob = 0;
        // for (auto pair : pairs) {
        //     alice += pair.first;
        //     bob += pair.second;
        // }

        // cout << alice - bob << endl;

        sort(all(pairs), cmp);
        for (ll i=0; i<pairs.size(); i++) {
            if (i % 2 == 0) alice += pairs[i].first - 1;
            else bob += pairs[i].second - 1;
        }

        cout << alice - bob << endl;
    }
}