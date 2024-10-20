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
    ll n; char c; cin >> n >> c;
    string s; cin >> s;

    if (count(all(s), c) == n) {
        cout << 0 << endl;
        return;
    }
    for (int i = s.size() / 2; i < s.size(); i++) {
        if (s[i] == c) {
            cout << 1 << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
    cout << s.size() << " " << s.size() - 1 << endl;
    return;
    // vll d;
    // FOR (i, 0, n) {
    //     if (s[i] != c) d.push_back(i + 1);
    // }

    // // for (auto val : d) {
    // //     cout << val << " ";
    // // }
    // // cout << endl;

    // // 2 3 4 6 9
    // if (!d.size()) cout << 0 << endl;
    // else if (d.size() == 1) {
    //     cout << 1 << endl;
    //     for (int i = 1; i <= n; i++) {
    //         if (d[0] % i != 0) {
    //             cout << i << endl;
    //             return;
    //         }
    //     }
    // }
    // else {
    //     // bool isEven = false;
    //     // for (auto val : d) {
    //     //     if (val % 2 == 0) {
    //     //         isEven = true;
    //     //         break;
    //     //     }
    //     // }
    //     // if (!isEven) {
    //     //     cout << 1 << endl;
    //     //     cout << 2 << endl;
    //     //     return;
    //     // }

    //     ll num = -1;


    //     // x = 1
    //     // bool numExists = true;
    //     // for (int j = 0; j < d.size(); j++) {
    //     //     if (d[j] % 1 == 0) {
    //     //         numExists = false;
    //     //         break;
    //     //     }
    //     // }
    //     // if (numExists) {
    //     //     num = 1;
    //     //     cout << 1 << endl;
    //     //     cout << num << endl;
    //     //     return;
    //     // }


    //     // x = 2
    //     bool numExists = true;
    //     for (int j = 0; j < d.size(); j++) {
    //         if (d[j] % 2 == 0) {
    //             numExists = false;
    //             break;
    //         }
    //     }
    //     if (numExists) {
    //         num = 2;
    //         cout << 1 << endl;
    //         cout << num << endl;
    //         return;
    //     }


    //     // x = 3
    //     numExists = true;
    //     for (int j = 0; j < d.size(); j++) {
    //         if (d[j] % 3 == 0) {
    //             numExists = false;
    //             break;
    //         }
    //     }
    //     if (numExists) {
    //         num = 3;
    //         cout << 1 << endl;
    //         cout << num << endl;
    //         return;
    //     }

    //     // x = prime other than 2, 3
    //     bool prime1, prime2;
    //     for (int i = 5; i <= n; i = i + 6) {
    //         prime1 = true, prime2 = true;
    //         if (i + 2 <= n) {
    //             for (int j = 0; j < d.size(); j++) {
    //                 if (d[j] % i == 0) prime1 = false;
    //                 if (d[j] % (i + 2) == 0) prime2 = false;
    //                 if (!prime1 and !prime2) break;
    //             }
    //             if (prime1) {
    //                 num = i;
    //                 break;
    //             }
    //             if (prime2) {
    //                 num = i + 2;
    //                 break;
    //             }
    //         }
    //         else {
    //             for (int j = 0; j < d.size(); j++) {
    //                 if (d[j] % i == 0) {
    //                     prime1 = false;
    //                     break;
    //                 }
    //             }
    //             if (prime1) {
    //                 num = i;
    //                 break;
    //             }
    //         }
    //     }
        
    //     if (num != -1) {
    //         cout << 1 << endl;
    //         cout << num << endl;
    //         return;
    //     }


    //     cout << 2 << endl;
    //     cout << d[d.size() - 1] << " ";
    //     for (int i = 1; i <= n; i++) {
    //         if (d[d.size() - 1] % i != 0) {
    //             cout << i << endl;
    //             break;
    //         }
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