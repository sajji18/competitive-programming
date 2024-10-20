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
        ll n; cin >> n;
        string s; cin >> s;
        ll one = 0, zero = 0;
        // s[0] == '0' ? zero++ : one++;
        // for (int i=1; i<s.length(); i++) {
        //     if (s[i] == '0') zero++;
        //     if (s[i] == '1') one++;
        //     if (s[i] != s[i-1]) zero++;
        //     // 011 => 0011
        // }
        for (int i=0; i<n; i++) {
            if (s[i] == '0') zero++;
            else one++;
        }
        // cout << zero << " " << one << endl;
        // zero > one ? cout << "YES" << endl : cout << "NO" << endl;
        if (one == n) cout << "NO" <<endl;
        else cout << "YES" << endl;
    }
}