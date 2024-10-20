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
        int n, k; cin>>n>>k;
        vll b(n);
        ll pdt = 1;
        FOR(i,0,n) {
            cin>>b[i];
            pdt *= b[i];
        }

        if (pdt > 2023) {
            cout<<"NO"<<endl;
            continue;
        }
        else {
            if ((pdt == 1) or (pdt == 7) or (pdt == 17) or (pdt == 289) or (pdt == 7*17) or (pdt == 2023)) {
                cout<<"YES"<<endl;
                FOR(i,0,k-1) {
                    cout<<1<<" ";  
                }
                cout<<(2023/pdt)<<endl;
                continue;
            }
            else {
                cout<<"NO"<<endl;
                continue;
            }
        }

    }
}