#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    sajji;
    string s; cin>>s;
    ll n = s.length();
    FOR(i,0,n) {
        // cout<<i<<endl;
        if ((n == 1 and i == n - 1) or i == 0){
            if (s[i] - '0' == 9) continue;
        }
        if (s[i] - '0' > 4) s[i] = '0' + 57 - s[i];
    }
    cout<<s<<endl;
}