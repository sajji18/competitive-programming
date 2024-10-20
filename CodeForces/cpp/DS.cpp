#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define nl "\n"

void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class SegmentTree {
	ll *seg;
	ll *lazy;
	public :

	SegmentTree(ll n) {
		// Maximum Size Of Tree could be 4n only
		seg = new ll[4*n + 1];
		lazy = new ll[4*n + 1];
	}

	// Time Complexity Of Build : O(4N) == O(N) !!!
	void BuildTree(ll arr[], ll i, ll low, ll high) {
		if(low == high) {
			seg[i] = arr[low];
			return;
		}

		ll mid = low + (high - low) / 2;

		// Left Child
		BuildTree(arr, 2 * i + 1, low, mid);
		// Right Child
		BuildTree(arr, 2 * i + 2, mid + 1, high);
		
		// Sum Of Two
		seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
	}

	// Query Time Complexity : O(logN)
	ll query(ll ind, ll l, ll r, ll low, ll high) {

		// If Update is Remaining, First Update The Values
		if(lazy[ind] != 0) {

			seg[ind] += (high - low + 1) * lazy[ind];

			// If it is a leaf node, it will not have childrens
			if(low != high) {
				lazy[2 * ind + 1] += lazy[ind];
				lazy[2 * ind + 2] += lazy[ind];
			}
			lazy[ind] = 0;
		}

		// No Overlap
		// l r low high or low high l r
		if(high < l || low > r) return 0;

		// Complete Overlap
		// l low high r
		if(high <= r && low >= l) return seg[ind];

		// Partial Overlap
		ll mid = low + (high - low) / 2;

		ll left = query(2 * ind + 1, l, r, low, mid);
		ll right = query(2 * ind + 2, l, r, mid + 1, high);
		return left + right;
	}


	// Update Time Complexity : O(logN)
	void update(ll i, ll val, ll low, ll high, ll ind) {
		// If we found the required Node
		if(low == high) {
			seg[ind] = val;
			return;
		}

		ll mid = low + (high - low)/2;

		// If required node is left to mid, 
		// Move To Left Child Else Move To Right Child
		if(i <= mid) update(i, val, low, mid, 2 * ind + 1);
		else update(i, val, mid + 1, high, 2 * ind + 2);

		// Since, One Of The Child's Value is Updated
		// We have to find minimum again !!!
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}

	void updateRange(ll l, ll r, ll val, ll low, ll high, ll ind) {
		// First Update The Remaining Updates
		// Lazy Propagate To The Child
		if(lazy[ind] != 0) {

			seg[ind] += (high - low + 1) * lazy[ind];

			// If it is a leaf node, it will not have childrens
			if(low != high) {
				lazy[2 * ind + 1] += lazy[ind];
				lazy[2 * ind + 2] += lazy[ind];
			}
			lazy[ind] = 0;
		}

		// No Overlap
		// l r low high or low high l r
		if(high < l || low > r) return;

		// Complete Overlap
		// l low high r
		if(high <= r && low >= l) {
			seg[ind] += (high - low + 1) * val;
			if(low != high) {
				lazy[2 * ind + 1] += val;
				lazy[2 * ind + 2] += val;
			}
			return;
		}

		ll mid = low + (high - low)/2;

		// Partial Overlap ke case me left and right dono update karenge
		updateRange(l, r, val, low, mid, 2 * ind + 1);
		updateRange(l, r, val, mid + 1, high, 2 * ind + 2);

		// Since, One Of The Child's Value is Updated
		// We have to find minimum again !!!
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}
};

struct fenwick {
    vector<ll> fn;
    ll n;

    void init(ll n) {
        this->n = n + 1;
        fn.resize(this->n, 0);
    }

    void add(ll x, ll y) {
        x++;
        while (x < n) {
            fn[x] += y;
            x += (x & (-x));
        }
    }

    ll sum(ll x) {
        x++;
        ll ans = 0;
        while (x) {
            ans += fn[x];
            x -= (x & (-x));
        }
        return ans;
    }

    ll sum(ll l, ll r) {
        return sum(r) - sum(l - 1);
    }
};

class DisjointSet {
public:
	vector<ll> rank, parent, size;

	DisjointSet(ll n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for(ll i = 1; i <= n; i++) parent[i] = i;
	}

	void unionByRank(ll x, ll y) {
		ll par_x = findPar(x);
		ll par_y = findPar(y);

		if (par_x == par_y) return;

		if (rank[par_x] < rank[par_y]) {
			parent[par_x] = par_y;
		} 
        else if (rank[par_y] < rank[par_x]) {
			parent[par_y] = par_x;
		} 
        else {
			parent[par_x] = par_y;
			rank[par_y]++;
		}
	}

	void unionBySize(ll x, ll y) {
		ll par_x = findPar(x);
		ll par_y = findPar(y);

		if(par_x == par_y) return;

		if (size[par_x] < size[par_y]) {
			parent[par_x] = par_y;
			size[par_y] += size[par_x];
		} 
        else {
			parent[par_y] = par_x;
			size[par_x] += size[par_y];
		}
	}

	ll findPar(ll x) {
		if (parent[x] == x) return x;
		return parent[x] = findPar(parent[x]);
	}
};