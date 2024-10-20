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

ll binpow (ll a, ll b) {
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
        ll n, m; cin >> n >> m;

        deque <ll> a, copy;
        string s;

        FOR (i, 0, n) {
            ll x; cin >> x;
            a.push_back(x);
        }

        cin >> s;
        copy = a;

        stack <ll> stk;
        for (auto character : s) {
            if (character == 'L') {
                ll elem = copy.front();
                copy.pop_front();
                stk.push(elem);
            }
            else {
                ll elem = copy.back();
                copy.pop_back();
                stk.push(elem);
            }
        }

        ll init = stk.top();
        stk.pop();

        vll ans;
        ans.push_back(init % m);

        while (!stk.empty()) {
            ll top = stk.top();
            init = init * top % m;
            ans.push_back(init);
            stk.pop();
        }

        reverse(all(ans));

        for (auto elem : ans) {
            cout << elem << " ";
        }
        cout << endl;

        // (a/b) % m => (a % x) / b => where x = b * m
        // FOR(i,0,s.length()) {
        //     if (s[i] == 'L') {
        //         ll x = a[0] * m;
        //         mod = (mod % x) / a[0];
        //         cout << mod << " ";
        //         a.pop_front();
        //     }
        //     else {
        //         ll x = a[a.size() - 1] * m;
        //         mod = (mod % x) / a[a.size() - 1];
        //         cout << mod << " ";
        //         a.pop_back();
        //     }
        // }

        // cout << endl;


        // for (int i=0; i<n; i++) {
        //     cout << mod << " ";
        //     if (s[i] == 'L') {
        //         mod = (m / a[0] % m);
        //         a.pop_front();
        //     }
        //     else {
        //         mod = (m / a[a.size() - 1] % m);
        //         a.pop_back();
        //     }
        // }

        // cout << endl;

    }
}