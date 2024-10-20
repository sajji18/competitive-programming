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
    Find minimum cost to connect all ropes, rope A (length l1) + ropeB (length l2) => cost = l1 + l2 and gives rope C (length l1 + l2)
*/

int k_closest_points(int arr[], int n) {
    int cost = 0;
    priority_queue <int> maxh;
    for (int i = 0; i < 10; i++) {
        maxh.push(arr[i]);
    }
    while (maxh.size() >= 2) {
        auto first = maxh.top();
        maxh.pop();
        auto second = maxh.top();
        maxh.pop();
        cost = cost + first + second;
        maxh.push(first + second);
    }
    return cost;
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
