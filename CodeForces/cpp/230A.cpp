#include <bits/stdc++.h>
using namespace std;

// fight in any order
// 2 2
// 100 0
// 1 99  ---> YES
int main(){
    int s, n, flag=1; cin>>s>>n;
    vector<pair<int,int>> v;

    while (n--){
        int x,y; cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(v[i].first<s){
            s += v[i].second;
        }
        else{
            flag=0;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }

}