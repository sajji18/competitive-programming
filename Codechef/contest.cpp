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

bool cmp (pair <ll, pair<ll, ll>> &a, pair <ll, pair<ll, ll>> &b) {
    return a.first < b.first;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        ll n, a, b; cin >> n >> a >> b;
        if (a == b) {(n % (a + 1) != 0) ? cout << "Alice" << endl : cout << "Bob" << endl;}
        else if (n > a and b > a) {
            cout << "Bob" << endl;
        }
        else cout << "Alice" << endl;
    }
}