#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n, m; cin>>n>>m;
        vll nodes(n+1);
        FOR(i,1,n+1) nodes[i] = i;
        while(m--) {
            int a, b, c;
            cin>>a>>b>>c;
            nodes[b] = 0;
        }
        ll root;
        FOR(i,1,n+1) {
            if (nodes[i] != 0) {
                root = nodes[i];
                break;
            }
        }
        FOR(i,1,n+1){
            if (root == nodes[i]) continue;
            cout<<root<<" "<<i<<endl;
        }
    }
}