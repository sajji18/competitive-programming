#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

vll applyPermutation(vll seq, vll permutation) {
    vll newSeq(seq.size());
    FOR(i,0,seq.size()) {
        newSeq[i] = seq[permutation[i]-1];
    }
    return newSeq;
}

vll permute(vll seq, vll permutation, ll k) {
    while (k > 0) {
        if (k & 1) seq = applyPermutation(seq, permutation);
        permutation = applyPermutation(permutation, permutation);
        k >>= 1;
    }
    return seq;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n, k; cin>>n>>k;
        vll seq(n), permutation;
        FOR(i,0,n) seq[i] = i+1;

        FOR(i,0,n) {
            if (seq[i] % 2 == 1) permutation.push_back(seq[i]);
        }
        FOR(i,0,n) {
            if (seq[i] % 2 == 0) permutation.push_back(seq[i]);
        }

        // FOR(i,0,permutation.size()) {
        //     cout<<permutation[i]<<" ";
        // }

        vll ans = permute(seq, permutation, k);
        FOR(i,0,ans.size()) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}