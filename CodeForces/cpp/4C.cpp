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

unordered_map <string, ll> mp;

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        string s; cin>>s;
        mp[s]++;
        if (mp[s] == 1) cout<<"OK"<<endl;
        else cout<<s<<mp[s]-1<<endl; 
    }
}