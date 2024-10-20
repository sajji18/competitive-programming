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

ll M = 1e9 + 7;

int main(){
    sajji;
    ll n, a, b, c; cin >> n >> a >> b >> c;
    // 5 5 3 2
    // 2 => 3 + 2
    vll ans;
    if (n > a) {
        if (n % a == 0) {
            ans.push_back(n / a);
        }
        else {
            ll numb = (n / b), numc = (n / c);
            for (int i=1; i<=numb; i++) {
                ll numc2 = (n - i * b) / c;
                if ((n - i * b) % a == 0) ans.push_back((n - i * b) / a + i);
                for (int j=1; j<=numc2; j++) {
                    if ((n - i * b - j * c) % a == 0) ans.push_back((n - i * b - j * c) / a + i + j);
                }
            }
            for (int i=1; i<=numc; i++) {
                ll numb2 = (n - i * c) / b;
                if ((n - i * c) % a == 0) ans.push_back((n - i * c) / a + i);
                for (int j=1; j<=numb2; j++) {
                    if ((n - i * c - j * b) % a == 0) ans.push_back((n - i * c - j * b) / a + i + j);
                }
            }
        }
    }

    if (n % b == 0) {
        ans.push_back(n / b);
    }
    else {
        ll numa = (n / a), numc = (n / c);
        for (int i=1; i<=numa; i++) {
            ll numc2 = (n - i * a) / c;
            if ((n - i * a) % b == 0) ans.push_back((n - i * a) / b + i);
            for (int j=1; j<=numc2; j++) {
                if ((n - i * a - j * c) % b == 0) ans.push_back((n - i * a - j * c) / b + i + j);
            }
        }
        for (int i=1; i<=numc; i++) {
            ll numa2 = (n - i * c) / a;
            if ((n - i * c) % b == 0) ans.push_back((n - i * c) / b + i);
            for (int j=1; j<=numa2; j++) {
                if ((n - i * c - j * a) % b == 0) ans.push_back((n - i * c - j * a) / b + i + j);
            }
        }
    } 

    if (n % c == 0) {
        ans.push_back(n / c);
    }
    else {
        ll numa = (n / a), numb = (n / b);
        for (int i=1; i<=numa; i++) {
            ll numb2 = (n - i * a) / b;
            if ((n - i * a) % c == 0) ans.push_back((n - i * a) / c + i);
            for (int j=1; j<=numb2; j++) {
                if ((n - i * a - j * b) % c == 0) ans.push_back((n - i * a - j * b) / c + i + j);
            }
        }
        for (int i=1; i<=numb; i++) {
            ll numa2 = (n - i * b) / a;
            if ((n - i * b) % c == 0) ans.push_back((n - i * b) / c + i);
            for (int j=1; j<=numa2; j++) {
                if ((n - i * b - j * a) % c == 0) ans.push_back((n - i * b - j * a) / c + i + j);
            }
        }
    }

    cout << *max_element(all(ans)) << endl;
}