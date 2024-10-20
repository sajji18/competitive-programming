#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i=a; i<b; i++)
# define RFOR(i, a, b) for (int i=a; i>=b; i--)
# define all(x) (x).begin(), (x).end()
# define vll vector <long long>
# define vpll vector <pair<long long, long long>>
# define endl "\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(NULL);

ll M = 1e9 + 7;

int main(){
    sajji;
    ll _; cin>>_;
    while(_--) {
        ll n; cin >> n;
        vll a(n), pfx(n);
        FOR(i,0,n) cin >> a[i];

        // brute force
        // vll answer1;
        // for (int i=0; i<n; i++) {
        //     vll temp = a;
        //     ll score = temp[i], ans = 0;
        //     for (int j=0; j<n; j++) {
        //         if (i == j) continue;
        //         if (score >= temp[j]) {
        //             ans++;
        //             score += temp[j];
        //             temp[j] = LONG_LONG_MAX;
        //             j = -1;
        //         }
        //     }
        //     answer1.push_back(ans);
        // }

        // for(auto value : answer1) {
        //     cout << value << " ";
        // }

        // cout << endl;

        // 1 2 4 5 20
        // 1 2 5 20 => for ai = 4
        // 1 3 7 12 32 => pfx
        // 28 27 25 20 = sfx

        vll answer, temp = a;

        sort(all(temp));
        pfx[0] = temp[0];
        FOR(i,1,n) pfx[i] = pfx[i-1] + temp[i];

        for (int i=0; i<n; i++) {
            // ll score = a[i];
            // ll ans = 0;

            vll segs = a;
            // auto it = a.begin() + i;
            // segs.erase(it);

            auto limit = upper_bound(segs.begin(), segs.end(), pfx[i]);
            if (limit == segs.end()) limit--;
            ll index = limit - segs.begin();
            
            answer.push_back(index);
            // ll index = upper_bound(all(temp), score) - temp.begin();

            // if (index != 0) index--;

            // ans += index + 1;
            // score = score + accumulate(temp.begin(), temp.begin() + index, 0);

            // for (int j=index+1; j<temp.size(); j++) {
            //     if (score >= temp[j]) {
            //         score += temp[j];
            //         ans++;
            //     }
            // }
            // answer.push_back(ans);

        }

        for(auto value : answer) {
            cout << value << " ";
        }

        cout << endl;
    }
}