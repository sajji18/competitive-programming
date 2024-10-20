#include <bits/stdc++.h>
using namespace std;

int main(){
    // #..###
    string s; cin>>s;
    int m; cin>>m;

    int n = s.length();
    int pf[n];

    pf[0] = 0;
    for (int i=1; i<n; i++) {
        if (s[i] == s[i-1]) pf[i] = pf[i-1] + 1;
        else pf[i] = pf[i-1];
    }

    while(m--) {
        int l, r; cin>>l>>r;
        cout<<pf[r-1] - pf[l-1]<<endl;
    }
}