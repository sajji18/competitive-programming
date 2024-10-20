#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 4
// 4 7
// 4 3 1 2
// 1 1 1 1
// 3 2
// 1 2 5
// 3 1 8
// 5 5
// 3 2 4 1 4
// 2 3 1 4 7
// 6 4
// 1 4 5 4 5 10
// 1 5 1 2 5 1

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n, k; cin>>n>>k;
        vll a(n+1), b(n+1), score(min(n,k)+1), pfx(n+1);

        FOR (i,1,n+1) cin>>a[i];
        FOR (i,1,n+1) cin>>b[i];

        pfx[1] = a[1];
        FOR(i,2,n+1) pfx[i] = pfx[i-1] + a[i];

        stack<pair<pair<ll, ll>, ll>> stk;

        FOR(i,1,min(n,k)+1) {
            ll maximum = stk.empty() ? b[i] : max(b[i], stk.top().second);
            stk.push({{a[i], b[i]}, maximum});
            score[i] = pfx[i] + maximum * (k - i);
        }

        ll maximum = *max_element(score.begin(), score.end());
        cout<<maximum<<endl;
    }
}