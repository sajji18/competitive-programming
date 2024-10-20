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

bool cmp_pair(const pair<long long, long long>& a, const pair<long long, long long>& b) {
    return ((a.second - a.first) > (b.second - b.first));
}

bool cmp_ll(ll a, ll b) {
    return a > b;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n; cin>>n;
        // vll l(n), c(n), ans;
        // set <ll> r;
        // FOR(i,0,n) cin>>l[i];
        // FOR(i,0,n) {
        //     ll x; cin>>x;
        //     r.insert(x);
        // }
        // FOR(i,0,n) cin>>c[i];

        // // sort(all(l));
        // // sort(all(r));
        // sort(all(l));
        // // sort(all(r), cmp_ll);

        // // vpll lr;
        // // FOR(i,0,n) {
        // //     lr.push_back({l[i], r[i]});
        // // }
    
        // // // FOR(i,1,n) {
        // // //     if (lr[i].second - lr[i].first > lr[i-1].second - lr[i].first and lr[i].first < lr[i-1].second) {
        // // //         swap(lr[i].first, lr[i-1].first);
        // // //     }
        // // // }
        // // sort(all(lr), cmp_pair);
        // sort(c.rbegin(), c.rend());

        // RFOR(i,n-1,0) {
        //     auto it = r.upper_bound(l[i]);
        //     ans.push_back(*it - l[i]);
        //     r.erase(it);
        // }

        // sort(all(ans));

        // ll res = 0;
        // FOR(i,0,n) res += c[i]*(ans[i]);
        // cout<<res<<endl;
        vll l(n), r(n), c(n), diff;
        FOR(i,0,n) cin>>l[i];
        FOR(i,0,n) cin>>r[i];
        FOR(i,0,n) cin>>c[i];
        sort(all(l));
        sort(all(r));
        sort(all(c), cmp_ll);
        FOR(i,0,n) {
            ll lmax = l.back();
            diff.push_back(r[i] - lmax);
            l.pop_back();
        }
        sort(diff.begin(), diff.end());
        ll res = 0;
        FOR(i,0,n) res += c[i]*(diff[i]);
        cout<<res<<endl;

    }
}