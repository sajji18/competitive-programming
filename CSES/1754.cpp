#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        // 11 10 => 9 9
        if (max(a, b) > min(a, b) * 2) cout << "NO" << endl;
        else {
            if (a % 3 == 0) {
                if (b % 3 == 0) {
                    cout <<"YES" << endl;
                    continue;
                }
                else {
                    cout << "NO" << endl;
                    continue;
                }
            }
            if (b % 3 == 0) {
                if (a % 3 == 0) {
                    cout <<"YES" << endl;
                    continue;
                }
                else {
                    cout << "NO" << endl;
                    continue;
                }
            }
            if (a % 3 != 0 && b % 3 != 0) {
                if (a > b) {
                    while(a % 3 != 0) {
                        a -= 2; b -= 1;
                    }
                    if (b % 3 == 0) {
                        cout <<"YES" << endl;
                        continue;
                    }
                    else {
                        cout << "NO" << endl;
                        continue;
                    }
                }
                else {
                    while(b % 3 != 0) {
                        b -= 2; a -= 1;
                    }
                    if (a % 3 == 0) {
                        cout <<"YES" << endl;
                        continue;
                    }
                    else {
                        cout << "NO" << endl;
                        continue;
                    }
                }
            }
        }
    }
}