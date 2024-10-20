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
        int a, b; cin>>a>>b;
        int xk, yk, xq, yq; cin>>xk>>yk>>xq>>yq;

        set<pair<ll, ll>> kpos, qpos;
        
        kpos.insert({xk+a, yk+b});
        kpos.insert({xk-a, yk-b});
        kpos.insert({xk+a, yk-b});
        kpos.insert({xk-a, yk+b});
        kpos.insert({xk+b, yk+a});       
        kpos.insert({xk-b, yk-a});
        kpos.insert({xk+b, yk-a});
        kpos.insert({xk-b, yk+a});

        qpos.insert({xq+a, yq+b});        
        qpos.insert({xq-a, yq-b});
        qpos.insert({xq+a, yq-b});
        qpos.insert({xq-a, yq+b});
        qpos.insert({xq+b, yq+a});        
        qpos.insert({xq-b, yq-a});
        qpos.insert({xq+b, yq-a});
        qpos.insert({xq-b, yq+a});
    
        ll cnt = 0;

        // cout<<"kING COORDINATES: "<<endl;
        // for(auto king : kpos) {
        //     cout<<king.first<<" "<<king.second<<endl;
        // }
        // cout<<"QUEEN COORDINATES: "<<endl;
        // for(auto queen : qpos) {
        //     cout<<queen.first<<" "<<queen.second<<endl;
        // }
        for (auto king : kpos) {
            for (auto queen : qpos) {
                if ((king.first == queen.first) and (king.second == queen.second)) {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}