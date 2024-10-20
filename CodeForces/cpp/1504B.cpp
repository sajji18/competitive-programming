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

// void solve() {
//     ll n; cin >> n;
//     string a, b; cin >> a >> b;

//     vll flips;
//     set <ll> ids;
//     FOR(i,0,n) {
//         if (a[i] != b[i]) flips.push_back(i);
//     }

//     ll one = 0, zero = 0;
//     FOR(i,0,n) {
//         if (a[i] == '1') one++;
//         else zero++;
//         if (one == zero) ids.insert(i);
//     }

//     if (!flips.size()) {
//         cout << "YES" << endl;
//         return;
//     }
//     else if (flips.size() and !ids.size()) {
//         cout << "NO" << endl;
//         return;
//     }

//     // for (auto &val : flips) {
//     //     cout << val << " ";
//     // }
//     // cout << endl;

//     vpll intervals;
//     ll start = flips[0];
//     for (int i = 1; i < flips.size(); i++) {
//         if (flips[i] == flips[i - 1] + 1) {
//             if (i == flips.size() - 1) {
//                 intervals.push_back(make_pair(start - 1, flips[i]));
//             }
//             else continue;
//         }
//         else {
//             if (start == flips[i - 1]) {
//                 intervals.push_back(make_pair(start, start));
//                 start = flips[i];
//             }
//             else {
//                 intervals.push_back(make_pair(start - 1, flips[i - 1]));
//                 start = flips[i];
//             }
//         }
//     }

//     if (flips.size() == 1 and flips[0] != 0) {
//         cout << "NO" << endl;
//         return;
//     }

//     // for (auto interval : intervals) {
//     //     cout << interval.first << " " << interval.second << endl;
//     // }

//     for (auto interval : intervals) {
//         if (interval.first <= 0 or interval.first == interval.second) {
//             if (ids.find(interval.second) == ids.end()) {
//                 cout << "NO" << endl;
//                 return;
//             }
//         }
//         else {
//             if (ids.find(interval.first) == ids.end() or ids.find(interval.second) == ids.end()) {
//                 cout << "NO" << endl;
//                 return;
//             }
//         }
//     }

//     cout << "YES" << endl;
//     return ;

//     // idx => 2 8 for 0111010000
//     // FOR(i,idx[idx.size() - 1], n) {
//     //     if (a[i] != b[i]) {
//     //         cout << "NO" << endl;
//     //         return;
//     //     }
//     // }


// }

// void solve () {
//     // 0111010000 => 1011010000
//     // 0100101100
//     ll n; cin >> n;
//     string a, b; cin >> a >> b;

//     if (a == b) {
//         cout << "YES" << endl;
//         return ;
//     }

//     vll pfx;
//     FOR(i,0,n) {
//         if (a[i] != b[i]) pfx.push_back(i);
//     }

//     ll pos = 0;
//     vll intervals;
//     while (pos < pfx.size() - 1) {
//         if (pfx[pos] == 0 and pfx[pos + 1] != 1) {
//             intervals.push_back(pos);
//             pos++;
//         }
//         else if (pfx[pos] == pfx[pos + 1] - 1) {
//             if (pos == pfx.size() - 2) {
//                 intervals.push_back(pos + 1);
//                 break;
//             }
//             pos++;
//         }
//         else {
//             if (pos == pfx.size() - 2) {
//                 intervals.push_back(pos);
//                 intervals.push_back(pos + 1);
//                 break;
//             }
//             intervals.push_back(pos);
//             pos++;
//         }
//     }

//     ll res1 = 0, res2 = 0;
//     set <ll> valid;
//     FOR(i,0,n) {
//         if (a[i] == '1') res1++;
//         else res2++;
//         if (res1 == res2) {
//             valid.insert(i);
//         }
//     }

//     for (auto &val : intervals) {
//         if (valid.find(val) == valid.end()) {
//             cout << "NO" << endl;
//             return;
//         }
//     }

//     cout << "YES" << endl;
//     return;
// }

void solve () {
    ll n; cin >> n;
    string a, b; cin >> a >> b;
    int pos1 = 0, zero = 0, one = 0;
    vpll pairs;
    for (int pos2 = 0; pos2 < n; pos2++) {
        if (a[pos2] == '0') zero++;
        else one++;
        if (one == zero) {
            pairs.push_back(make_pair(pos1, pos2));
            pos1 = pos2 + 1;
        }
    }

    for (auto &pair : pairs) {
        // cout << pair.first << " " << pair.second << endl;
        ll start = pair.first, end = pair.second;
        if (a[start] == b[start]) continue;
        else {
            for (auto i = start; i <= end; i++) {
                if (a[i] == '0') a[i] = '1';
                else a[i] = '0';
            }
        }
    }

    if (a != b) cout << "NO" << endl;
    else cout << "YES" << endl;

    return ;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}