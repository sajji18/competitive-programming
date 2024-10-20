// #include <bits/stdc++.h>
// using namespace std;

// # define ll long long
// # define FOR(i, a, b) for (int i=a; i<b; i++)
// # define RFOR(i, a, b) for (int i=a; i>=b; i--)
// # define all(x) (x).begin(), (x).end()
// # define vll vector <long long>
// # define vpll vector <pair<long long, long long>>
// # define endl "\n"
// # define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// const ll N = static_cast<ll>(2*1e5 + 1);
// ll dp[N];

// int main(){
//     sajji;
//     ll n, k, x; cin>>n>>k>>x;
//     vll a(n);
//     FOR(i,0,n) cin>>a[i];
//     sort(all(a));

//     vll diff;
//     ll groups = 1;
//     FOR(i,1,n) {
//         if (abs(a[i] - a[i-1]) > x) {
//             groups++;
//             diff.push_back(abs(a[i] - a[i-1]));
//         }
//     }
//     // cout<<groups<<endl;
//     sort(all(diff));
//     FOR(i,0,diff.size()) {
//         // cout<<"Difference is : "<<diff[i]<<" "<<"The k is : "<<k<<endl;
//         if (k >= diff[i] / x and k > 0) {
//             groups--;
//             k -= diff[i] / x;
//         }
//         else break;
//     }
//     cout<<groups<<endl;

//     // 1 1 5 8 12 13 20 22
//     // stack <pair<vll, ll>> stk;
//     // FOR(i,1,n) {
//     //     if (stk.empty()) {
//     //         vll group;
//     //         stk.push({group, 0});
//     //         continue;
//     //     }
//     //     if (!stk.empty() and a[i] - a[i-1] <= x) {
//     //         stk.top().first.push_back(a[i]);
//     //         continue;
//     //     }
//     //     ll dfx = a[i] - a[i-1];
//     //     stk.top().second = dfx;
//     // }
//     // ll groupCount = stk.size();
//     // cout<<groupCount<<endl;


// }

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
    ll n, k, x; cin >> n >> k >> x;
    vll a(n), d;
    FOR (i,0,n) cin >> a[i];

    sort(all(a));
    ll groups = 1;
    for (int i = 1; i <= n - 1; i++) {
        if (a[i] - a[i - 1] > x) {
            groups++;
            d.push_back(a[i] - a[i - 1]);
        }
    }

    // cout << groups << endl;
    // for (auto &val : d) {
    //     cout << val << " ";
    // }
    // cout << endl;

    sort(all(d));

    for (auto &val : d) {
        if (val <= 2 * x and k > 0) {
            groups--;
            k--;
        }
        else {
            if (val % x == 0) {
                if (k >= (val / x - 1)) {
                    groups--;
                    k -= (val / x - 1);
                }
            }
            else {
                if (k >= (val / x)) {
                    groups--;
                    k -= (val / x);
                }
            }
        }
    }

    cout << groups << endl;
}

int main(){
    zeus;
    ll _; _ = 1;
    while(_--) {
        solve();
    }
}
