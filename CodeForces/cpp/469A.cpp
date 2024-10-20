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
    ll n; cin>>n;
    // vll x, y;
    int levels[n+1] = {0};

    ll p1; cin>>p1;
    FOR(i,0,p1) {
        ll num; cin>>num;
        // x.push_back(num);
        levels[num]++;
    }

    ll p2; cin>>p2;
    FOR(i,0,p2) {
        ll num; cin>>num;
        // y.push_back(num);
        levels[num]++;
    }
    // { 0, 1, 2, 3, 4 }
    bool pass = true;
    FOR(i,1,n+1) {
        if (levels[i] == 0) {
            pass = false;
            break;
        }
    }

    pass ? cout<<"I become the guy."<<endl : cout<<"Oh, my keyboard!"<<endl;
}