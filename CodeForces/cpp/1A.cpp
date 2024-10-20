#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a; cin>>n>>m>>a;
    // cout<<(n/a)+1 + (m/a)+1;
    // if(a==1){
    //     cout<<(m*1LL*n)/(a*a);
    // }

    // else if(n==1 or m==1){
    //     if(m*1ll*n > a*1ll*a){
    //         cout<<(m/a + n/a) + 2LL;
    //     }
    //     else{
    //         cout<<1;
    //     }
    // }

    // else if(m*1ll*n < a*1ll*a){
    //     cout<<1;
    // }

    // else {
    //     if(m%a!=0 && n%a!=0){
    //     cout<<(m/a + n/a) + 2LL;
    //     }

    //     else if(m%a==0 && n%a!=0){
    //         cout<<(m*1LL*n)/(a*1LL*a) + n/a;
    //     }
    //     else if (m%a!=0 && n%a==0){
    //         cout<<(m*1LL*n)/(a*1LL*a) + m/a;
    //     }

    //     else if(m%a==0 && n%a==0){
    //         cout<<(m*1LL*n)/(a*1LL*a);
    //     }
    // }
    long long int answer = ((n+a-1)/a)*1ll*((m+a-1)/a);
	cout << answer;
}