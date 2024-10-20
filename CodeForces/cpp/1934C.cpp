#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
// # define endl "\n"
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

void query (ll x, ll y) {
    cout << "? " << x << " " << y << endl;
    cout.flush();
    return;
}

void print (ll x, ll y) {
    cout << "! " << x << " " << y << endl;
    return;
}

void limit (ll &num, ll lower, ll upper) {
    if (num < lower) num++;
    else if (num > upper) num--;
}

void solve() {
    ll n, m, c1, c2, c3, c4; cin >> n >> m;
    query(1, 1);
    cin >> c1;

    ll x1, y1, x2, y2;
    if (c1 >= n) {
        x1 = n;
        y1 = 2 + (c1 - n);
    }
    else {
        x1 = 1 + c1;
        y1 = 1;
    }

    if (c1 >= m) {
        y2 = m;
        x2 = 2 + (c1 - m);
    }
    else {
        x2 = 1;
        y2 = 1 + c1;
    }

    query(x1, y1);
    cin >> c2;

    query(x2, y2);
    cin >> c3;

    x1 -= c2 / 2;
    y1 += c2 / 2;
    x2 += c3 / 2;
    y2 -= c3 / 2;

    query(x1, y1);
    cin >> c4;

    if (c4 == 0) print(x1, y1);
    else print(x2, y2);
    return;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}