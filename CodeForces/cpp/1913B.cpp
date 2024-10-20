#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define zeus ios_base::sync_with_stdio(false); cin.tie(NULL);

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
    zeus;
    ll _; cin>>_;
    while(_--) {
        // 111100
        // 001111

        // 1111000
        // 0001111
        // 011
        // 101
        // o - 4, z - 2
        string s; cin >> s;
        ll o = 0, z = 0;
        for (auto character : s) {
            if (character == '1') o++;
            else z++;
        }

        // if (z == 0 or o == 0) cout << s.length() << endl;
        // else if (z == o) cout << 0 << endl;
        // else cout << max(z, o) << endl;
        string t = "";
        ll count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                if (o != 0) {
                    t.push_back('1');
                    o--;
                }
                else {
                    t.push_back('0');
                    z--;
                    // count++;
                }
            }
            else {
                if (z != 0) {
                    t.push_back('0');
                    z--;
                }
                else {
                    t.push_back('1');
                    o--;
                    // count++;
                }
            }
        }

        ll pos1 = 0, pos2 = 0;
        while (pos1 < t.length() and pos2 < t.length()) {
            if (s[pos1] != t[pos2]) {
                pos1++;
                pos2++;
            }
            else {
                t.erase(pos2, 1);
                count++;
            }
        }

        cout << count << endl;
    }
}