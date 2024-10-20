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

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n, m; 
        cin >> n >> m;
        vector <vll> matrix(n);

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                ll x; cin >> x;
                matrix[i].push_back(x);
            }
        }

        ll operations = 0;

        // for (int j=0; j<m; j++) {
        //     for (int i=0; i<n/2; i++) {
        //         operations += abs(matrix[i][j] - matrix[n-i-1][j]);

        //         ll average = (matrix[i][j] + matrix[n-i-1][j]) / 2;
        //         matrix[i][j] = average;
        //         matrix[n-i-1][j] = average;
        //     }
        // }

        
        // for (int i=0; i<n; i++) {
        //     for (int j=0; j<m/2; j++) {
        //         // if ((matrix[i][j] % 2 == 0 && matrix[i][m-j-1] % 2 == 0) || (matrix[i][j] % 2 == 1 && matrix[i][m-j-1] % 2 == 1)) {
        //         operations += abs(matrix[i][j] - matrix[i][m-j-1]);

        //         ll average = (matrix[i][j] + matrix[i][m-j-1]) / 2;
        //         matrix[i][j] = average;
        //         matrix[i][m-j-1] = average;

        //     }
        //     // }
        // }

        for (int i=0; i<n/2; i++) {
            for (int j=0; j<m/2; j++) {
                vll corners; 
                ll median;
                corners.push_back(matrix[i][j]);
                corners.push_back(matrix[i][m-j-1]);
                corners.push_back(matrix[n-i-1][j]);
                corners.push_back(matrix[n-i-1][m-j-1]);
                sort(corners.begin(), corners.end());
                if (corners.size() % 2 == 0) {
                    median = corners[corners.size() / 2];
                }
                else {
                    median = corners[(corners.size() - 1) / 2];
                }
                operations += (abs(median - matrix[i][j]) + abs(median - matrix[i][m-j-1]) + abs(median - matrix[n-i-1][j]) + abs(median - matrix[n-i-1][m-j-1]));
            }
        }

        if (n % 2 == 1) {
            for (int j=0; j<m/2; j++) {
                operations += abs(matrix[n/2][j] - matrix[n/2][m-j-1]);
            }
        }

        if (m % 2 == 1) {
            for (int i=0; i<n/2; i++) {
                operations += abs(matrix[i][m/2] - matrix[n-i-1][m/2]);
            }
        }
    
        cout << operations << endl;
    }
}