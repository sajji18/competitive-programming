#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    vector<int> v(0);
    v.push_back(a*b*c);
    v.push_back((a+b)*c);
    v.push_back(a*(b+c));
    v.push_back(a+b+c);
    // v.push_back(a+b*c);
    // v.push_back(a*b+c);
    
    auto maxEl = max_element(v.begin(), v.end());
    cout<<*maxEl<<endl;

}