#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 7
// 123
// 12222133333332
// 112233
// 332211
// 12121212
// 333333
// 31121

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        string s; cin>>s;
        ll n = s.length();
        ll len;
        ll one = s.find('1');
        ll two = s.find('2');
        ll three = s.find('3');
        // cout<<one<<" "<<two<<" "<<three<<endl;
        if (((one == string::npos) or (two == string::npos) or (three == string::npos)) or (n < 3)) {
            cout<<0<<endl;
            continue;
        }
        else {
            ll l = 0, h = 1, res = INT_MAX;
            if (s[l] != s[h]) {
                len = 2;
                FOR(i,2,n) {
                    if ((s[i] != s[h]) and (s[i] != s[l])) {
                        len++;
                        l = h; h = i;
                        res = min(res, len);
                        len = 2;
                    }
                    else if (s[i] == s[h]) {
                        len++;
                        h = i;
                    }
                    else if (s[i] == s[l]) {
                        l = h, h = i;
                        len = 2;
                    }
                }
            }
            else {
                FOR(i,2,n) {
                    if (s[i] != s[i-1]) {
                        l = i-1;
                        h = i;
                        break;
                    }
                }
                len = 2;
                FOR(i,h+1,n) {
                    if ((s[i] != s[h]) and (s[i] != s[l])) {
                        len++;
                        l = h; h = i;
                        res = min(res, len);
                        len = 2;
                    }
                    else if (s[i] == s[h]) {
                        h = i;
                        len++;
                    }
                    else if (s[i] == s[l]) {
                        l = h, h = i;
                        len = 2;
                    }
                }
            }
            cout<<res<<endl;
        }
    }
}