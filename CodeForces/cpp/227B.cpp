#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map <int, int> mp;
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]] = i+1;
    }
    int m; cin>>m;
    long long vatsya = 0, petya = 0;
    while(m--) {
        int b; cin>>b;
        vatsya += mp[b];
        petya += n - mp[b] + 1;
    }
    cout<<vatsya<<" "<<petya;
}