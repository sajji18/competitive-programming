#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll count_bits(vll arr, int n) {
    ll count = 0;
    FOR(i,0,n) {
        if (arr[i] == 1) count++;
    }
    return count;
}

int main(){
    sajji;

    ll n; cin>>n;
    vll a(n);
    FOR(i,0,n) cin>>a[i];

    int bits =  count_bits(a, n);
    if (bits == n) {
        cout<<n-1<<endl;
        return 0;
    }

    ll res = INT_MIN;
    FOR(i,0,n) {
        ll subset = 1;
        int itr = 0;
        for(int j=i; itr<n; itr++) {
            vll temp = a;
            FOR(k,j,subset) {
                temp[k] = 1 - temp[k];
            }
            ll num = count_bits(temp, n);
            res = max(res, num);
            subset++;
        }
    }
    cout<<res<<endl;
}