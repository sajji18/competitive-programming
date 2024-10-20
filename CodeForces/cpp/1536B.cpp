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

void solve() {
    ll n; cin >> n;
    string s; cin >> s;

    map <char, ll> mp;
    FOR(i,0,n) mp[s[i]]++;

    // single character not present
    for (auto i = 'a'; i <= 'z'; i++) {
        if (mp[char(i)] == 0) {
            cout << char(i) << endl;
            return;
        }
    }

    vector <char> characters;
    vector <string> doubleCharacters;
    vector <string> tripleCharacters;

    for (auto i = 'a'; i <= 'z'; i++) characters.push_back(char(i));
    for (auto i = 'a'; i <= 'z'; i++) {
        for (auto character : characters) {
            string temp = "";
            temp.push_back(i);
            temp.push_back(character);
            doubleCharacters.push_back(temp);
        }
    }

    for (auto i = 'a'; i <= 'z'; i++) {
        for (auto character : doubleCharacters) {
            string temp = "";
            temp.push_back(i);
            temp = temp + character;
            tripleCharacters.push_back(temp);
        }
    }

    // for (auto val : characters) {
    //     cout << val << endl;
    // }
    // for (auto val : doubleCharacters) {
    //     cout << val << endl;
    // }
    // for (auto val : tripleCharacters) {
    //     cout << val << endl;
    // }

    for (auto str : doubleCharacters) {
        auto index = s.find(str);
        // cout << str << " " << index << endl;
        if (index == string::npos) {
            cout << str << endl;
            return;
        }
    }

    for (auto str : tripleCharacters) {
        auto index = s.find(str);
        // cout << str << " " << index << endl;
        if (index == string::npos) {
            cout << str << endl;
            return;
        }
    }
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}