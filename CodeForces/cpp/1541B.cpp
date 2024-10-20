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

// ll binpow(ll a, ll b) {
//     ll res = 1;
//     while(b > 0) {
//         if (b & 1) res = res * a;
//         a = a * a;
//         b >>= 1;
//     }
//     return res;
// }

// int main(){
//     sajji;
//     ll _; cin>>_;
//     while(_--) {
//         int n; cin>>n;
//         vll a(n+1), aj(n+1);
//         FOR(i,1,n+1) cin>>a[i];

//         // ll res = 0;
//         // FOR(i,1,n+1) {
//         //     FOR(j,i+1,n+1) {
//         //         if (a[i]*a[j] == i + j) res++;
//         //     }
//         // }
//         // cout<<res<<endl;

//         // OPTIMIZATION
//         // ll count = 0;
//         // FOR(j,1,n+1) {
//         //     ll res = abs((2*j*j + j - a[j]*a[j]*j - a[j]*a[j])/(a[j]*a[j] - 2*j - 1));
//         //     // cout<<res<<endl;
//         //     if (res != j and res >= 1 and res <= n) count++;
//         //     cout<<res<<" "; 
//         // }
//         // cout<<endl;
//         // cout<<count/2<<endl;
//         vll elem(2*n + 1);
//         FOR(i,1,n+1) {
//             elem[a[i]] = i; 
//         }

//         ll count = 0;
//         FOR(i, 3, 2*n) {
//             for(ll j=1; j*j <= i; j++) {
//                 if (i % j == 0 and j*j != i and elem[j] != 0 and elem[i/j] != 0 and elem[j] + elem[i/j] == i) count++;
//             }
//         }
//         cout<<count<<endl;
//     }
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
    ll n; cin >> n;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}