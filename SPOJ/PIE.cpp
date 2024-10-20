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
double PI = 3.14159265359;
ll n, f;
double eps = 1e-6;
double radii[100000];

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

// double area (ll radius) {
//     return PI * radius * radius;
// }

bool predicate (double volume) {
    ll num = 0;
    if (volume == 0) return 0;
    for (int i = 0; i < n; i++) {
        double a = PI * radii[i] * radii[i];
        if (a > volume) {
            num += static_cast <ll> (floor(a / volume));
        }
    }

    // cout << "Volume is : " << volume << " and Number of possible pieces is: " << num << endl;
    return num >= (f + 1);
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        cin >> n >> f;
        for (int i = 0; i < n; i++) cin >> radii[i];

        sort(radii, radii + n);
        double lo = 0, hi = PI * radii[n - 1] * radii[n - 1];

        while (hi - lo > eps) {
            double mid = lo + (hi - lo) / 2;
            // cout << "hi is : " << hi << " and lo is : " << lo << endl;
            if (predicate(mid)) {
                lo = mid;
            }
            else {
                hi = mid;
            }
        }

        cout << lo << endl;
    }
}