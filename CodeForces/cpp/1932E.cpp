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

string merge_string (string &a, string &b) {
    ll pos1 = a.size() - 1, pos2 = b.size() - 1, buffer = 0;
    while (pos2 >= 0) {
        ll val = (a[pos1] - '0') + (b[pos2] - '0') + buffer;
        if (val >= 10) {
            string t = to_string(val);
            a[pos1] = t[t.size() - 1];
            pos1--;
            pos2--;
            buffer = t[0] - '0';
        }
        else {
            char t = val + '0';
            a[pos1] = t;
            pos1--;
            pos2--;
        }
    }
    // cout << "Asla " <<  a << " " << buffer << endl;
    if (buffer) {
        if ((a[pos1] - '0' + buffer) < 10) a[pos1] = to_string(a[pos1] - '0' + buffer)[0];
        else {
            // cout << "Hello there " << endl;
            string temp = to_string(a[pos1] - '0' + buffer);
            // cout << "temp is " << temp << endl;
            // cout << "String a is " << a << endl << "Pos1 is " << pos1 << endl;
            a[pos1] = temp[1];
            pos1--;
            // cout << a[pos1] - '0' + (temp[0] - '0') << endl;
            if (pos1 >= 0) a[pos1] = to_string(a[pos1] - '0' + temp[0] - '0')[0];
            else {
                a = temp[0] + a;
            }
        }
    }
    return a;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        string s; cin >> s;
        vector <string> all_s;

        // For string s = s1s2s3s4, ans = s1 x 1111 + s2 x 111 + s3 x 11 + s4
        // 12345 => 1 x 11111 + 2 x 1111 + 3 x 111 + 4 x 11 + 5
        // 98 => 9 x 11 + 9 => 108

        for (int i=0; i<n; i++) {
            // 102 => 114 => 111 + 1 + 2
            string s1 = "";
            if (s[i] == '0') {
                for (int j=0; j<n-i-1; j++) {
                    s1.push_back('1');
                }
            }
            else {
                for (int j=0; j<n-i; j++) {
                    s1.push_back(s[i]);
                }
            }
            // cout << s1 << endl;
            all_s.push_back(s1);
        }

        for (int i=1; i<all_s.size(); i++) {
            all_s[i] = merge_string(all_s[i - 1], all_s[i]);
            // cout << "Sum " << all_s[i] << endl;
        }

        ll pos1 = 0;
        while (true) {
            if (all_s[n - 1][pos1] == '0') all_s[n - 1].erase(pos1, 1);
            else break;
        }

        cout << all_s[n - 1] << endl;
    }
}