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
    ll _; cin>>_;
    while(_--) {
        ll n, q; cin>>n>>q;
        // 4 5

        vll a(n), maxhs;
        FOR(i,0,n) cin>>a[i];

        vll pfx(n), pfxmax(n);
        pfx[0] = a[0];
        pfxmax[0] = a[0];
        FOR(i,1,n) pfx[i] = pfx[i-1] + a[i];
        FOR(i,1,n) pfxmax[i] = pfxmax[i-1] > a[i] ? pfxmax[i-1] : a[i]; 
        // 1 2 1 5 => a
        // 1 3 4 9 => pfx of a
        // 2 4 6 8 => height due to legs
        // As 9 > 8, 4th step is not reached => ans = 4
        while(q--) {
            // O(2*10^5*log(2*10^5))
            ll k; cin>>k;
            auto it = upper_bound(pfxmax.begin(), pfxmax.end(), k) - pfxmax.begin();
            it == 0 ? maxhs.push_back(0) : maxhs.push_back(pfx[--it]);

            // auto it = (upper_bound(a.begin(), a.end(), k) - a.begin());
            // if(it == 0) maxhs.push_back(0);
            // else maxhs.push_back(pfx[--it]);

            // ll maxh = 0;
            // FOR(i,0,n) {
            //     if (k >= a[i]) maxh = max(maxh, pfx[i]);
            //     else break;
            // }
            // maxhs.push_back(maxh);
        }
        FOR(i,0,maxhs.size()) cout<<maxhs[i]<<" ";
        cout<<endl;
    }
}