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
    ll _; cin >> _;
    while(_--) {
        ll n; cin >> n;
        vll a(n);
        FOR(i,0,n) cin >> a[i];

        //  1 1000000000 3 0          5
        //  5 1000000000 3 0          5
        // 10          5 3 0          5
        //  0          1 3 5 1000000000
        vpll pairs;
        for (int i = 0; i <= n - 3; i++) {
            if (a[i] < a[i + 1] and a[i + 1] > a[i + 2] and a[i] < a[i + 2]) {
                if ((a[i] + a[i + 1]) % 2 == 1) {
                    pairs.push_back({ i, i + 1 });
                }
                else if ((a[i + 1] + a[i + 2]) % 2 == 0) {
                    pairs.push_back({ i + 1, i + 2 });
                }
            }
            else if (a[i] < a[i + 1] and a[i + 1] > a[i + 2] and a[i] > a[i + 2]) {

            }
        }

        if (pairs.size()) {
            cout << pairs.size() << endl;
            for (auto pair : pairs) cout << pair.first << " " << pair.second << endl;
        }
        else cout << 0 << endl;
    }
}