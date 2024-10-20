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
        ll n, x; cin>>n>>x;
        vll p(n+1);
        FOR(i,1,n+1) p[i] = i;
        if (x <= n - 2) {
            // FOR(i,1,n) cout<<p[i]<<" ";
            // cout<<endl;
            sort(p.rbegin(), p.rbegin() + x);
            FOR(i,0,n) cout<<p[i]<<" ";
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}