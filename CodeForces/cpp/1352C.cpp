#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>

int main(){
    int tsc; cin>>tsc;
    while(tsc--) {
        ll n, k; cin>>n>>k;
    //  3, 7 => 1,2,4,5,7,8,10,11,13
        if (n > k) cout<<k<<endl;
        else if (n == k) cout<<k+1<<endl;
        else {
            ll base = (n*k-1)/(n-1);
            cout<<base<<endl;
        }
    }
}