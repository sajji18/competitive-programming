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
    vll ans;

    if (n <= 3 and n != 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i=1; i<=n/2; i++) {
        ans.push_back(i * 2);
    }

    for (int i=1; i<=(n+1)/2; i++) {
        ans.push_back(2 * i - 1);
    }

    for (auto item : ans) {
        cout << item << " ";
    }

    cout << endl;
}