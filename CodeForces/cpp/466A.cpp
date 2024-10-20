#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>

int main(){
    ll n, m, a, b; cin>>n>>m>>a>>b;
    float m_ride_cost = b*1.0f/m;
    ll cost = 0;
    if (m_ride_cost < a) {
        while(n > 0) {
            n -= m;
            cost += b;
        }
        if (n == 0) {
            // cost -= b;
            cout<<cost<<"\n";
            return 0;
        }
        else {
            ll m_ride_cost = cost;
            n += m;
            cost -= b;
            cout<<min(m_ride_cost, (cost + a*(n)))<<"\n";
            return 0;
        }
    }
    else {
        cout<<(a*n)<<"\n";
        return 0;
    }
}