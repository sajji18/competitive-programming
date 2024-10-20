#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <pair<int, int>> v;
    // vector <pair<int, int>> v, special_x, special_y;
    for(int i=0; i<n; i++) {
        int x, y; cin>>x>>y;
        v.push_back({x, y});
    }
    // sort(v.begin(), v.end());
    // int count = 0;
    // for (int i=0; i<n-2; i++) {
    //     if (v[i].first == v[i+1].first and v[i+1].first == v[i+2].first) {
    //         special_x.push_back({v[i+1].first, v[i+1].second});
    //     }
    // }
    // sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
    //     return a.second < b.second;
    //     });
    // for (int i=0; i<n-2; i++) {
    //     if (v[i].second == v[i+1].second and v[i+1].second == v[i+2].second) {
    //         special_y.push_back({v[i+1].first, v[i+1].second});
    //     }
    // }
    // for (auto pair_1 : special_x) {
    //     for (auto pair_2 : special_y) {
    //         if (pair_1.first == pair_2.first and pair_1.second == pair_2.second) {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;
    int count = 0;
    for (int i=0; i<n; i++) {
        bool left = false, right = false, up = false, down = false;
        for (int j=0; j<n; j++) {
            if (i == j) continue;
            if (v[i].first == v[j].first) {
                if (v[i].second < v[j].second) {
                    right = true;
                }
                if (v[i].second > v[j].second) {
                    left = true;
                }
            }
            if (v[i].second == v[j].second) {
                if (v[i].first < v[j].first) {
                    up = true;
                }
                if (v[i].first > v[j].first) {
                    down = true;
                }
            }
        }
        if (left and down and up and right) {
            count++;
        }
    }
    cout<<count;
}