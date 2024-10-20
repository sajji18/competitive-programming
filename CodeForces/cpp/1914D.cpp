#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 4
// 3
// 1 10 1
// 10 1 1
// 1 1 10
// 4
// 30 20 10 1
// 30 5 15 20
// 30 25 10 10
// 10
//  5 19 12  3 18 18  6 17 10 13
// 15 17 19 11 16  3 11 17 17 17
//  1 17 18 10 15  8 17  3 13 12
// 10
// 17 5 4 18 12 4 11 2 16 16
// 8 4 14 19 3 12 6 7 5 16
// 3 4 8 11 10 8 10 2 20 3

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.first > b.first;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n; cin>>n;
        vpll a, b, c;
        FOR(i,0,n) {
            int x; cin>>x;
            a.push_back({x, i});
        };
        FOR(i,0,n) {
            int x; cin>>x;
            b.push_back({x, i});
        };
        FOR(i,0,n) {
            int x; cin>>x;
            c.push_back({x, i});
        };
        vpll temp1 = a, temp2 = b, temp3 = c;
        sort(temp1.begin(), temp1.end(), cmp);
        sort(temp2.begin(), temp2.end(), cmp);
        sort(temp3.begin(), temp3.end(), cmp);
        ll res = INT_MIN;
        FOR(i,0,3) {
            ll ans = temp1[i].first; 
                FOR(j,0,3) {
                    if (temp1[i].second == temp2[j].second) continue;
                    ans += temp2[j].first;
                    FOR(k,0,3) {
                        if (temp1[i].second == temp3[k].second or temp2[j].second == temp3[k].second) continue;
                        ans += temp3[k].first;
                        res = max(res, ans);
                        ans -= temp3[k].first;
                    }
                    ans -= temp2[j].first;
                }
        }
        cout<<res<<endl;
    }
}