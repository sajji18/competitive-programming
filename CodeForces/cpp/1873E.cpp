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

int getWater(long long arr[], int n){
	long long res = 0;
	for(long long i = 1; i < n - 1; i++){
        long long res = 0;
        long long lMax[n];
        long long rMax[n];
        //Leftmost is itself leftmax for it
        lMax[0] = arr[0];
        //Rightmax for rightmax is itself
        rMax[n - 1] = arr[n - 1];
        //Pre - Computation
        for(long long i = 1; i < n; i++){
            lMax[i] = max(arr[i], lMax[i - 1]);
        }
        for(long long i = n - 2; i >= 0; i--){
            rMax[i] = max(arr[i], rMax[i + 1]);
        }
        for(long long i = 1; i < n - 1; i++){
            res = res + (min(lMax[i], rMax[i]) - arr[i]);
        }
        return res;
	}
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tsc; cin>>tsc;
    while(tsc--){
        long long n,x; cin>>n>>x;
        long long arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long lower = 0, higher = INT_MAX;

        while(lower < higher) {
            // mid is the height we are first taking into consideration as the boundary of the container
            long long mid = lower + (higher - lower + 1) / 2;
            long long total = 0;
            
            // Calculating water container
            for (int i = 0; i < n; i++) {
                total += max(mid - arr[i], 0LL);
            }

            // Capacity less than desired value, we need to increase height. Search in the right-half
            if(total <= x) {
                lower = mid;
            } 
            // Search in the left half
            else{
                higher = mid - 1;
            }
        }
        cout << lower << endl;
    }
}