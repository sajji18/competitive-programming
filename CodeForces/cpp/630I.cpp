#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll factorial (ll n) {
    if (n == 1) return 1;
    return n*factorial(n-1);
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){
    sajji;
    ll n; cin>>n;
    // ll spc = 2*n - 2;
    // 3 => 24
    ll ans = 4*3*binpow(4, n-3)*2 + (n-3)*4*3*3*binpow(4, n-4);
    cout<<ans<<endl;
}