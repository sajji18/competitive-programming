#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }


/* UTILS */
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // TC => O(tsc * n * n) => O(10^4 * 9 * 10^10) ==> Confirm TLE
    int tsc;
    cin >> tsc;
    while (tsc--) {
        long long n; cin>>n;
        vi a,b;

        // input
        f(i,0,n){
            long long x; cin>>x;
            a.pb(x);
        }
        f(i,0,n){
            long long x; cin>>x;
            b.pb(x);
        }

        // column iteration 
        // long long res1=0;
        // f(i,0,n){
        //     long long temp = long long_MAX;
        //     f(j,0,n){
        //         long long sum = (b[i] + a[j]);
        //         temp = min(temp, sum);
        //     }
        //     res1 += temp;
        // }

        // // row iteration
        // long long res2=0;
        // f(i,0,n){
        //     long long temp = long long_MAX;
        //     f(j,0,n){
        //         long long sum = (b[j] + a[i]);
        //         temp = min(temp, sum);
        //     }
        //     res2 += temp;
        // }

        // cout<<min(res1, res2)<<endl;
        long long min_a = *min_element(a.begin(), a.end());
        long long min_b = *min_element(b.begin(), b.end());

        // column iterate
        long long res1 = 0, res2 = 0;
        f(i,0,n){
            res1 += b[i] + min_a;
            res2 += a[i] + min_b;
        }
        cout<<min(res1, res2)<<endl;
    }
}