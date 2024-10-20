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
    
    ll n; cin >> n;
    vll a;
    a.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            a.push_back(n);
        }
        else {
            n = n * 3 + 1;
            a.push_back(n);
        }
    }

    for (auto item : a) {
        cout << item << " ";
    }
}