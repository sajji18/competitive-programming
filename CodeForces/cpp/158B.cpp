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

    int n; cin>>n;
    vi gp;
    int h[5] = {0}; // Stores no. of groups with 1, 2, 3, 4 people
    f(i,0,n){
        int x; cin>>x;
        h[x]++;
        gp.pb(x);
    }

    // Logic
    int cnt = 0;
    cnt += h[4]; // 4 people in 1 taxi
    h[4] = 0;

    if(h[2] % 2 == 0){
        cnt += h[2] / 2;
        h[2] = 0;
    }
    else{
        cnt += h[2] / 2;
        h[2] = 1;
    }

    if(h[1] == h[3]){
        cnt += h[1];
        cnt += h[2];
    }

    else if(h[1] > h[3]){
        cnt += h[3];
        h[1] -= h[3];
        h[3] = 0; 

        if((h[1] + h[2]*2) % 4 == 0){
            cnt += (h[1] + h[2]*2) / 4;
        }
        else{
            cnt += (h[1] + h[2]*2) / 4 + 1;
        }
    }

    else if(h[1] < h[3]){
        cnt += h[1];
        h[3] -= h[1];
        h[1] = 0;
        cnt += h[3];
        cnt += h[2];
    } 

    cout<<cnt<<endl;

}