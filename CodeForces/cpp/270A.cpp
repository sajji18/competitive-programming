#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        360 % (180-a) == 0 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}