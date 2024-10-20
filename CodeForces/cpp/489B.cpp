#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define all(x) (x).begin(), (x).end()
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

vll pairs;
// TLE SO SAD recursive baby
void find_pairs(vll arr1, vll arr2, int n, int m, int l, int r, int pair_count) {
    if (l == n or r == m) {
        pairs.push_back(pair_count);
        return ;
    }
    // cout<<"Too many Calls: "<<l<<endl;
    if (abs(arr1[l] - arr2[r]) <= 1) {
        pair_count++;
        find_pairs(arr1, arr2, n, m, l+1, r+1, pair_count);
    }
    else {
        find_pairs(arr1, arr2, n, m, l+1, r, pair_count);
        find_pairs(arr1, arr2, n, m, l, r+1, pair_count);
        find_pairs(arr1, arr2, n, m, l+1, r+1, pair_count);
    }
}

int main(){
    sajji;
    ll hashed_boys[101] = {0};
    ll hashed_girls[101] = {0};

    ll n; cin>>n;
    vll a(n); 
    FOR(i,0,n) {
        cin>>a[i];
        hashed_boys[a[i]]++;
    }

    ll m; cin>>m;
    vll b(m);
    FOR(i,0,m) {
        cin>>b[i];
        hashed_girls[b[i]]++;
    } 

    sort(all(a));
    sort(all(b));
    
    // find_pairs(a, b, n, m, 0, 0, 0);
    // int maximum = *max_element(pairs.begin(), pairs.end());
    // cout<<maximum<<endl;

    int ans = 0;
    // make sure no pair made twice
    FOR(i,0,n) {
        FOR(j,0,m) {
            if (abs(a[i] - b[j]) <= 1) {
                ans++;
                b[j] = INT_MAX;
                break;
            }
        }
    }

    cout<<ans<<endl;
}