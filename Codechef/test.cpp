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

bool checkPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2 || n==3) return true;

    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int main(){
    ll _; cin>>_;
    while(_--) {
        ll n; cin>>n;
        vll p(n), ans;
        deque <ll> odd, even;
        FOR(i,0,n) cin>>p[i];

        if (n == 1 or n == 2) {
            cout << -1 << endl;
        }

        FOR(i,0,n) {
            if ((i + 1) % 2 == 0) even.push_back(i + 1);
            else odd.push_back(i + 1);
        }

        FOR(i,0,n) {
            if (p[i] % 2 == 0 and !even.empty()) {
                ans.push_back(even.front());
                even.pop_front();
            }
            else if (p[i] % 2 == 1 and !odd.empty()){
                ans.push_back(odd.front());
                odd.pop_front();
            }
            else {
                if (even.empty()) {
                    ans.push_back(odd.front());
                    odd.pop_front();
                }
            }
        }
        // FOR(i,1,n+1) pi[i] = i;

        // FOR(i,1,n+1) {
        //     if (p[i] % 2 == 0) {
        //         if (i % 2 == 0) ans.push_back(pi[i]);
        //         else ans.push_back
        //     }
        //     else {
        //         ans.push_back(pi[2*i-1]);
        //     }
        // }
        // bool exists = true;
        // FOR(i,0,n) {
        //     if (checkPrime(ans[i])) {
        //         exists = false;
        //         break;
        //     }
        // }
        // if (exists) {
            FOR(i,0,n) cout << ans[i] << " ";
            cout << endl;
        // }
        // else cout << -1 << endl;

        
    }
}