#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
int hashed[N] = {0};

int main(){
    int n, m; cin>>n>>m;

    // Thought process is simple, implementation moderate to decent
    int vi[n];
    for(int i=0; i<n; i++) {
        cin>>vi[i];
        if (hashed[vi[i]] < 1) hashed[vi[i]]++;
    }

    int sfx[n];
    sfx[n-1] = 1;
    hashed[vi[n-1]]--;

    for (int i=n-2; i>=0; i--) {
        if (hashed[vi[i]] == 1) sfx[i] = sfx[i+1] + hashed[vi[i]]--;
        else sfx[i] = sfx[i+1];
    }

    while(m--) {
        int l; cin>>l;
        cout<<sfx[l-1]<<endl;
    }
}