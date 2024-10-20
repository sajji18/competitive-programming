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
        int n; cin>>n;
        vll a(n), b(n);
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,n) cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        bool print = true;
        ll sum = a[0] + b[0];
        FOR(i,1,n) {
            if (a[i] + b[i] != sum) {
                print = false;
                break;
            }
        }
        if (print) {
            FOR(i,0,n) cout<<a[i]<<" ";
            cout<<endl;
            FOR(i,0,n) cout<<b[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}