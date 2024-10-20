#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define stkpll stack<pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

// & so that copy is not created and stack is passed by reference
void addElement(stkpll &stk1, ll element) {
    ll maximum = stk1.empty() ? element : max(element, stk1.top().second);
    stk1.push({element, maximum});
}

void removeElement(stkpll &stk1, stkpll &stk2) {
    if (stk2.empty()) {
        while(!stk1.empty()) {
            ll element = stk1.top().first;
            stk1.pop();
            ll maximum = stk2.empty() ? element : max(element, stk2.top().second);
            stk2.push({element, maximum});
        }
    }
    stk2.pop();
}

int getMaximum(stkpll &stk1, stkpll &stk2) {
    ll maximum;
    if (stk1.empty() || stk2.empty()) maximum = stk1.empty() ? stk2.top().second : stk1.top().second;
    else maximum = max(stk1.top().second, stk2.top().second);
    return maximum;
}

int solve(stkpll &stk1, stkpll &stk2, vll v, int d) {
    FOR(i,0,d) {
        addElement(stk1, v[i]);
    }
    ll minimum = getMaximum(stk1, stk2);
    // cout<<minimum<<endl;

    FOR(i,d,v.size()) {
        addElement(stk1, v[i]);
        removeElement(stk1, stk2);
        ll maximum = getMaximum(stk1, stk2);
        minimum = maximum < minimum ? maximum : minimum;
        // cout<<minimum<<endl;
    }

    return minimum;
}

int main(){
    sajji;

    ll n, q; cin>>n>>q;
    vll a(n);
    FOR(i,0,n) cin>>a[i];

    while(q--) {
        ll d; cin>>d;
        stkpll stk1, stk2;
        ll ans = solve(stk1, stk2, a, d);
        cout<<ans<<endl;
        // -----------------------TRY USING STACK MODIFICATION AND STACK AS A QUEUE-------------------------------
        // vll ans;
        // stack<pair<ll, ll>> stk1, stk2;
        // FOR(i,0,d) {
        //     ll maximum = stk1.empty() ? a[i] : max(a[i], stk1.top().second);
        //     stk1.push({a[i], maximum});
        // }
        // ll current_min = stk1.top().second;

        // FOR(i,d,n) {
        //     if (stk2.empty()) {
        //         while(!stk1.empty()) {
        //             ll element = stk1.top().first;
        //             stk1.pop();
        //             ll stack2_max = stk2.empty() ? element : stk2.top().second;
        //             stk2.push({element, stack2_max});
        //         }
        //     }
        //     stk2.pop();

        //     ll maximum = stk1.empty() ? a[i] : max(a[i], stk1.top().second);
        //     stk1.push({a[i], maximum});

        //     if (stk1.empty() || stk2.empty()) {
        //         ll overall_max = stk1.empty() ? stk2.top().second : stk1.top().second;
        //         ans.push_back(overall_max);
        //     } 
        //     else ans.push_back(max(stk1.top().second, stk2.top().second));
        // }

        // ll minimum = *min_element(ans.begin(), ans.end());
        // cout<<minimum<<endl;



        // ----------------TRY USING DEQUE AND QUEUE MODIFICATION-----------------------
        // deque <ll> dq;  
        
        // // First dq elements in the deque, front is minimum: push to ans vector
        // FOR(i,0,d) {
        //     while (!dq.empty() && dq.back() < a[i])
        //         dq.pop_back();
        //     dq.push_back(a[i]);
        // }
        // ans.push_back(dq.front());

        // // Basically remove first element and add an element (finding max of this new deque)
        // FOR(i,d,n) {
        //     if (dq.size() == d) dq.pop_front();

        //     while (!dq.empty() && dq.back() < a[i] )
        //         dq.pop_back();
        //     dq.push_back(a[i]);

        //     ans.push_back(dq.front());
        // }
        // // FOR(i,0,ans.size()) cout<<ans[i]<<" ";
        // // cout<<endl;

        // ll qans = *min_element(ans.begin(), ans.end());
        // cout<<qans<<endl;
    }
}