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

vll getDivisors(ll n) {
    vll divisors;
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n/i == i) {
                divisors.push_back(i);
            }
            else {
                divisors.push_back(i);
                divisors.push_back(n/i);
            }
        } 
    } 
    return divisors;
} 

// 8
// 4
// 1 2 1 4
// 3
// 1 2 3
// 5
// 1 1 1 1 1
// 6
// 1 3 1 1 3 1
// 6
// 6 2 6 2 2 2
// 6
// 2 6 3 6 6 6
// 10
// 1 7 5 1 4 3 1 3 1 4
// 1
// 1

// 2
// 1
// 2
// 4
// 4
// 1
// 2
// 1

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin>>n;
        vll a(n), divs = getDivisors(n);
        FOR(i,0,n) cin>>a[i];
        // sort(all(divs));
        ll ans = 0;
        for (int i = 0; i < divs.size(); i++) {
            ll gcd = 0;
            for (int j = 0; j < n - divs[i]; j++) {
                // for (int k = 0; k < n - divs[i]; k++) {
                    
                // }
                gcd = __gcd(gcd, abs(a[j] - a[j + divs[i]]));
            }
            if (gcd >= 2 or gcd == 0) ans++;
        }
        cout<<ans<<endl;
    }
}