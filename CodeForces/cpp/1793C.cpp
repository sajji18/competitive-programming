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
        int n; cin>>n;
        vll a(n); 
        FOR(i,0,n) cin>>a[i];

        ll l=0, h=n-1;
        // bool found = false;

        vll temp = a;
        sort(all(temp));
        ll max_idx = n-1, min_idx = 0;
        
        while(l<h) {
            bool l_idx = true, h_idx = true;
            if(a[l] == temp[min_idx]) {
                l++; min_idx++;
                l_idx = false;
                if (l == h) break;
            }
            else if(a[l] == temp[max_idx]) {
                l++; max_idx--;
                l_idx = false;
                if (l == h) break;
            }
            if(a[h] == temp[max_idx]) {
                h--; max_idx--;
                h_idx = false;
                if (l == h) break;
            }
            else if (a[h] == temp[min_idx]) {
                h--; min_idx++;
                h_idx = false;
                if (l == h) break;
            }
            if (l_idx and h_idx) {
                // found = true;
                break;
            }
        }
        l == h ? cout<<-1<<endl : cout<<l+1<<" "<<h+1<<endl;
        // found ? cout<<l+1<<" "<<h+1<<endl : cout<<-1<<endl;
    }
}