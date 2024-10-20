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

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        int n; cin >> n;
        string s; cin >> s;
        ll score = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '@') score++;
            else if (s[i] == '*') {
                if (i != n) {
                    if (s[i + 1] == '*') break;
                }
                continue;
            }
        }
        cout << score << endl;
    }
}