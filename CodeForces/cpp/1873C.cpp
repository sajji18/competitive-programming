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

    int tsc;
    cin >> tsc;
    while (tsc--) {
        string arr[10];

        f(i,0,10){
            cin>>arr[i];
        }
        int score = 0;

        f(i,0,10){
            // cout<<score<<endl;
            f(j,0,10){
                if(i==0 or i==9){
                    if(arr[i][j] == 'X'){
                            score += 1;
                            // cout<<score<<endl;
                        }
                }
                if(i==1 or i==8){
                    if(j==0 or j==9){
                        if(arr[i][j] == 'X'){
                            score += 1;
                            // cout<<score<<endl;
                        }
                    }
                    else {
                        if(arr[i][j] == 'X'){
                            score += 2; 
                            // cout<<score<<endl;
                        }
                    }
                }
                if(i==2 or i==7){
                    if(j==0 or j==9){
                        if(arr[i][j] == 'X'){
                            score += 1;
                            // cout<<score<<endl;

                        }
                    }
                    else if(j==1 or j==8){
                        if(arr[i][j] == 'X'){
                            score += 2;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j>=2 and j<=7){
                        if(arr[i][j] == 'X'){
                            score += 3;
                            // cout<<score<<endl;
                        }
                    }
                }
                if(i==3 or i==6){
                    if(j==0 or j==9){
                        if(arr[i][j] == 'X'){
                            score += 1;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j==1 or j==8){
                        if(arr[i][j] == 'X'){
                            score += 2;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j==2 or j==7){
                        if(arr[i][j] == 'X'){
                            score += 3;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j>=3 and j<=6){
                        if(arr[i][j] == 'X'){
                            score += 4;
                            // cout<<score<<endl;
                        }
                    }
                }
                if(i==4 or i==5){
                    if(j==0 or j==9){
                        if(arr[i][j] == 'X'){
                            score += 1;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j==1 or j==8){
                        if(arr[i][j] == 'X'){
                            score += 2;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j==2 or j==7){
                        if(arr[i][j] == 'X'){
                            score += 3;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j==3 or j==6){
                        if(arr[i][j] == 'X'){
                            score += 4;
                            // cout<<score<<endl;
                        }
                    }
                    else if(j==4 or j==5){
                        if(arr[i][j] == 'X'){
                            score += 5;
                            // cout<<score<<endl;
                        }
                    }
                }
            }
        }
        cout<<score<<endl;
    }
}