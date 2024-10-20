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

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

bool cmp (pair <ll, ll> &a, pair <ll, ll> &b) {
    return a.first + a.second > b.first + b.second;
}

// From a given coordinate (l, r), one can move k to the left or k to the right. 
// The intersection of the move space and the next segment should be such that l < r (always) 
// Since the k value give bool as : F F F F F F F T T T T T T, once a T has occurred, all k give T 
// Thus binary search using predicate function can be applied
bool predicateFunction(ll k, vpll segs) {
	ll l = 0, h = 0;
	for (ll i=0; i<segs.size(); i++) {
		l = max(l - k, segs[i].first);
		h = min(h + k, segs[i].second);
		if (l > h) {
			return false;
		}
	}
	return true;
}

int main () {
	ll _; cin >> _;
	while (_--) {
		ll n; cin >> n;
		vpll segs;
		for (int i=0; i<n; i++) {
			ll l, r; cin >> l >> r;
			segs.push_back(make_pair(l, r));
		}
		
		// ll k = segs[0].first;
		// for (int i=1; i<segs.size(); i++) {
		// 	if (segs[i-1].first > segs[i].second) k = max(k, segs[i-1].first - segs[i].second);
		// 	else if (segs[i-1].second < segs[i].first) k = max(k, segs[i].first - segs[i-1].second);
       	// }

		ll lo = 0, hi = 1000000000;
		while (hi - lo > 0) {
			ll mid = lo + (hi - lo) / 2;
			// cout << "Mid is : " << mid << endl;
			if (predicateFunction(mid, segs)) {
				hi = mid;
			}
			else {
				lo = mid + 1;
			}
		}
		
		cout << hi << endl;
		// cout << k << endl;
	}
}