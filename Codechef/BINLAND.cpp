#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);
# define M 1000000007

int main(){
    sajji;
    ll n, q; cin>>n>>q;
    deque <string> dq;
    // ll ways = 0;
    while(q--) {
        string s; cin>>s;
        if (s == "add") {
            string row; cin>>row;
            dq.push_back(row);
        }
        else if (s == "remove") {
            if (dq.size()) {
                dq.pop_front();
            }
        }
        else if (s == "path") {
            
        }
    }
}