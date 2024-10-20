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

ll dx[6] = {4, 8, 15, 16, 23, 42};

// Using DP => Creating adjacency matrix... demn
vector <ll> adj[43];

int main(){
    sajji;
    ll n; cin>>n;
    vll a(n);
    FOR(i,0,n) cin>>a[i];

    // Storing indexes corresponding to the value
    FOR(i,0,n) {
        if (a[i] == 4) adj[a[i]].push_back(i);
        else if (a[i] == 8) adj[a[i]].push_back(i);
        else if (a[i] == 15) adj[a[i]].push_back(i);
        else if (a[i] == 16) adj[a[i]].push_back(i);
        else if (a[i] == 23) adj[a[i]].push_back(i);
        else if (a[i] == 42) adj[a[i]].push_back(i);
    }

    ll minimum = LLONG_MAX;
    for(auto val : dx) {
        minimum = min(minimum, static_cast<ll>(adj[val].size()));
    }
    // cout<<minimum<<endl;

    ll ans = n;
    for (int i=0; i<minimum; i++) {
        // cout<<adj[4][i]<<" "<<adj[8][i]<<endl;
        if (adj[4][i] < adj[8][i]
            and adj[8][i] < adj[15][i]
            and adj[15][i] < adj[16][i]
            and adj[16][i] < adj[23][i]
            and adj[23][i] < adj[42][i]) {
                ans -= 6;
            }
        else {
            continue;
        }
    }

    cout<<ans<<endl;

    // unordered_map <ll, ll> mp;
    // mp[4] = 0;
    // mp[8] = 0;
    // mp[15] = 0;
    // mp[16] = 0;
    // mp[23] = 0;
    // mp[42] = 0;
    // FOR(i,0,n) mp[a[i]]++;

    // ll minimum = INT_MAX;
    // for (auto val : mp) {
    //     minimum = min(val.second, minimum);
    // }

    // ll ans = n;

    // FOR(num, 0, minimum){
    //     stack <ll> stk;
    //     ll pos = 0;
    //     auto it = a.begin();
    //     while(it != a.end()) {
    //         // if (pos >= 4) cout<<a[i]<<" "<<dx[pos]<<endl;
    //         if (!stk.empty() and stk.top() == dx[5]) break;
    //         else {
    //             if (*it == dx[pos]) {
    //                 stk.push(*it);
    //                 pos++;
    //                 it = a.erase(it);
    //             }
    //             else {
    //                 it++;
    //             }
    //         }
    //         // i++;
    //     }
    //     // cout<<stk.top()<<endl;
    //     if (!stk.empty() and stk.top() == dx[5]) ans -= 6;
    //     else break;
    //     // cout<<ans<<endl;
    // }
    // cout<<ans<<endl;
}