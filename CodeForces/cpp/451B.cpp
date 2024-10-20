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

bool sorted (vll a) {
    for (int i=1; i<a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

bool r_sorted (vll a) {
    for (int i=1; i<a.size(); i++) {
        if (a[i] > a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    sajji;
    ll n; cin >> n;
    vll a(n); 
    FOR(i, 0, n) cin >> a[i];

    if (sorted(a)) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    // 2 1 3 4, 3 1 2 4
    vll index;

    ll stk = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            stk = 1;
            index.push_back(i - 1);
            if (i == n - 1) {
                index.push_back(i);
            }
        }
        else {
            if (stk == 1) {
                index.push_back(i - 1);
                stk = 0;
            }
            else continue;
        }
    }


    // for (auto val : index) {
    //     cout << val << " ";
    // }
    // cout << endl;

    bool e = true;
    for (int i=1; i<index.size(); i++) {
        if (index[i] != index[i - 1] + 1) {
            e = false;
        }
    }

    if (e) {
        vll temp;
        for (auto idx : index) {
            temp.push_back(a[idx]);
        }
        if (!r_sorted(temp)) {
            cout << "no" << endl;
            return 0;
        }
        ll s = index[0], e = index[index.size() - 1];
        if (s == 0) {
            if (e == n - 1) {
                cout << "yes" << endl;
                cout << s + 1 << " " << e + 1 << endl;
            }
            else {
                if (a[s] <= a[e + 1]) {
                    cout << "yes" << endl;
                    cout << s + 1 << " " << e + 1 << endl;
                }
                else {
                    cout << "no" << endl;
                }
            }
        }
        else if (e == n - 1) {
            if (s == 0) {
                cout << "yes" << endl;
                cout << s + 1 << " " << e + 1 << endl;
            }
            else {
                if (a[e] >= a[s - 1]) {
                    cout << "yes" << endl;
                    cout << s + 1 << " " << e + 1 << endl;
                }
                else {
                    cout << "no" << endl;
                }
            }
        }
        else {
            if ((a[s] <= a[e + 1]) && (a[e] >= a[s - 1])) {
                cout << "yes" << endl;
                cout << s + 1 << " " << e + 1 << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
    }
    else {
        cout << "no" << endl;
    }
}