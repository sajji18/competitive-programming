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
        ll n; cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        ll res = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != c[i] and b[i] != c[i]) {
                // cout << a[i] << " " << b[i] << " " << c[i] << endl;
                res = 0;
                break;
            }
        }
        res == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}