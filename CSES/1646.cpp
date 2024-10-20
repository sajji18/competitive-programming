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

int main(){
    sajji;
    ll n, q; cin >> n >> q;

    vll a(n), pfx(n);
    FOR(i,0,n) cin >> a[i];
    
    pfx[0] = a[0];
    FOR(i,1,n) pfx[i] = pfx[i-1] + a[i];

    while(q--) {
        ll l, r; cin >> l >> r;
        cout << pfx[r-1] - pfx[l-1] + a[l-1] << endl;
    }
}