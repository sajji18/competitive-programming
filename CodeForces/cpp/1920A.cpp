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
        int n; cin>>n;
        ll ans = 1e9;
        vll v1, v2, v3;
        unordered_map<ll, ll> mp;
        while(n--) {
            int a, x; cin>>a>>x;
            if (a == 1) v1.push_back(x);
            else if (a == 2) v2.push_back(x);
            else if (a == 3) v3.push_back(x);
        }
        ll max1 = *max_element(v1.begin(), v1.end());
        ll min2 = *min_element(v2.begin(), v2.end());
        FOR(i,0,v3.size()) {
            if (mp[v3[i]] < 1) mp[v3[i]]++;
        }

        if (max1 > min2) cout<<0<<endl;
        else if (max1 == min2) {
            bool found = false;
            FOR(i,0,v3.size()) {
                if (v3[i] == max1) {
                    found = true;
                    break;
                }
            }
            if (found) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else if (max1 < min2) {
            // cout<<"hello"<<endl;
            ans = min2 - max1 + 1;
            for(auto val : mp) {
                // cout<<val.first<<" "<<val.second<<endl;
                if (val.first >= max1 and val.first <= min2) {
                    ans--;
                } 
            }
            cout<<ans<<endl;
        }
    }
}