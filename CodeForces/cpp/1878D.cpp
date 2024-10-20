#include <bits/stdc++.h>
using namespace std;

class FenwickTree {
public:
    FenwickTree(int n) : tree(n + 1, 0) {}

    void update(int index, int delta) {
        index++;  // Fenwick Tree is 1-based
        while (index < tree.size()) {
            tree[index] += delta;
            index += index & -index;
        }
    }

    int query(int index) {
        index++;  // Fenwick Tree is 1-based
        int result = 0;
        while (index > 0) {
            result += tree[index];
            index -= index & -index;
        }
        return result;
    }

private:
    std::vector<int> tree;
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
        unordered_multimap <int,int> mp;
		string s;
		cin>>s;

		vector<int> l;
		vector<int> r;
		for(int i=0;i<k;i++)
		{
			int m;
			cin>>m;
			l.push_back(m);
		}
		for(int i=0;i<k;i++)
		{
			int m;
			cin>>m;
			r.push_back(m);
		}
		int q;
		cin>>q;
		vector<int> x;
		for(int i=0;i<q;i++)
		{
            int m;
            cin>>m;
            x.push_back(m);
		}
        // O(t*q*k) => O(10^14)
		for(int i=0;i<q;i++)
		{
            int a,b;
            auto idx_a = lower_bound(l.begin(), l.end(), x[i]); // 1 3 4 5 x = 2
            if(idx_a != l.begin() && *idx_a != x[i] && *idx_a > x[i]){
                idx_a--;
            }
            auto idx_b = lower_bound(r.begin(), r.end(), x[i]);

            a = min(x[i], *idx_a + *idx_b - x[i]);
            b = max(x[i], *idx_a + *idx_b - x[i]);

            a--;
            b--;

            mp.emplace(a, b);
		}
        for(auto x : mp){
            int a = x.first, b = x.second, c = 0;

			for(int j=a; j<a+(b-a+1)/2; j++){
				char temp = s[j];
				s[j] = s[b-c];
				s[b-c] = temp;
				c++;
			}
        }
        cout<<s<<endl;
    }
}