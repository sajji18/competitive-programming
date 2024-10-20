#include <bits/stdc++.h>
using namespace std;

int main(){
    int tsc; cin>>tsc;
    while(tsc--) {
        int m; cin>>m;
        int arr[2][m];
        for(int i=0; i<m; i++) cin>>arr[0][i];
        for(int i=0; i<m; i++) cin>>arr[1][i];

        int sum_1[m], sum_2[m];

        sum_1[m-1] = 0;
        sum_2[0] = 0;

        for(int i=m-2; i>=0; i--) sum_1[i] = sum_1[i+1] + arr[0][i+1];
        for(int i=1; i<m; i++) sum_2[i] = sum_2[i-1] + arr[1][i-1];

        int ans = INT_MAX;
        for(int i=0; i<m; i++) {
            ans = min(ans, max(sum_1[i], sum_2[i]));
        }   
        cout<<ans<<endl;
    }
}