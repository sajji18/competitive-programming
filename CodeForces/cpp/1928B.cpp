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

const int N = 1e3+9;
int graph[N][N];
vector <int> a[N];

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vll a(n), p;
        FOR(i,0,n) cin >> a[i];

        FOR(i,1,n+1) p.push_back(i);

        // 7 1 4 1 => 2 4 1 3 ===> 9 5 5 4 and ans = 2

        sort(all(a));
        sort(all(p), greater <ll> ());

        FOR(i,0,n) a[i] += p[i];

        unordered_map <ll, ll> cnt;

        FOR(i,0,n) cnt[a[i]]++;

        
        ll res = INT_MIN;
        for (auto val : cnt) {
            res = max(res, val.second);
        }

        cout << res << endl;
    }
}