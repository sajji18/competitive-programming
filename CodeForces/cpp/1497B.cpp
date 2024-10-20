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

// bool cmp (ll &a, ll &b) {
//     return (a + b) % m == 0;
// }

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n, m; 
        cin >> n >> m;
        vll a(n);
        FOR (i,0,n) cin >> a[i];
        FOR (i,0,n) {
            a[i] = a[i] % m;
        }
        sort(all(a));
        map <ll, ll> mp;
        FOR(i,0,n) {
            mp[a[i]]++;
        }

        // for (auto val : mp) {
        //     cout << val.first << " ";
        // }
        // cout << endl;

        ll ans = 0;
        set<int> visitedKeys;
        for (auto &val : mp) {
            ll key = val.first, value = val.second;
            // cout << "Answer is " << ans << " And key, value " << key << " " << value << endl;
            if (visitedKeys.find(key) != visitedKeys.end() || visitedKeys.find(m - key) != visitedKeys.end()) {
                continue; 
            }
            if (key == 0 or key == m - key) ans++;
            else {
                auto it = mp.find(m - key);
                if (it != mp.end()) {
                    if (abs(mp[key] - mp[m - key]) <= 1) {
                        ans++;
                        visitedKeys.insert(key);
                        visitedKeys.insert(m - key);
                        // cout << "Size of Map changed : " << mp.size() << endl;
                    }
                    else {
                        ans++;
                        ans += (max(mp[key], mp[m - key]) - min(mp[key], mp[m - key]) - 1);
                        visitedKeys.insert(key);
                        visitedKeys.insert(m - key);
                        // cout << "Size of Map changed : " << mp.size() << endl;
                    }
                }
                else {
                    ans += value;
                }
                // mp.erase(m - key);
            }
        }

        cout << ans << endl;
        // THIS LOGIC IS CORRECT
        // vector <ll> uniques;
        // uniques.push_back(a[0]);
        // FOR(i,1,n) {
        //     if (a[i] != uniques[uniques.size() - 1]) uniques.push_back(a[i]);
        // }
        // ll worst = n;
        // // cout << "Size is : " << uniques.size() << endl;
        // ll it = 1, sz = 0;
        // if (uniques.size() & 1 == 0) {
        //     sz = uniques.size() / 2;
        // }
        // else sz = uniques.size() / 2 + 1;

        // for (auto val : uniques) {
        //     // cout << mp[val] << " " << mp[m - val] << endl;
        //     if (it > sz) break;
        //     if (val == 0) {
        //         worst -= (mp[val] - 1);
        //         continue;
        //     }
        //     if (val == (m - val)) {
        //         worst -= (mp[val] - 1);
        //     }
        //     else {
        //         if (mp[val] == mp[m - val]) {
        //             worst = worst - (mp[val] + mp[m - val]) + 1;
        //         }
        //         else {
        //             worst = worst - (min(mp[val], mp[m - val])) - (min(mp[val], mp[m - val])) - 1;
        //         }
        //     }
        //     it++;
        // }
        // cout << worst << endl;
    }
}