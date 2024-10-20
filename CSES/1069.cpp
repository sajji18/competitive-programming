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

int main(){
    sajji;
    string s; cin >> s;
    if (s.size() == 1) {
        cout << 1 << endl;
        return 0;
    }
    ll ans = 1, res = INT_MIN;
    FOR(i,1,s.size()) {
        if (s[i] == s[i-1]) {
            ans++;
            res = max(res, ans);
        }
        else{
            res = max(res, ans);
            ans = 1;
        }
    }
    cout << res << endl;
}