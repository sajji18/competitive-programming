#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, solve=0;; cin>>n;
    while(n--){
        vector<int> v(0);
        for(int i=0; i<3; i++){
            int x; cin>>x;
            v.push_back(x);
        }
        int cnt = count(v.begin(), v.end(), 1);
        if(cnt>=2){
            solve++;
        }
    }
    cout<<solve;
}