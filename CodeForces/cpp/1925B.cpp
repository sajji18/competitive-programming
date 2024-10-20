#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

void divisors (ll n, vll div) {
    for (int i=1; i*i<=n; i++) {
        if (n % i == 0) {
            if (i == n / i) div.push_back(i);
            else {
                div.push_back(i);
                div.push_back(n / i);
            }
        }
    }
}

bool cmp(ll a, ll b) {
    return a > b;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll x, n; cin >> x >> n;
        ll q = x / n;

        vll divs;
        for (int i=1; i<=sqrt(x); i++) {
            if (x % i == 0) {
                if (i == x / i) divs.push_back(i);
                else {
                    divs.push_back(i);
                    divs.push_back(x / i);
                }
            }
        }
        sort(divs.begin(), divs.end(), cmp);

        // for (auto val : divs) {
        //     cout << val << endl;
        // }

        // cout << divs.size() << endl;

        // if (x % q == 0) cout << q << endl;
        // else {
            // while(q--) {
            //     if  (x % q == 0) {
            //         cout << q << endl;
            //         break;
            //     }
            // }
        for (int i=0; i<divs.size(); i++) {
            if (divs[i] <= q and x % divs[i] == 0) {
                cout << divs[i] << endl;
                break;
            }
        }
        // }
    }
}