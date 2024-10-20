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

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        string s; cin >> s;

        // if (n % 2 == 1) cout << 1 << endl;
        // else {
        unordered_map <char, ll> mp;
        for (auto character : s) {
            mp[character]++;
        }
        ll maxm = INT_MIN;
        for (auto value : mp) {
            maxm = max(value.second, maxm);
        }

        if (maxm > n / 2) {
            cout << (n - 2 * (n - maxm)) << endl; // total - 2 * (number of pairs possible)
        }
        else cout << n % 2 << endl; // pair always possible => 1 for odd, 0 for even
            // vll values;
            // for (auto &value : mp) {
            //     values.push_back(value.second);
            // }

            // bool equal = true;
            // for (int i=1; i<values.size(); i++) {
            //     if (values[i] != values[i-1]) {
            //         equal = false;
            //         break;
            //     }
            // }

            // sort(all(values), greater <ll> ());

            // ll c_max = values[0];
            // for (int i=1; i<values.size(); i++) {
            //     if (c_max >= values[i]) c_max -= values[i];
            //     else c_max = values[i] - c_max;
            // }

            // cout << c_max << endl;
        // }
        // if (n == 1) {
        //     cout << 1 << endl;
        //     continue;
        // }
        
        
    }
}