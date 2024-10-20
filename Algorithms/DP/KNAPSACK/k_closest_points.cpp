#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpi vector<pair<int,int>>
# define vpll vector <pair<long long, long long>>
# define mapi map<int,int>
# define mapll map<ll,ll>
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"
# define zeus ios_base::sync_with_stdio(false); cin.tie(nullptr);

ll M = 1e9 + 7;

/*
    Problem Statement:
    Given array of points, find k closest points to the origin
*/

void k_closest_points(int arr[10][2], int k) {
    priority_queue < pair<int, pair<int, int>>> maxh;
    for (int i = 0; i < 10; i++) {
        maxh.push({arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1], {arr[i][0], arr[i][1]}});
        if (maxh.size() > k) maxh.pop();
    }
    while (!maxh.empty()) {
        pair <int, int> p = maxh.top().second;
        cout << p.first << " " << p.second << endl;
        maxh.pop();
    }
}

void solve() {
    
}

signed main() {
    zeus;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
