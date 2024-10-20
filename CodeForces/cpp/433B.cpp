#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    sajji;

    ll n; cin>>n;
    vll v(n), v_copy(n);
    FOR(i,0,n) cin>>v[i];
    v_copy = v;

    vll pfx1(n), pfx2(n);

    pfx1[0] = v[0];
    FOR(i,1,n) {
        pfx1[i] = pfx1[i-1] + v[i];
    }

    sort(v.begin(), v.end());

    pfx2[0] = v[0];
    FOR(i,1,n) {
        pfx2[i] = pfx2[i-1] + v[i];
    }

    ll m; cin>>m;
    while(m--) {
        int type, l, r; cin>>type>>l>>r;
        if (type == 1) cout<<pfx1[r-1] - pfx1[l-1] + v_copy[l-1]<<endl;
        else if (type == 2) cout<<pfx2[r-1] - pfx2[l-1] + v[l-1]<<endl;
    }
}