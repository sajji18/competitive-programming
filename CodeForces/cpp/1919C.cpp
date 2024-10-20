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

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vll a(n), s, t;
        FOR(i,0,n) cin >> a[i];
        ll p = 0;
        t.push_back(a[n - 1]);
        ll sl = INT_MAX;
        for (int i = n - 2; i >= 0; i--) {
            // if (a[i] >= t[t.size() - 1]) t.push_back(a[i]);
            // else {
            //     s.push_back(a[i]);
            // }
            if (sl >= t[t.size() - 1]) {
                if (a[i] >= sl) {
                    s.push_back(a[i]);
                    sl = a[i];
                }
                else if (a[i] >= t[t.size() - 1]) {
                    t.push_back(a[i]);
                }
                else {
                    s.push_back(a[i]);
                    sl = a[i];
                }
            }
            else {
                if (a[i] >= t[t.size() - 1]) {
                    t.push_back(a[i]);
                }
                else if (a[i] >= sl) {
                    s.push_back(a[i]);
                    sl = a[i];
                }
                else {
                    t.push_back(a[i]);
                }
            }
        }
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        for (int i = 1; i < s.size(); i++) {
            if (s[i] > s[i - 1]) p++;
        }
        for (int i = 1; i < t.size(); i++) {
            if (t[i] > t[i - 1]) p++;
        }
        if ((s.size() == n or t.size() == n) and p != 0) p--;
        cout << p << endl;
    }
}
