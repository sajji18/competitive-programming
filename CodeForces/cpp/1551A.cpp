#include <bits/stdc++.h>
using namespace std;

// if n % 3 == 0, c1 = c2
// if n % 3 == 1, c1 = c2 + 1
// if n % 3 == 2, c1 + 1 = c2

int main(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if (n % 3 == 0) {
            cout<<(n / 3)<<" "<<(n / 3)<<"\n";
        }
        else if (n % 3 == 1) {
            cout<<(n / 3) + 1<<" "<<(n / 3)<<"\n";
        }
        else if (n % 3 == 2) {
            cout<<(n / 3)<<" "<<(n / 3) + 1<<"\n";
        }
    }
}