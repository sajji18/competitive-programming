#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<int, int>> vpi;
    for (int i=0; i<n; i++) {
        int x, y; cin>>x>>y;
        vpi.push_back({x, y});
    }
    sort(vpi.begin(), vpi.end());
    // cout<<vpi[0].first<<" "<<vpi[1].first;
    int exists = false;
    for (int i=0; i<n-1; i++) {
        if (vpi[i].first < vpi[i+1].first) {
            // cout<<"hellp";
            if (vpi[i].second > vpi[i+1].second) {
                exists = true;
            }
        }
    }
    exists ? cout<<"Happy Alex" : cout<<"Poor Alex";
}