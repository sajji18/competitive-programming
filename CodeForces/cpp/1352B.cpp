#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// 8
// 10 3
// 100 4
// 8 7
// 97 2
// 8 8
// 3 10
// 5 3
// 1000000000 9

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        int n, k; cin>>n>>k;
        if (n < k) cout<<"NO"<<endl;
        else if (n == k) {
            cout<<"YES"<<endl;
            FOR(i,0,k) {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else {
            if ((n-(k-1)) % 2 == 1) {
                cout<<"YES"<<endl;
                FOR(i,0,k-1) {
                    cout<<1<<" ";
                }
                if (n-(k-1) > 0) cout<<(n-(k-1))<<endl;
            }
            else if ((n-2*(k-1)) % 2 == 0 and n >= 2*k) {
                cout<<"YES"<<endl;
                FOR(i,0,k-1) {
                    cout<<2<<" ";
                }
                if (n-2*(k-1) > 0) cout<<(n-2*(k-1))<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        } 
    }
}