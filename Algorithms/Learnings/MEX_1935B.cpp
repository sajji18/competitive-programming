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
    vll a(n + 1), cnt1(n + 1), cnt2(n + 2);
    FOR (i, 1, n + 1) {
        cin >> a[i];
        cnt2[a[i]]++;
    }
    // mex of the two segments
    ll mex1 = 0, mex2 = 0;
    while (cnt2[mex2]) mex2++;
    for (int i = 1; i <= n; i++) {
        cnt2[a[i]]--;
        if (cnt2[a[i]] == 0 and a[i] < mex2) mex2 = a[i];

        cnt1[a[i]]++;
        while (cnt1[mex1]) mex1++;

        if (mex1 == mex2) {
            cout << 2 << endl;
            cout << 1 << " " << i << endl;
            cout << i + 1 << " " << n << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}

/*

*** Try to think out of the box
*** If something can be partitioned in k different segments, think if the same can be done in 2 or 3 partitions
*** TLE cases : string concatenation, copying data structure

*/