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
        int n, x; cin>>n>>x;
        vll a(n);
        ll odd_cnt = 0, even_cnt = 0;
        FOR(i,0,n) {
            cin>>a[i];
            if (a[i] % 2 == 0) even_cnt++;
            else odd_cnt++;
        }

        bool found = false;

        if (odd_cnt == 0) {
            cout<<"NO"<<endl;
            continue;
        }
        else if (odd_cnt != 0 and even_cnt != 0){
            if (odd_cnt % 2 == 0) {
                if (odd_cnt - 1 + even_cnt >= x) {
                    found = true;
                }
            }
            else {
                if (odd_cnt + even_cnt >= x) {
                    found = true;
                }
            }
        }
        else if (even_cnt == 0) {
            if (x % 2 == 1 and odd_cnt >= x) {
                found = true;
            }
        }
        found ? cout<<"YES"<<endl : cout<<"NO"<<endl;


        // MISREAD => Elements are not always consecutive
        // vll pfx(n);
        // pfx[0] = a[0];
        // FOR(i,1,n) {
        //     pfx[i] = pfx[i-1] + a[i];
        // }

        // bool found = false;
        // FOR(i,0,n) {
        //     if ((pfx[i+x-1] - pfx[i]) % 2 == 1) {
        //         found = true;
        //     }
        // }

        // found ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }
}