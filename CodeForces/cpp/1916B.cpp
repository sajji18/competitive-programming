#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll gcd(ll int a, ll int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

ll lcm(ll a, ll b) { 
    return (a / gcd(a, b)) * b; 
} 

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll a, b; cin>>a>>b;
        // if (a % 2 == 0 and b % 2 == 0) {
        //     if (a == 2) {
        //         cout<<a*b<<endl;
        //     }
        //     else {
        //         ll res = lcm(a, b);
        //         res == b ? cout<<res*2<<endl : cout<<res<<endl;
        //     }
        // }
        // else if (a % 2 == 1 and b % 2 == 1) {
        //     if (a == 1) cout<<b*b<<endl;
        //     else{
        //         cout<<a*b<<endl;
        //     }
        // }
        // else {
        //     if (a == 1) cout<<b*b<<endl;
        //     else{
        //         ll res = lcm(a, b);
        //         res == b ? cout<<res*2<<endl : cout<<res<<endl;
        //     }
        // }
        if (a == 1) {
            cout<<b*b<<endl;
        }
        else {
            // if (a % 2 == 0 and b % 2 == 0) {
            //     if (b % a == 0) {
            //         cout<<lcm(a, b)*(b/a)<<endl;
            //         // continue;
            //     }
            //     else cout<<lcm(a, b)<<endl;
            // }
            // else if (a % 2 == 1 and b % 2 == 1){
            //     if (b % a == 0) {
            //         cout<<lcm(a, b)*(b/a)<<endl;
            //     }
            //     else cout<<lcm(a, b)<<endl;
            // }
            // else {
            //     if (b % a == 0) {
            //         cout<<lcm(a, b)*(b/a)<<endl;
            //     }
            //     else {
            //         cout<<lcm(a, b)<<endl;
            //     }
            // }
            if (b % a == 0) {
                cout<<lcm(a, b)*(b/a)<<endl;
            }
            else {
                cout<<lcm(a, b)<<endl;
            }
        }
    }
}