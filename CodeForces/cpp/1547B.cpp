#include <bits/stdc++.h>
using namespace std;

bool check_alpha(string s) {
    int arr[26];
    for (int i=0; i<s.length(); i++){
        int pos = s.find(char('a' + i));
        if (pos == -1) return 0;
        arr[i] = pos;
    }
    int l = arr[0], h = arr[0];

    for (int i=1; i<s.length(); i++){
        int pos = arr[i];
        if (pos == l-1) l = pos;
        else if (pos == h + 1) h = pos;
        else return 0;
    }
    return 1;
}

int main(){
    int tsc; cin>>tsc;
    while(tsc--){
        string s;
        cin>>s;
    //     int L = s.find('a');
    //     if (L == string::npos) {
    //         cout<<"NO\n";
    //         continue;
    //     }
    //     bool yes = true;
    //     int R = L;
    //     for (int i=1; i<s.length(); i++) {
    //         int pos = s.find(char('a' + i));
    //         if (pos == string::npos || (pos != L-1 && pos != R+1)) {
    //             yes = false;
    //             break;
    //         }
    //         else {
    //             L = min(L , pos);
    //             R = max(R, pos);
    //         }
    //     }

    //     if (yes) {
    //         cout<<"YES\n"; 
    //     }
    //     else {
    //         cout<<"NO\n";
    //     }
        if (check_alpha(s)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}