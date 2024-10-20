#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
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
        vll a(n);
        deque <ll> dq, ans;
        FOR(i,0,n) cin>>a[i];
        sort(all(a));
        FOR(i,0,n) {
            dq.push_back(a[i]);
        }
        while(!dq.empty()) {
            ll front_elem = dq.front();
            dq.pop_front();
            ans.push_back(front_elem);
            if (!dq.empty()) {
                ll back_elem = dq.back();
                dq.pop_back();
                ans.push_back(back_elem);
            }
        }
        while(!ans.empty()) {
            ll elem = ans.back();
            cout<<elem<<" ";
            ans.pop_back();
        }
        cout<<endl;
    }
}