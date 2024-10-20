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
    string s; cin >> s;
    map <char, ll> mp;
    // A - 6, B - 1, C - 2
    ll odd = 0;
    for (auto character : s) {
        mp[character]++;
    }

    for (auto val : mp) {
        if (val.second % 2 == 1) odd++;
    }

    if (odd > 1) cout << "NO SOLUTION" << endl;
    else if (odd == 1) {
        char oddChar;
        ll oddCount;
        for (auto val : mp) {
            if (val.second % 2 == 1) {
                oddChar = val.first;
                oddCount = val.second;
                break;
            }
        }
        string s = "";
        FOR(i,0,oddCount) s += oddChar; // B
        for (auto val : mp) {
            if (val.second % 2 == 0) {
                FOR(i,0,(val.second / 2)) {
                    s = val.first + s;
                    s = s + val.first;
                }
            }
        }
        cout << s << endl;
    }
    else {
        for (auto val : mp) {
            FOR(i,0,(val.second / 2)) {
                s = val.first + s;
                s = s + val.first;
            }
        }
        cout << s << endl;
    }

}