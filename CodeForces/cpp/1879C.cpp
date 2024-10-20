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

ll M = 998244353;

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

ll factorial (ll n) {
    ll res = 1;
    for (int i=2; i<=n; i++) {
        res = res * i % M;
    }
    return res;
}

ll nPr (ll n, ll r) {
    return factorial(n) / factorial(n-r);
}

int main(){
    sajji;
    ll _ ; cin >> _;
    while (_--) {
        string s; cin >> s;
        ll n = s.length();
        ll len = 0, num = 0, ways, stk = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                stk++;
                if (i == n - 1) {
                    len += stk;
                    num++;
                }
            }
            if (s[i] != s[i - 1] and stk > 1) {
                len += stk;
                num++;
                stk = 1;
            } 
        }

        stk = 1;
        ways = factorial((len - num));

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                stk++;
                if (i == n - 1) {
                    ways = ways * stk % M;
                    stk = 1;
                }
            }
            if (s[i] != s[i - 1] and stk > 1) {
                ways = ways * stk % M;
                stk = 1;
            } 
        }

        cout << (len - num) << " " << ways << endl;

        // ll ways = 0, minOperations = 0, streak = 1, numberOfStreaks = 0;
        // for (int i = 1; i < s.length(); i++) {
        //     if (s[i] == s[i-1]) {
        //         streak++;
        //         if (i == s.length() - 1 and streak > 1) {
        //             ways += nPr(streak, streak - 1);
        //             minOperations += streak - 1;
        //             numberOfStreaks++;
        //             continue;
        //         } 
        //     }
        //     if (s[i] != s[i-1] and streak > 1) {
        //         ways += nPr(streak, streak - 1);
        //         minOperations += streak - 1;
        //         streak = 1;
        //         numberOfStreaks++;
        //         continue;
        //     }
        // }
        // if (minOperations == 0) {
        //     cout << 0 << " " << 1 << endl;
        // }
        // else {
        //     cout << minOperations << " " << ways * numberOfStreaks << endl;
        // }
    }
}