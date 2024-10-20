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
    return a.second < b.second;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        ll n, p; cin >> n >> p;
        vpll residents(n);
        FOR(i,0,n) cin >> residents[i].first;
        FOR(i,0,n) cin >> residents[i].second;
        sort(all(residents), cmp);
        // 1 1 2 2 3 3
        // 3 6 2 4 3 6
        // 2 1 3 2 1 3
        // 2 3 3 4 6 6
        // for (auto val : residents) {
        //     cout << val.first << " ";
        // }
        // cout << endl;
        // for (auto val : residents) {
        //     cout << val.second << " ";
        // }

        ll num = n, cost = 0;

        num--;
        cost += p;

        FOR(i,0,n) {
            if (residents[i].second <= p) {
                // cout << "NUm is " << num << " and cost is " << cost << endl;
                if (num >= residents[i].first) {
                    cost += residents[i].first * residents[i].second;
                    num -= residents[i].first;
                    // cout << "NUm is " << num << " and cost is " << cost << endl;
                }
                else {
                    cost += num * residents[i].second;
                    num = 0;
                    // cout << "NUm is " << num << " and cost is " << cost << endl;
                }
                if (num == 0) break;
            }
            else {
                break;
            }
        }

        if (num != 0) {
            cost += num * p;
        }

        cout << cost << endl;
    }
}