#include <iostream>
#include <math.h>
#include <cmath>
#include <climits>
#include <set>
#include <map>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <queue>
#include <numeric>
 
using namespace std;
 
#define ll unsigned long long
#define ld long double
#define pb push_back
#define pop_b pop_back
#define all(x) x.begin(), x.end()
#define ull unsigned long long

bool checkSorted(vector <int> &v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i+1] < v[i]){
            return false;
        }
    }
    return true;
}

void printvector(vector<int> &v){
    for(auto it = v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tsc;
    cin >> tsc;
    while (tsc--) {
        int n; cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        // 4 6 3
        vector <int> a;
        if(checkSorted(v)){
            for(auto it = v.begin(); it < v.end(); it++){
                a.pb(*it);
            }
        }
        else{
            a.push_back(v[0]);
            for(int i=1; i<v.size(); i++){
                if(v[i] >= v[i-1]){
                    a.pb(v[i]);
                }
                else{
                    a.pb(1);
                    a.pb(v[i]);
                }
            }
        }

        cout<<a.size()<<" "<<endl;
        printvector(a);

    }
}