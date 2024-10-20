// #include <bits/stdc++.h>
// using namespace std;

// # define ll long long
// # define FOR(i, a, b) for (int i=a; i<b; i++)
// # define RFOR(i, a, b) for (int i=a; i>=b; i--)
// # define all(x) (x).begin(), (x).end()
// # define vll vector <long long>
// # define vpll vector <pair<long long, long long>>
// # define endl "\n"
// # define zeus ios_base::sync_with_stdio(false); cin.tie(NULL);

// ll M = 1e9 + 7;

// ll binpow (ll a, ll b) {
//     ll res = 1;
//     while (b > 0) {
//         if (b & 1) res = res * a % M;
//         a = a * a % M;
//         b >>= 1;
//     }
//     return res;
// }

// const int N = 1e5+10;
// vector <pair<ll, ll>> g1[N];
// vector <pair<ll, ll>> g2[N];
// bool visited[N] = {false};

// ll dfs1g1 (ll vertex, ll &result) {
//     visited[vertex] = true;

//     for (auto child : g1[vertex]) {
//         if (visited[child.first]) continue;

//         result = max(result, child.second);

//         dfs1g1(child.first, result);
//     }

//     return result;
// }

// ll dfs2g2 (ll vertex, ll &result) {
//     visited[vertex] = true;

//     for (auto child : g2[vertex]) {
//         if (visited[child.first]) continue;
//         // cout << "Child.second is " << child.second << " " << endl;
//         result = min(result, child.second);
//         // cout << "Result is " << result << endl;
//         dfs2g2(child.first, result);
//     }
//     // cout << "FInal result is " << result << endl;

//     return result;
// }

// void dfs3g1 (ll vertex, ll weight) {
//     visited[vertex] = true;

//     for (auto child : g1[vertex]) {
//         if (visited[vertex]) continue;

//         if (child.second == weight) {
//             child.second = INT_MIN;
//             return;
//         }

//         dfs3g1(child.first, weight);
//     }
// }

// void dfs4g2 (ll vertex, ll weight) {
//     visited[vertex] = true;

//     for (auto child : g2[vertex]) {
//         if (visited[vertex]) continue;

//         if (child.second == weight) {
//             child.second = INT_MAX;
//             return;
//         }

//         dfs4g2(child.first, weight);
//     }
// }

// void solve () {
//     ll n, m; cin >> n >> m;
//     ll weights[m];
//     FOR(i,0,m) cin >> weights[i];

//     for (ll i = 0; i < m; i++) {
//         ll v1, v2; cin >> v1 >> v2;
//         g1[v1].push_back({v2, weights[i]});
//         g1[v2].push_back({v1, weights[i]});

//         g2[v1].push_back({v2, weights[i]});
//         g2[v2].push_back({v1, weights[i]});
//     }

//     ll mxm = INT_MIN, mnm = INT_MAX;
//     for (int i = 1; i <= m; i++) {
//         if (i % 2 == 1) mxm = dfs1g1(1, mxm);
//         dfs3g1(1, mxm);
//     }

//     // for (auto val : g) {
//     //    cout << "val is " << val << " ";
//     //    for (auto child : val) {
//     //        cout << child.first
//     //    }
//     // }
//     // cout << "hey" << endl;
//     for (int i = 1; i <= n; i++) {
//         visited[i] = false;
//     }

//     for (int i = 1; i <= m; i++) {
//         // cout << dfs2g2(1, mnm) << endl;
//         if (i % 2 == 1) mnm = dfs2g2(1, mnm);
//         dfs4g2(1, mnm);
//     }

//     cout << mxm << " " << mnm << endl;


// }

// int main(){
//     zeus;
//     // ll _; cin>>_;
//     // while(_--) {
//         solve();
//     // }
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
# define zeus ios_base::sync_with_stdio(false); cin.tie(NULL);

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

bool check (string s) {
    FOR (i,0,s.length()/2) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

void solve() {
    ll n; cin >> n;
    string s, temp1, temp2; cin >> s;

    temp1 = s, temp2 = s;
    ll pos1 = 0, pos2 = n - 1, count1 = 0, count2 = 0;
    char c1 = 'A', c2 = 'A';
    while (pos2 - pos1 >= 1) {
        if (s[pos1] == s[pos2]) {
            pos1++;
            pos2--;
        }
        else {
            c1 = s[pos1];
            c2 = s[pos2];
            break;
        }
    }

    if (c1 == 'A' and c2 == 'A') {
        cout << 0 << endl;
        return;
    }

    pos1 = 0, pos2 = n - 1;

    while (pos2 - pos1 >= 1) {
        if (temp1[pos1] == temp1[pos2]) {
            pos1++;
            pos2--;
        }
        else if (temp1[pos1] != temp1[pos2]) {
            if (temp1[pos1] == c1) {
                count1++;
                temp1.erase(pos1, 1);
                pos2--;
            }
            else if (temp1[pos2] == c1) {
                count1++;
                temp1.erase(pos2, 1);
                pos2--;
            }
            else break;
        }
    }

    pos1 = 0, pos2 = n - 1;

    while (pos2 - pos1 >= 1) {
        if (temp2[pos1] == temp2[pos2]) {
            pos1++;
            pos2--;
        }
        else if (temp2[pos1] != temp2[pos2]) {
            if (temp2[pos1] == c2) {
                count2++;
                temp2.erase(pos1, 1);
                pos2--;
            }
            else if (temp2[pos2] == c2) {
                count2++;
                temp2.erase(pos2, 1);
                pos2--;
            }
            else break;
        }
    }

    // cout << temp1 << " " << temp2 << endl;
    if (check(temp1) and check(temp2)) cout << min(count1, count2) << endl;
    else if (check(temp1)) cout << count1 << endl;
    else if (check(temp2)) cout << count2 << endl;
    else cout << -1 << endl;
}

int main(){
    zeus;
    ll _; cin>>_;
    while(_--) {
        solve();
    }
}