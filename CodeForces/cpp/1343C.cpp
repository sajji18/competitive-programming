#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll maxSubSum(vll arr, int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin>>n;
        vll a(n);
        FOR(i,0,n) cin>>a[i];

        stack <ll> stk;
        FOR(i,0,n) {
            if (stk.empty()) stk.push(a[i]);
            if (!stk.empty()) {
                if ((stk.top() > 0 and a[i] > 0) or (stk.top() < 0 and a[i] < 0)) {
                    if (stk.top() >= a[i]) continue;
                    else {
                        stk.pop();
                        stk.push(a[i]);
                    }
                }
                else {
                    stk.push(a[i]);
                }
            }
        }

        vll sbsq;
        while(!stk.empty()){
            sbsq.push_back(stk.top());
            stk.pop();
        }
        reverse(sbsq.begin(), sbsq.end());
        ll sum = accumulate(sbsq.begin(), sbsq.end(), 0LL);
        cout<<sum<<endl;
    }
}