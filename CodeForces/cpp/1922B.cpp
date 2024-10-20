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

ll M = 1e9 + 7;

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vll a(n);
        map <ll, ll> mp;
        FOR(i,0,n) {
            cin >> a[i];
            mp[a[i]]++;
        }
        // if (n <= 2) {
        //     cout << 0 << endl;
        //     continue;
        // }
        if (n <= 2) {
            cout << 0 << endl;
            continue;
        }
        ll ans = 0;
        
        ll smaller = 0;
        for (auto val : mp) {
            if (val.second >= 3) ans += ((val.second) * (val.second - 1) * (val.second - 2)) / 6;
            if (val.second >= 2) ans += ((val.second) * (val.second - 1) * smaller) / 2;
            smaller += val.second;
        }
        
        cout << ans << endl;
        
        // stack <ll> stk;
        // stk.push(a[0]);
        // for (int i = 1; i < n; i++) {
        //     if (stk.top() != a[i]) stk.push(a[i]);
        // }

        // vll temp;
        // while(!stk.empty()) {
        //     temp.push_back(stk.top());
        //     stk.pop();
        // }

        // reverse(all(temp));

        // FOR(i,0,temp.size()) cout << temp[i] << " ";
        // cout << endl;

        // if (temp.size() >= 3) {
        //     for (int i = 2; i < temp.size(); i++) {
        //         if (temp[i] == temp[i-1] + temp[i-2]) ans -= mp[max({ temp[i-2], temp[i-1], temp[i] })];
        //     }
        // }
        
        // cout << ans << endl;
    }
}