#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll recurrence(ll ai) {
    ll min_d = INT_MAX, max_d = INT_MIN, temp = ai;
    while(temp > 0) {
        ll last = temp % 10;
        min_d = min(min_d, last);
        max_d  = max(max_d, last);
        temp  /= 10;
    }
    return (ai + (min_d)*(max_d));
}

// ll permute(ll ai, ll k) {
//     ll res = 1;
//     while(k > 0) {
//         if (k & 1) res = ai;
//         // cout<<"Executed"<<endl;
//         ai = recurrence(ai);
//         k >>= 1;
//     }
//     return res;
// }

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll a1, k;  cin>>a1>>k;
        // ll ans = permute(a1, k);
        vll sq;
        sq.push_back(a1);

        // TLE Since O(t*k*18) => O((10^19)*18)
        FOR(i,0,k-1) {
            ll x;
            x = recurrence(sq[i]);
            sq.push_back(x);
            if (x == sq[i]) break;
        }
        cout<<sq[sq.size() - 1]<<endl;

        // Optimization
    
    }
}