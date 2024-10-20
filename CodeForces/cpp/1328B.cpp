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

// map <string, int> strings;
// void create (string &str, int n, int numA, int numB) {
// 	if (str.length() == n) {
// 		strings[str]++;
// 		return ;
// 	}

// 	if (numA > 0) {
// 		str.push_back('a');
// 		create(str, n, numA - 1, numB);
// 		str.pop_back();
// 	}
	
// 	if (numB > 0) {
// 		str.push_back('b');
// 		create(str, n, numA, numB - 1);
// 		str.pop_back();
// 	}
// } 

int main(){
	int tsc; cin >> tsc;
	while (tsc--) {
		int n, k; cin >> n >> k;
		// string s = "", ans;
		// create(s, n, n - 2, 2);
		// long long int it = 0;
		// for (auto &val : strings) {
		// 	it++;
		// 	if (it == k) {
		// 		ans = val.first;
		// 		break;
		// 	}
		// }
		// cout << ans << endl;

        string s = "";
        // for (int i = 0; i < n; i++) {
        //     if (i < n - 2) s.push_back('a');
        //     else s.push_back('b');
        // }

        ll posl = n - 2, count = 0;
        // ll number;
        while (posl >= 0) {
            // number = (n - 1) - posl;
            count += (n - 1) - posl;
            if (count >= k) break;
            posl--;
        }

        ll shifts = count - k;

        // cout << shifts << " " << posl << endl;

        for (int i=0; i<n; i++) {
            if (i == posl) {
                s.push_back('b');
                continue;
            }
            if (i == posl + shifts + 1) {
                s.push_back('b');
                continue;
            }
            s.push_back('a');
        }

        cout << s << endl;
	} 
}