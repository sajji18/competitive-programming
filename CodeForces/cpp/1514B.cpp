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
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll factorial (ll n) {
    ll num = 1;
    for (int i = 1; i <= n; i++) {
        num = num * i % M;
    }
    return num;
}

// void solve() {
//     ll n, k; cin >> n >> k;
//     // 1. IDEA => Max Sum = (2^k - 1) + (2^k - 2) + ... upto n terms
//     // 2. But how do we ensure that the AND is 0?
//     // 3. Basically the terms should contain 2^(k-1), 2^(k-1) - 1
//     // 4. If there aren't enough terms, then either start series from 2^(k-1), 2^(k-1) - 1, ...
//     // 5. Or Use the previous series with last term as 0
//     ll sum1 = 0, sum2 = 0, sum3 = 0, AND = 1;
//     ll num1 = binpow(2, k), num2 = binpow(2, k - 1);

//     // TRYING 2^(k) - 1, 2^(k) - 2, ...
//     for (int i = 1; i <= n; i++) {
//         sum1 = sum1 + (num1 - i);
//         AND = AND & (num1 - i);
//     }

//     if (AND == 0) {
//         ll ans = factorial(n);
//         cout << ans << endl;
//         return;
//     }
    
//     // TRYING 2^(k-1) - 1, ...
//     for (int i = 1; i <= n; i++) {
//         sum2 = sum2 + (num2 - i + 1);
//     }

//     // TRYING 0 TRICK
//     for (int i = 1; i <= n - 1; i++) {
//         sum3 = sum3 + (num1 - i);
//     }

//     cout << sum1 << " " << sum2 << " " << sum3 << endl;

//     if (sum2 == sum3) {
//         ll ans = factorial(n);
//         ans = ans * 2LL % M;
//         cout << ans << endl;
//         return;
//     }
//     else {
//         ll ans = factorial(n);
//         cout << ans << endl;
//         return;
//     }

// }

void solve () {
    ll n, k; cin >> n >> k;
    ll ans = 1;
    for (int i = 1; i <= k; i++) {
        ans = ans * n % M;
    }
    cout << ans << endl;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}