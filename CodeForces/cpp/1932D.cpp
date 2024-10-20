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

bool cmp1 (string &a, string &b) {
    return a[0] <= b[0];
}

bool cmp2 (string &a, string &b) {
    if (a[1] == b[1]) return a[0] < b[0];
    else return a[1] < b[1];
}

/* ---------------- Lessssssssss gooooooooooooooo ------------------ */
int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        char t; cin >> t;
        vector <string> cards, trump;
        FOR(i, 0, 2 * n) {
            string s; cin >> s;
            if (s[1] == t) trump.push_back(s);
            else cards.push_back(s);
        }

        if (trump.size() < n) {
            if (trump.size() != 1) sort(all(trump), cmp1);
            if (cards.size() != 1) sort(all(cards), cmp2);
            ll s = 0, h = 0, d = 0, c = 0;

            FOR (i,0,cards.size()) {
                if (cards[i][1] != t) {
                    if (cards[i][1] == 'S') s++;
                    else if (cards[i][1] == 'H') h++;
                    else if (cards[i][1] == 'D') d++;
                    else if (cards[i][1] == 'C') c++;
                }
            }

            if (((s % 2) + (h % 2) + (d % 2) + (c % 2)) > trump.size()) {
                cout << "IMPOSSIBLE" << endl;
                continue;
            }

            FOR(i,0,cards.size()) {
                if (i == cards.size() - 1) {
                    cout << cards[i] << " " << trump[trump.size() - 1] << endl;
                    trump.pop_back();
                }
                else if (cards[i][1] == cards[i+1][1]) {
                    cout << cards[i] << " " << cards[i+1] << endl;
                    i++;
                }
                else {
                    cout << cards[i] << " " << trump[trump.size() - 1] << endl;
                    trump.pop_back();
                }
            }

            if (trump.size()) {
                ll cnt = 0;
                FOR (i, 0, trump.size()) {
                    cnt++;
                    cout << trump[i] << " ";
                    if (cnt % 2 == 0) cout << endl;
                }
            }
        }

        else {
            sort(all(trump), cmp1);
            FOR(i,0,cards.size()) {
                cout << cards[i] << " " << trump[i] << endl;
            }
            ll cnt = 0;
            FOR (i,cards.size(), trump.size()) {
                cnt++;
                cout << trump[i] << " ";
                if (cnt % 2 == 0) cout << endl;
            }
        }
    }
}