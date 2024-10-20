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
    ll _; cin>>_;
    while(_--) {
        string s; cin>>s;
        ll n = s.length(), b = 0, B = 0; 
        deque <char> dq;
        for (int i=n-1; i>= 0; i--) {
            if (s[i] == 'b') { b++; continue; }
            if (s[i] == 'B') { B++; continue; }
            if (s[i] >= 97 and s[i] <= 122 and b > 0) { b--; continue; }
            if (s[i] >= 65 and s[i] <= 96 and B > 0) { B--; continue; }
            else dq.push_front(s[i]);
        }
        string ans;
        for(auto item : dq) {
            ans += item;
        }
        cout<<ans<<endl;
    }
}