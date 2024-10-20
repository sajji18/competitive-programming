#include <bits/stdc++.h>
using namespace std;

// n=10; o/p - 2 3 5 7
void primeLessThanN(int n){
    if (n>=2) cout<<2<<" ";
    if (n>=3) cout<<3<<" ";
    if (n>=5) cout<<5<<" ";
    for(int i=5; i<=n; i+=6){
        if(n>=i && (i!=5||(i%5)!=0)) cout<<i<<" ";
        if(n>=(i+2) && (((i+2)%5)!=0)) cout<<i+2<<" ";
    }
}

int main(){
    int x; cin>>x;
    primeLessThanN(x);
}