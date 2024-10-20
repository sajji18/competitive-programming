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
    ll _; cin>>_;
    while(_--) {
        string s; cin >> s;
        ll index, n = s.length();
        RFOR(i,n-1,0) {
            if (s[i] >= 97 and s[i] <= 122) {
                index = i;
                break;
            }
        }
        string ans = "";
        FOR(i,0,n) {
            if (i <= index) ans += s[i];
            else {
                if (s[i] - '0' == 0) ans += s[i];
                else break;
            }
        }
        cout << ans << endl;
    }
}