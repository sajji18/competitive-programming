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
        ll n, k; cin >> n >> k;

        if (n % 2 == 0) {
            if (k % n != 0) cout << k % n << endl;
            else cout << n << endl;
        }
        else {
            ll interval = (n) / 2;
            ll overlaps = (k - 1) / (interval);
            // if (n <= k) {
            //     cout << (k + overlaps) % n << endl;
            // }
            if ((k + overlaps) % n == 0) cout << n << endl;
            else cout << (k + overlaps) % n << endl;
        }
        // int posb = 1, posa = n;
        // k--;
        // while (k > 0) {
        //     posb++;
        //     posa--;

        //     if (posb > n) posb = 1;
        //     if (posa < 1) posa = n;

        //     if (posa == posb) posb++;

        //     if (posb > n) posb = 1;
        //     if (posa < 1) posa = n;
        //     k--;
        // }

        // cout << posb << endl;
    }
}