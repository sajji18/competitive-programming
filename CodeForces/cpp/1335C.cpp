#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int hashed[n+1] = {0};
        vector <long long> vll;
        for (int i=0; i<n; i++) {
            int x; cin>>x;
            vll.push_back(x);
            hashed[x]++;
        }
        if (n == 1) {
            cout<<0<<endl;
            continue;
        }
        // 4
        // 7
        // 4 2 4 1 4 3 4 => 3
        // 5
        // 2 1 5 4 3 => 1
        // 1
        // 1 => 0
        // 4
        // 1 1 1 3 => 2
        int max_count = 1, distinct_count = 0;
        for(int i=1; i<n+1; i++) {
            // cout<<"Hashed: "<<i<<" is: "<<hashed[i]<<endl;
            if (hashed[i] > 0) distinct_count++;
            max_count = max(max_count, hashed[i]);
        }
        // cout<<"Distinct Numbers :"<<distinct_count<<endl;
        // cout<<"Max COunt :"<<max_count<<endl;
        // if (max_count > distinct_count) {
        //     while(max_count >= distinct_count) {

        //     }
        // }
        if (max_count == distinct_count) {
            cout<<min(max_count-1, distinct_count)<<endl;
        }
        else cout<<min(max_count, distinct_count)<<endl;
    }
}