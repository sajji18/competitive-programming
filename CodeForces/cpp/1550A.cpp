#include <bits/stdc++.h>
using namespace std;

int main(){
    int tsc; cin>>tsc;
    while(tsc--) {
        int n; cin>>n;
        int ans=0, decrement=1;
        while(n>0){
            n -= decrement;
            ans ++;
            decrement += 2;
        }
        cout<<ans<<endl;
    }
}