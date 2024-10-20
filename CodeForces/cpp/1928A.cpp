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
        ll a, b; cin >> a >> b;
        if (a % 2 == 1 and b % 2 == 1) cout << "NO" << endl;
        else if (a % 2 == 0 and b % 2 == 1) {
            ll num1 = a / 2;
            ll num2 = b * 2;
            if ((num1 == a and num2 == b) or (num1 == b or num2 == a)) cout << "NO" << endl;
            else cout << "YES" << endl;
            
        }
        else if (a % 2 == 1 and b % 2 == 0) {
            ll num1 = a * 2;
            ll num2 = b / 2;
            if ((num1 == a and num2 == b) or (num1 == b or num2 == a)) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}