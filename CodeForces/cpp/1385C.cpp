#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 5
// 4
// 1 2 3 4
// 7
// 4 3 3 8 4 5 2
// 3
// 1 1 1
// 7
// 1 3 1 4 5 3 2
// 5
// 5 4 3 2 3

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n; cin>>n;

        vll a(n);
        vector<char> id(n);
        FOR(i,0,n) cin>>a[i];

        ll pos = n - 1;
        while(pos > 0 and a[pos-1] >= a[pos]) {
            pos--;
        }
        while(pos > 0 and a[pos-1] <= a[pos]) {
            pos--;
        }
        cout<<pos<<endl;
        // if (n == 1) {
        //     cout<<0<<endl;
        //     continue;
        // }

        // FOR(i,1,n) {
        //     if (a[i] >= a[i-1]) id[i] = 'i';
        //     else id[i] = 'd';
        // }

        // ll idx = 0;
        // bool i_found = id[n-1] == 'i', d_found = id[n-1] == 'd';

        // if (i_found) {
        //     RFOR(i,n-1,1) {
        //         // if (i == 0) {
        //         //     if (a[i] > a[i+1]) idx = 1;
        //         //     else continue;
        //         // }
        //         if (id[i] == 'i') continue;
        //         else {
        //             idx = i;
        //             break;
        //         }
        //     }
        //     cout<<idx<<endl;
        // }
        // else if (d_found) {
        //     RFOR(i,n-1,1) {
        //         // if (i == 0) {
        //         //     if (a[i] > a[i+1] and i_found) idx = 1;
        //         //     else continue;
        //         // }
        //         if (id[i] == 'i' and !i_found) {
        //             i_found = true;
        //         }
        //         else if (id[i] == 'd' and i_found) {
        //             idx = i;
        //             break;
        //         }
        //     }
        //     cout<<idx<<endl;
        // }
    }
}