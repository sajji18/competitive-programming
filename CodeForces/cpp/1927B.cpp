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

// vll results;

// void brute_recursion(vector <vll> a, ll n, ll m, ll operations) {
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<m/2; j++) {
//             operations += abs(a[i][j] - a[i][m-j-1]);
//             a[i][j] = 
//         }
//     }
// } 

// 0 0 0 1 0 2 0 3 

// int main () {
//     ll n; cin >>n;
//     int arr[200001] = {0};
//     string ans = "";
//     for (int i=0; i<n; i++) {
//         int x; cin >> x;
//         ans.push_back(char('a' + arr[x]));
//         arr[x]++;
//     }
// }

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n, count = 0; cin >> n;
        vll a(n);

        FOR(i,0,n) {
            cin >> a[i];
            count += (a[i] == 0);
        }

        vll temp = a;

        vector <char> characters; // a b c d e
        for (int i=0; i<count; i++) {
            characters.push_back('a' + i);
        }

        // for (auto val : characters) {
        //     cout << val << " ";
        // }
        // cout << endl;

        map <char, ll> characterMap;
        for (auto character : characters) {
            for (int i=0; i<n; i++) {
                if (characterMap[character] == temp[i]) {
                    characterMap[character]++;
                    temp[i] = INT_MAX;
                }
            }
        }

        // for (auto val : characterMap) {
        //     cout << val.first << " " << val.second << endl;
        // }

        // cout << "EK ho Gya" << endl;


        string ans = "";
        for (int i=n-1; i>=0; i--) {
            for (auto val : characterMap) {
                // cout << val.first << " " << val.second << endl;
                if (val.second == a[i] + 1) {
                    // cout << "hello" << endl;
                    ans = val.first + ans;
                    characterMap[val.first]--;
                    break;
                }
                // cout << "Answer is : " << ans << endl;
            }
        }

        cout << ans << endl;
    }
}