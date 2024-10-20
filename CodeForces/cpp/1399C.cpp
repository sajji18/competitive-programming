#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 5
// 5
// 1 2 3 4 5
// 8
// 6 6 6 6 6 6 8 8
// 8
// 1 2 2 1 2 1 1 2
// 3
// 1 3 3
// 6
// 1 1 3 4 2 2

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin>>n;
        vll w(n);
        FOR(i,0,n) cin>>w[i];

        if (n == 1) {
            cout<<0<<endl;
            continue;
        }

        // sort(w.begin(), w.end());
        // ll mxsum = *(w.end()-2) + *(w.end()-1);
        ll res = INT_MIN;

        unordered_map <ll, ll> mp;
        FOR(i,0,n) {
            FOR(j,0,n) {
                if (i == j) continue;
                mp[w[i] + w[j]]++;
            }
        }

        // for (auto val : mp) {
        //     if (val.first) res = max(res, val.second);
        // }

        for(auto val : mp) {
            vll temp = w;
            ll pairs = 0;
            FOR(i,0,n) {
                FOR(j,0,n) {
                    if (i == j) continue;
                    if (temp[i] + temp[j] == val.first) {
                        pairs++;
                        temp[i] = INT_MIN;
                        temp[j] = INT_MIN;
                        break;
                    }
                }
            }
            res = max(res, pairs);
            // mxsum--;
        }
        cout<<res<<endl;
    }
}