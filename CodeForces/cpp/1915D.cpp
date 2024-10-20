#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        // bool consonant_vowel = false;
        string stk = "";
        for(int i=0; i<n-1; i++) {
            if (stk.empty()) {
                stk.push_back(s[i]);
                continue;
            }
            if (!stk.empty() and (stk[stk.length() - 1] == 'b' or stk[stk.length() - 1] == 'c' or stk[stk.length() - 1] == 'd')) {
                    if (s[i] == 'a' or s[i] == 'e') {
                        if ((s[i+1] == 'b' or s[i+1] == 'c' or s[i+1] == 'd')) {
                            if (i != n-2){
                                if ((s[i+2] != 'b' and s[i+2] != 'c' and s[i+2] != 'd')) {
                                stk.push_back(s[i]);
                                stk.push_back('.');
                                // i++;
                                continue;
                                }
                                else {
                                    stk.push_back(s[i]);
                                    stk.push_back(s[i+1]);
                                    stk.push_back('.');
                                    i++;
                                    continue;
                                }
                            }
                            else {
                                stk.push_back(s[i]);
                                stk.push_back(s[i+1]);
                                i++;
                                continue;
                            }
                            
                        }
                        else {
                            stk.push_back(s[i]);
                            stk.push_back(s[i+1]);
                            i++;
                            continue;
                            // stk.push_back('.');
                        }
                    }
            }
            stk.push_back(s[i]);
        }

        if (stk[stk.length() - 1] == '.') {
            stk.pop_back();
        }
        // stk.push_back(s[n-1]);
        if (stk[stk.length() - 1] != s[n-1]) {
            stk.push_back(s[n-1]);
        }
        cout<<stk<<endl;
        // string decoded = "";
        // while(!stk.empty()) {
        //     char ch = stk[stk.length() - 1];
        //     decoded = ch + decoded;
        //     stk.pop();
        // }
        // cout<<decoded<<endl;
    }
}