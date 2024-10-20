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

bool check (string s) {
    FOR (i,0,s.length()/2) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

void solve() {
    ll n; cin >> n;
    string s, temp1, temp2; cin >> s;

    temp1 = s, temp2 = s;
    ll pos1 = 0, pos2 = n - 1, count1 = 0, count2 = 0;
    char c1 = 'A', c2 = 'A';
    while (pos2 - pos1 >= 1) {
        if (s[pos1] == s[pos2]) {
            pos1++;
            pos2--;
        }
        else {
            c1 = s[pos1];
            c2 = s[pos2];
            break;
        }
    }

    if (c1 == 'A' and c2 == 'A') {
        cout << 0 << endl;
        return;
    }

    pos1 = 0, pos2 = n - 1;

    while (pos2 - pos1 >= 1) {
        if (temp1[pos1] == temp1[pos2]) {
            pos1++;
            pos2--;
        }
        else if (temp1[pos1] != temp1[pos2]) {
            if (temp1[pos1] == c1) {
                count1++;
                temp1.erase(pos1, 1);
                pos2--;
            }
            else if (temp1[pos2] == c1) {
                count1++;
                temp1.erase(pos2, 1);
                pos2--;
            }
            else break;
        }
    }

    pos1 = 0, pos2 = n - 1;

    while (pos2 - pos1 >= 1) {
        if (temp2[pos1] == temp2[pos2]) {
            pos1++;
            pos2--;
        }
        else if (temp2[pos1] != temp2[pos2]) {
            if (temp2[pos1] == c2) {
                count2++;
                temp2.erase(pos1, 1);
                pos2--;
            }
            else if (temp2[pos2] == c2) {
                count2++;
                temp2.erase(pos2, 1);
                pos2--;
            }
            else break;
        }
    }

    // cout << temp1 << " " << temp2 << endl;
    if (check(temp1) and check(temp2)) cout << min(count1, count2) << endl;
    else if (check(temp1)) cout << count1 << endl;
    else if (check(temp2)) cout << count2 << endl;
    else cout << -1 << endl;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}