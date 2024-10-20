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

const int N = 5001;
vector <int> graph[N];

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vll a(n);
        ll cnt = 1;
        FOR(i,0,n) cin >> a[i];
        FOR (i,1,n) {
            if (a[i] == a[i - 1]) cnt++;
        }
        if (cnt == n) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            vector <pair<ll, bool>> vertices(n);
            FOR(i,0,n) {
                vertices[i] = {a[i], false};
            }
            FOR (i,0,n) {
                FOR(j,i+1,n) {
                    if (vertices[i].first != vertices[j].first and !vertices[j].second) {
                        cout << i+1 << " " << j+1 << endl;
                        vertices[j].second = true;
                        continue;
                    }
                    if (vertices[i].first != vertices[j].first and !vertices[i].second and vertices[j].second) {
                        cout << i+1 << " " << j+1 << endl;
                        vertices[i].second = true;
                        continue;
                    }
                }
            }
        }
    }   
}