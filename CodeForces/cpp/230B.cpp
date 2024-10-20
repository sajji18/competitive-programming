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

bool checkPrime(ll n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 or n % 3 == 0) return false;
    for(int ll i=5; i*i <= n; i += 6) {
        if ((n % i == 0) || (n % (i + 2) == 0)) {
            return false;
        }
    }
    return true;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin>>n;
        // cout<<checkPrime(n)<<endl;
        ll sqroot = sqrtl(n);
        // cout<<sqroot<<endl;
        // cout<<checkPrime(sqroot)<<endl;
        if (sqroot * sqroot == n) {
            if (checkPrime(sqroot)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}