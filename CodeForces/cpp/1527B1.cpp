// #include <bits/stdc++.h>
// using namespace std;

// # define ll long long
// # define FOR(i, a, b) for (int i=a; i<b; i++)
// # define RFOR(i, a, b) for (int i=a; i>=b; i--)
// # define all(x) (x).begin(), (x).end()
// # define vll vector <long long>
// # define vpll vector <pair<long long, long long>>
// # define endl "\n"
// # define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// int main(){
//     sajji;
//     ll _; cin>>_;
//     while(_--) {
//         int n; cin>>n;
//         string s; cin>>s;
//         // 1001, 10001, 110010011
//         ll z_cnt = 0;
//         for (auto character : s) {
//             if (character == '0') z_cnt++;
//         }

//         if (z_cnt % 2 == 0) {
//             if (z_cnt == 0) {
//                 cout<<"DRAW"<<endl;
//             }
//             cout<<"BOB"<<endl;
//         }

//         else if (z_cnt % 2 == 1) {
//             if (z_cnt == 1) {
//                 cout<<"BOB"<<endl;
//                 continue;
//             }
//             cout<<"ALICE"<<endl;
//         }
//     }
// }

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

ll M = 1e9 + 7;

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll count = 0;
    for (auto character : s) {
        if (character == '0') count++;
    }
    // cout << count << endl;
    if (count % 2 == 0) {
        if (count == 0) {
            cout << "DRAW" << endl;
        }
        else cout << "BOB" << endl;
    }
    else {
        if (count == 1) cout << "BOB" << endl;
        else cout << "ALICE" << endl;
    }
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}