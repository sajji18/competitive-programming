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

void solve() {
    ll n; cin >> n;
    vll a(n);
    FOR(i,0,n) cin >> a[i];
    // Brute force
    vector <pair<ll, pair<ll, ll>>> ans;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (a[j] - a[k] <= a[i + 1]) {
                        a[i] = a[j] - a[k];
                        ans.push_back({i + 1, {j + 1, k + 1}});
                    }
                }
            }
        }
    }

    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            ok = false;
            break;
        }
    }

    if (!ok) {
        cout << -1 << endl;
    }
    else {
        cout << ans.size() << endl;
        for (auto &val : ans) {
            cout << val.first << " " << val.second.first << " " << val.second.second << endl;
        }
    }
    // vpll temp;
    // vector <pair<ll, pair<ll, ll>>> ans;
    // FOR (i, 0, n) {
    //     temp.push_back(make_pair(a[i], i));
    // }
    // sort(all(temp));
    // ll posl = 0, posr = n - 1;
    // for (int i = 0; i < n - 1; i++) {
    //     if (posl <= posr) break;
    //     if (a[i] > a[i + 1]) {
    //         if (i == temp[posr].second) {
    //             posr--;
    //             a[i] = temp[posl].first - temp[posr].first;
    //             ans.push_back({i+1, {posl+1, posr+1}});
    //             // posr--;
    //             // posl++;
    //         }
    //         else if (i == temp[posl].second) {
    //             posl++;
    //             a[i] = temp[posl].first - temp[posr].first;
    //             ans.push_back({i+1, {posl+1, posr+1}});
    //             // posr--;
    //             // posl++;
    //         }
    //         else {
    //             a[i] = temp[posl].first - temp[posr].first;
    //             ans.push_back({i+1, {posl+1, posr+1}});
    //             posr--;
    //             posl++;
    //         }
    //     }
    // }
    // for (auto &val : a) {
    //     cout << val << " ";
    // }
    // cout << endl;
    // bool isPossible = true;
    // FOR (i,1,n) {
    //     if (a[i] < a[i - 1]) {
    //         isPossible = false;
    //         break;
    //     }
    // }

    // if (!isPossible) cout << -1 << endl;
    // else {
    //     cout << ans.size() << endl;
    //     for (auto val : ans) {
    //         cout << val.first << " " << val.second.first << " " << val.second.second << endl;
    //     }
    // }
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}