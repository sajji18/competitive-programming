#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vi vector <int>
# define vll vector <long long>
# define vpi vector<pair<int,int>>
# define vpll vector <pair<long long, long long>>
# define mapi map<int,int>
# define mapll map<ll,ll>
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(nullptr);
# define input(a, n) FOR(i, 0, n) cin >> a[i];

ll INF = 1e6;
ll M = 1000000007;

ll binpow (ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

ll inverse (ll b, ll MOD) {
    return binpow(b, MOD - 2);
}

ll lcm (ll a, ll b) {
    return (a * b) / __gcd(a, b);
}  

ll rangeBitwiseAnd (ll m, ll n) {
    if (n > m) return rangeBitwiseAnd(m / 2, n / 2) << 1;
    else return m;
}

bool cmp1 (pair <int, int> &a, pair <int, int> &b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

bool cmp2 (pair <int, int> &a, pair <int, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void print (vll &a) {
    for (auto &val : a) cout << val << " ";
    cout << endl;
}

void print (unordered_map <ll, ll> &a) {
    for (auto &val : a) cout << val.first << " " << val.second << endl;
}

void print (map <ll, ll> &a) {
    for (auto &val : a) cout << val.first << " " << val.second << endl;
}

void print (vpll &a) {
    for (auto &val : a) cout << val.first << " " << val.second << endl;
}

void print (set <ll> &a) {
    for (auto &val : a) cout << val << " ";
    cout << endl;
}

void print (multiset <ll> &a) {
    for (auto &val : a) cout << val << " ";
    cout << endl;
}

// Interactive Utilities
void query (ll x, ll y) {
    cout << "? " << x << " " << y << endl;
    cout.flush();
}

void print (ll x, ll y) {
    cout << "! " << x << " " << y << endl;
}

struct custom_hash{
    static uint64_t splitmix64(uint64_t x){
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const{
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void build(int v, int l, int r, int st[], int arr[]) {
    if (l == r) {
        st[v] = arr[l];
        return;
    } 
    int mid = (l + r) / 2;
    build(v * 2 + 1, l, mid, st, arr);
    build(v * 2 + 2, mid + 1, r, st, arr);
    st[v] = max(st[v * 2 + 1], st[v * 2 + 2]);
}

void update(int v, int l, int r, int pos, int val, int st[]) {
    if (l == r) {
        st[v] = val;
        return;
    } 
    int mid = (l + r) / 2;
    if (pos <= mid) {
        update(v * 2 + 1, l, mid, pos, val, st);
    }
    else {
        update(v * 2 + 2, mid + 1, r, pos, val, st);
    }
    st[v] = max(st[2 * v + 1], st[2 * v + 2]);
}

int query(int v, int l, int r, int L, int R, int st[]) {
    if (L > R) return 0;
    if (L == l && R == r) {
        return st[v];
    }
    int mid = (l + r) / 2;
    return max(query(v * 2 + 1, l, mid, L, min(R, mid), st), query(v * 2 + 2, mid + 1, r, max(L, mid + 1), R, st));
}

const int hashp1 = 31;
const int hashp2 = 53;
const int hashM = 1e9 + 9;
const int N = 3e5 + 1;
ll power[N];

void computePrefixHash (string &str, ll n, ll prefixHash[], ll power[]) {
    prefixHash[0] = 0;
    prefixHash[1] = str[0];
    for (int i = 2; i <= n; i++) {
        prefixHash[i] = (prefixHash[i - 1] % hashM + (str[i - 1] % hashM * 1LL * power[i - 1] % hashM) % hashM) % hashM;
    }
    return;
}

void computeSuffixHash (string &str, ll n, ll suffixHash[], ll power[]) {
    suffixHash[0] = 0;
    suffixHash[1] = str[n - 1];
    for (int i = n - 2, j = 2; i >= 0 && j <= n; i--, j++) {
        suffixHash[j] = (suffixHash[j - 1] % hashM + (str[i] % hashM * 1LL * power[j - 1] % hashM) % hashM) % hashM;
    }
    return;
}

int computeHash (ll n, ll prefixHash[], ll power[], ll start, ll end) {
    ll val = (prefixHash[end] - prefixHash[start - 1] + hashM) % hashM;
    val = (val * 1LL * (power[n - start])) % hashM;
    return val;
}

int computeRevHash (ll n, ll suffixHash[], ll power[], ll end, ll start) {
    start = n + 1 - start;
    end = n + 1 - end;
    ll val = (suffixHash[end] - suffixHash[start - 1] + hashM) % hashM;
    val = (val * 1ll * power[n - start]) % hashM;
    return val;
}

int n, m, k, x, y, z, p, q, h;

void solve() {
    cin >> n;
    vector <int> x(n);
    /*
    1 0
    1 1
    3 0
    5 0
    2 1

    1 1 2 3 5
    0 1 1 0 0
    */

}

signed main() {
    sajji;
    int t = 1;
    cin >> t;
    // power[0] = 1;
    // for (int i = 1; i <= N; i++) {
    //     power[i] = power[i - 1] * hashp1 % hashM;
    // }
    while(t--) solve();
    return 0;
}