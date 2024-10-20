#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 4
// 1
// 31
// 6
// 6 3 7 2 5 4
// 3
// 3 10 11
// 5
// 7 13 11 19 1

int decrement_count(ll odd_count) {
    ll dec_count = 0;
    // ll odd_count = 0;
    // FOR(i,0,a.size()) if (a[i] % 2 == 1) odd_count++;
    if (odd_count % 3 == 0) {
        dec_count = odd_count / 3;
        return dec_count;
    }
    else if (odd_count % 3 == 1) {
        dec_count = odd_count / 3 + 1;
        return dec_count;
    }
    else if (odd_count % 3 == 2) {
        dec_count = odd_count / 3;
        return dec_count;
    }
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n; cin>>n;
        vll a(n), odd_counts(n);
        ll odd_count = 0;
        FOR(i,0,n) {
            cin>>a[i];
            if (a[i] % 2 == 1) odd_count++;
            odd_counts[i] = odd_count;
        }

        vll pfx(n);
        pfx[0] = a[0];
        FOR(i,1,n) {
            pfx[i] = pfx[i-1] + a[i];
        }

        FOR(i,1,n) {
            // if (odd_counts[i] == 2) continue;
            ll decrement = decrement_count(odd_counts[i]);
            // cout<<"Decrement for: "<<i<<" is: "<<decrement<<endl;
            pfx[i] -= decrement;
        }

        FOR(i,0,n) {
            cout<<pfx[i]<<" ";
        }
        cout<<endl;
    }
}