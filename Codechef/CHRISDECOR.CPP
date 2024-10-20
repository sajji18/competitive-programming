#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n, x, y; cin>>n>>x>>y;
        if (x >= y / 3) (y / 3 + (x - y / 3) / 2) >= n ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        else if (x < y / 3){
            x >= n ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
        // ll btf = 0;
        // while(y >= 3) {
        //     if(x >= 1){
        //         y -= 3;
        //         x -= 1;
        //         btf ++;
        //     }
        //     else break;
        // }
        // if (x >= 2) {
        //     while(x >= 2){
        //         x -= 2;
        //         btf++;
        //     }
        // }
        // btf >= n ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}